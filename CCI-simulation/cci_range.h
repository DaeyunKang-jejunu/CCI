//------------------------------------------------------------
// Filename : cci_range.h
// Purpose  : C++ mirror of the proposed range-based coherence tracking state.
//            Phase 0 (spec/skeleton) + Phase 1 (range entry + request intake).
//
// Design source (oracle): CCI_SV/rtl/cci_memcpy_pkg.sv (cci_range_entry_t) and
// cci_range_rim_tracker.sv (SINGLE entry, req_ready = ~valid). This C++ port is
// an OBSERVATION model: it does NOT move data and, in Phases 0-1, does NOT alter
// timing (no gating, no hazard). Early invalidation (Phase 2), done_mask update
// on B (Phase 3), and hazard/progressive release (Phase 4) are added later.
//
// All proposed-side code is compiled only under -DCCI_PROPOSED, so a build
// without the flag is bit-identical to the existing model (non-regression).
//
// Invariants to enforce as the implementation grows (assert-checked):
//   I1. write_release=0 until all CR for the entry's line_mask are collected
//       (no target-line B before invalidation completes).           [Phase 2]
//   I2. done_mask is always a subset of line_mask (done_mask & ~line_mask == 0).
//   I3. a completed line has hazard=0; a pending target line (different source)
//       has hazard=1.                                               [Phase 4]
//   I4. DONE  <=>  (line_mask & ~done_mask) == 0.                    [Phase 3]
//   P1-accounting (this phase): sum of popcount(line_mask) over all allocated
//       entries == total target lines written; alloc_count == distinct pages.
//------------------------------------------------------------
#ifndef CCI_RANGE_H
#define CCI_RANGE_H

#include <cstdint>

enum CciRangeState {
  CCI_RANGE_INVALIDATING = 0, // issuing MakeInvalid; write_release=0   [Phase 2]
  CCI_RANGE_TRACKING     = 1, // write_release=1; done_mask fills        [Phase 3]
  CCI_RANGE_DONE         = 2  // (line_mask & ~done_mask)==0; reusable
};

// 4KB page = 64 cache lines of 64B.
static const int CCI_LINE_BYTES        = 64;
static const int CCI_LINES_PER_PAGE    = 64;
static const int CCI_PAGE_OFFSET_BITS  = 12; // addr[63:12] = page
static const int CCI_LINE_OFFSET_BITS  = 6;  // addr[11:6]  = line within page

// Mirror of RTL cci_range_entry_t: 1+2+52+64+64+4 = 187 bits.
struct CciRangeEntry {
  bool          valid;          // 1  : active entry
  CciRangeState state;          // 2  : FSM sub-state (valid=1 only)
  uint64_t      base_page_addr; // 52 : addr >> 12
  uint64_t      line_mask;      // 64 : target lines within the page
  uint64_t      done_mask;      // 64 : lines whose write (B) completed  [Phase 3+]
  int           source_id;      // 4  : requesting master (port)

  void reset() {
    valid = false; state = CCI_RANGE_INVALIDATING;
    base_page_addr = 0; line_mask = 0; done_mask = 0; source_id = 0;
  }
};

static inline uint64_t cci_page_of(int64_t addr) {
  return (uint64_t)addr >> CCI_PAGE_OFFSET_BITS;
}
static inline int cci_line_of(int64_t addr) {
  return (int)(((uint64_t)addr >> CCI_LINE_OFFSET_BITS) & (CCI_LINES_PER_PAGE - 1));
}
static inline uint64_t cci_line_bit(int idx) {
  return (uint64_t)1 << idx;
}
static inline int cci_popcount64(uint64_t m) {
  return __builtin_popcountll(m);
}
// Mask of `n` consecutive lines starting at `start` (assumes it stays within the
// page; guaranteed here because the grouping n divides 64 and the copy region is
// page-aligned, so one AW never crosses a 4KB boundary).
static inline uint64_t cci_lines_mask(int start, int n) {
  if (n >= CCI_LINES_PER_PAGE) return ~(uint64_t)0;
  uint64_t m = ((uint64_t)1 << n) - 1;
  return m << start;
}
// Fix-3: full target mask of a page in a contiguous copy region
// [dstBasePage*4KB, +totalLines lines). Returns the final per-page target up
// front so DONE is declared only at true completion (not when the currently
// observed AW subset happens to complete). Returns 0 when the region is unknown
// (totalLines==0) or the page lies outside the region -> caller falls back to
// the incremental (AW-accumulated) mask.
// dstBaseLine = the region's first line offset within its base page (0..63).
// Handles a non-page-aligned destination base: the first/last page target masks
// and per-page line ranges are computed from absolute line indices, so the mask
// is correct even when the copy does not start at line 0 of the base page.
static inline uint64_t cci_page_full_mask(uint64_t page, uint64_t dstBasePage,
                                          int dstBaseLine, uint64_t totalLines) {
  if (totalLines == 0 || page < dstBasePage) return 0;
  uint64_t pageLo = (page - dstBasePage) * (uint64_t)CCI_LINES_PER_PAGE; // page first line (abs)
  uint64_t pageHi = pageLo + (uint64_t)CCI_LINES_PER_PAGE;               // exclusive
  uint64_t regLo  = (uint64_t)dstBaseLine;                               // region first line (abs)
  uint64_t regHi  = regLo + totalLines;                                  // exclusive
  uint64_t lo = (pageLo > regLo) ? pageLo : regLo;
  uint64_t hi = (pageHi < regHi) ? pageHi : regHi;
  if (lo >= hi) return 0;
  return cci_lines_mask((int)(lo - pageLo), (int)(hi - lo));
}

// Phase 4: per-page recorded timeline used to evaluate hazard/progressive-release
// against a modeled probe stream (other-master accesses). Persisted for the whole
// run (not erased at DONE, unlike the live occupancy entry).
struct CciRangeTimeline {
  int64_t  start_cycle;                     // page copy begins (first AW observed)
  int64_t  write_release;                   // invalidation complete = start + snoop_latency
  uint64_t line_mask;                       // target lines of the page
  int64_t  aw_cycle[CCI_LINES_PER_PAGE];    // per-line write-ISSUE (AW) cycle (-1 = not yet)
  int64_t  done_cycle[CCI_LINES_PER_PAGE];  // per-line write-completion cycle (-1 = pending)
  int64_t  page_done_cycle;                 // last target line completed (page DONE)

  void init(int64_t start, int64_t release) {
    start_cycle = start; write_release = release; line_mask = 0;
    page_done_cycle = -1;
    for (int i = 0; i < CCI_LINES_PER_PAGE; i++) { aw_cycle[i] = -1; done_cycle[i] = -1; }
  }
};

// Policy-independent measurement: the other master issues reads UNGATED (so the
// issue schedule is identical regardless of release policy and real contention
// is captured). Each read is logged with its real issue cycle; the per-read wait
// under proposed (until the line completes) and coarse (until the page completes)
// is computed at end-of-run from the recorded completion timeline. Because
// done_cycle[line] <= page_done_cycle always, proposed wait <= coarse wait for
// every read -> a clean, monotonic comparison from a single run.
struct OtherReadRec {
  int64_t  issue; // cycle the read was admitted at the bus
  uint64_t page;  // destination page it targets
  int      line;  // line within the page
};

#endif // CCI_RANGE_H
