//------------------------------------------------------------
// Filename  : CBUS.h
// Version  : 0.78
// Date    : 20 Aug 2018
// Contact  : JaeYoung.Hur@gmail.com
// Description  : Bus header
//------------------------------------------------------------
#ifndef CBUS_H
#define CBUS_H

#include <math.h>
#include <string>
#include <unordered_map>
#include <vector>

#include "CArb.h"
#include "CFIFO.h"
#include "CTRx.h"
#include "Top.h"
#include "cci_range.h"

using namespace std;

typedef class CBUS *CPBUS;
class CBUS {

public:
  // 1. Contructor. Destructor
  CBUS(string cName, int NUM_PORT);
  ~CBUS();

  // 2. Control
  // Handler
  EResultType Do_AR_fwd(int64_t nCycle);
  EResultType Do_AR_bwd(int64_t nCycle);
  EResultType Do_AW_fwd(int64_t nCycle);
  EResultType Do_AW_bwd(int64_t nCycle);
#ifdef CCI_ON
  EResultType Do_AC_fwd(int64_t nCycle);
  EResultType Do_AC_bwd(int64_t nCycle);
  EResultType Do_CR_fwd(int64_t nCycle);
  EResultType Do_CR_bwd(int64_t nCycle);
  EResultType Do_W_snoop_fwd(int64_t nCycle);
  EResultType Do_CD_fwd(int64_t nCycle);
  EResultType Do_CD_bwd(int64_t nCycle);
#endif
  EResultType Do_R_fwd(int64_t nCycle);
  EResultType Do_R_bwd(int64_t nCycle);
  EResultType Do_W_fwd(int64_t nCycle);
  EResultType Do_W_bwd(int64_t nCycle);
  EResultType Do_B_fwd(int64_t nCycle);
  EResultType Do_B_bwd(int64_t nCycle);

  // Set value
  EResultType Increase_MO_AR();
  EResultType Decrease_MO_AR();
  EResultType Increase_MO_AW();
  EResultType Decrease_MO_AW();

  EResultType Set_nR_GEN_NUM(int nPort, int nNum);
  EResultType Set_nB_GEN_NUM(int nPort, int nNum);

#ifdef CCI_PROPOSED
  // Proposed range-based coherence tracking.
  //   Phase 0-1: observation (range entry + line_mask accounting).
  //   Phase 2   : early-invalidation FSM (INVALIDATING->TRACKING), write_release
  //               modeling, and invariant I1 verification at write completion.
  //               Observation only: no timing change (gating deferred to Phase 4).
  void Range_SetParams(int nMemcpyPort, int nCachelinePerAW);
  void Range_SetRegion(int64_t dstBaseAddr, uint64_t totalLines); // Fix-3
  int64_t Range_RangeEntryPeak() const;                           // Fix-1
  void Range_SetOtherMaster(int otherPort, int enable);
  void Range_ObserveOtherRead(int nPort, int64_t nAddr, int64_t nCycle); // ungated log
  void Range_ObserveAW(int nPort, int64_t nAddr, int64_t nCycle);
  void Range_ObserveWriteB(int64_t nAddr, int64_t nCycle);
  void Range_FinalizeEntry();
  void Range_Finalize();
  // Phase 4: RTL hazard formula evaluated on the recorded timeline at cycle T.
  bool Range_ProbeHazard(uint64_t page, int line, int probe_source, int64_t T) const;
  void Range_EvaluateProbes();
  // Phase 5: peak concurrent in-flight target lines a line-granular tracker would
  // hold (vs the range-entry peak) and the paper metrics block.
  int64_t Range_LineTrackerPeak() const;
  void Range_PrintVerify();
#endif

  // Get value
  int GetMO_AR();
  int GetMO_AW();

  int GetPortNum(int nID);

  int Get_nRTrans(int nPort);
  int Get_nBTrans(int nPort);
  int Get_nR_GEN_NUM(int nPort);
  int Get_nB_GEN_NUM(int nPort);

  uint32_t GetSnoopIssued();
  uint32_t GetSnoopResp();

  // Control
  EResultType UpdateState(int64_t nCycle);
  EResultType Reset();
  EResultType PrintStat(int64_t nCycle, FILE *fp);

  // Debug
  EResultType CheckLink();

  // Port slave interface
  CPTRx *cpRx_AR; // [NUM_PORT]
  CPTRx *cpTx_R;
  CPTRx *cpRx_AW;
  CPTRx *cpRx_W;
  CPTRx *cpTx_B;

  // Port master interface
  CPTRx cpTx_AR;
  CPTRx cpRx_R;
  CPTRx cpTx_AW;
  CPTRx cpTx_W;
  CPTRx cpRx_B;

#ifdef CCI_ON
  // CCI specific interface
  CPTRx *cpTx_AC; // [NUM_PORT]

  CPTRx *cpRx_CD; // [NUM_PORT]
  CPTRx *cpRx_CR; // [NUM_PORT]
#endif

private:
  // Original
  string cName;

  // Control
  int NUM_PORT; // Num port
  int BIT_PORT; // Bits port

  int nMO_AR; // MO count AR
  int nMO_AW;

  // Stat
  int *nAR_SI; // [NUM_PORT]
  int *nAW_SI;
  int *nR_SI;
  int *nB_SI;

  uint32_t *nRTrans;
  uint32_t *nBTrans;
  uint32_t *nR_GEN_NUM;
  uint32_t *nB_GEN_NUM;

  uint32_t nCentralStall;
  uint32_t nACStall;
  uint32_t nStall;
  uint32_t nWaitResp;
  uint32_t nSnoopIssued;
  uint32_t nSnoopResp;

  int nSnoopCnt;

  // Arbiter
  CPArb cpArb_AR;
  CPArb cpArb_AW;

  // FIFO
  // CPFIFO  cpFIFO_AR;
  // CPFIFO  cpFIFO_R;
  CPFIFO cpFIFO_AW;
  // CPFIFO  cpFIFO_W;
  // CPFIFO  cpFIFO_B;

#ifdef CCI_ON
  CPFIFO *cpFIFO_MstAW; // [NUM_PORT]
  CPFIFO *cpFIFO_MstAR; // [NUM_PORT]

  //=======================================================
  // Purpose:
  //    cpFIFO_SnoopReq: Storing the snooping request to the snooped master.
  //    cpFIFO_SnoopData: Storing the returned data from snooped master.
  //    cpFIFO_SnoopResp: Storing the returned response from snooped master.
  //    cpFIFO_Central: Unified FIFO for tracking active snoop transactions (Ax
  // and AC).
  //=======================================================
  CPFIFO *cpFIFO_SnoopReq;
  CPFIFO cpFIFO_SnoopData;
  CPFIFO *cpFIFO_SnoopResp;
  CPFIFO *cpFIFO_SnoopReqMst;
  CPFIFO cpFIFO_Central;
  int *nSnoopedMaster;
  bool *bArb; // Round-robin for CCI snoop
  std::vector<int> m_outstandingMemARID;
  std::vector<int> m_outstandingMemAWID;
  std::vector<int64_t> m_outstandingMemARAddr;
  std::vector<int64_t> m_outstandingMemAWAddr;
  std::vector<bool> m_outstandingMemAWIsRead;

  bool HasIDConflictInCentralFIFO(UPUD upCentral);
  int GetSnoopResponseCount(UPUD upCentral, int for_snoopMaster);
  void PopSnoopResponses(int initMaster, const std::vector<UPUD> &readySnoopResps);
  bool CheckSnoopResponses(UPUD upCentral, std::vector<UPUD> &readySnoopResps);
  bool TryWriteToMemory(UPUD upCentral, bool isClean, bool isWriteLineUnique, const std::vector<UPUD> &readySnoopResps,
                        int64_t nCycle);
  bool TryReadFromMemory(UPUD upCentral, const std::vector<UPUD> &readySnoopResps, int64_t nCycle);
  bool TryReturnResponseToMaster(UPUD upCentral, int initMaster, bool bIsShared, bool bPassDirty,
                                 const std::vector<UPUD> &readySnoopResps, int64_t nCycle);
  bool ProcessCentralTransactions(int64_t nCycle);
#endif

#ifdef CCI_PROPOSED
  // Single active range entry (mirrors RTL cci_range_rim_tracker, req_ready=~valid).
  CciRangeEntry m_range;
  int      m_rangeMemcpyPort;      // master port carrying memcpy destination writes (-1=off)
  int      m_rangeLinesPerAW;      // nCACHELINE (lines covered by one AW)
  uint64_t m_rangeAllocCount;      // entries allocated incl. reuse (== distinct pages)
  uint64_t m_rangeTargetLineTotal; // sum popcount(line_mask) finalized (== total target lines)
  uint64_t m_rangePageRevisit;     // anomaly: AW to a page < current (non-monotonic)
  uint64_t m_rangeDoubleTarget;    // anomaly: a line targeted twice within one entry
  int      m_rangePeakOccupancy;   // max concurrent valid entries (==1 by construction)

  // Phase 2: early invalidation + pre-invalidate/post-write ordering.
  int      m_rangeSnoopLatency;    // CCI_SNOOP_LATENCY: INVALIDATING -> write_release
  uint64_t m_rangeMakeInvalidIssued; // MakeInvalid modeled per target line (== target lines)
  uint64_t m_rangeInvalidatingCount; // entries entering INVALIDATING (== allocations)
  uint64_t m_rangeTrackingCount;     // entries transitioning INVALIDATING -> TRACKING
  uint64_t m_rangeWriteBObserved;    // target-line write completions observed (memory B)
  uint64_t m_rangeI1Violations;      // I1: target-line write completed before write_release
  // page -> recorded timeline (write_release, per-line done cycles, page DONE cycle).
  // Persisted for the whole run; used for I1 and Phase 4 probe evaluation.
  std::unordered_map<uint64_t, CciRangeTimeline> m_rangeTimeline;

  // Phase 3: done_mask update on write completion + DONE transition.
  // Live per-page entries (line_mask target + done_mask completed). Unlike the
  // single-entry Phase 1-2 accounting, writes complete after the observing entry
  // has moved on, so DONE tracking needs a per-page table. Each entry is erased
  // when it reaches DONE ((line_mask & ~done_mask)==0). The peak size is the
  // range-entry occupancy (vs the line-granular tracker) measured in Phase 5.
  std::unordered_map<uint64_t, CciRangeEntry> m_rangeLive;
  uint64_t m_rangeDoneBitsSet;   // total done bits set (== total target lines)
  uint64_t m_rangeDoneEntries;   // pages reaching DONE (== distinct pages)
  uint64_t m_rangeI2Violations;  // I2: done bit set for a line not in line_mask
  uint64_t m_rangeDonePremature; // I4: DONE declared while (line_mask&~done_mask)!=0
  size_t   m_rangeLivePeak;      // peak concurrent live (TRACKING) range entries

  // Fix-3/4: region-derived full-page target + expected-page accounting.
  uint64_t m_rangeDstBasePage;   // page of destination base (region start)
  int      m_rangeDstBaseLine;   // line offset of the base within its page (0..63)
  uint64_t m_rangeTotalLines;    // total target lines (== GEN); 0 = region unknown
  uint64_t m_rangeExpectedPages; // ceil(totalLines / 64)
  uint64_t m_rangeVerifyFail;    // Fix-4: number of failed verify equalities

  // Real-time other-master read gate + measured stall (replaces synthetic probe).
  int      m_rangeOtherPort;     // port of the modeled other master (-1 = off)
  int      m_rangeGateEnable;    // OTHER_MASTER_ENABLE
  int64_t  m_otherWaitAccum;     // hazard-stall cycles accrued by the head blocked read
  uint64_t m_otherReadsAdmitted; // other-master reads that passed the gate
  uint64_t m_otherReadsHazard;   // reads that experienced >=1 hazard-stall cycle
  uint64_t m_otherWaitTotal;     // total measured hazard-stall cycles
  int64_t  m_otherWaitMax;       // max per-read hazard-stall
  std::vector<int64_t> m_otherWaitSamples; // per-read stall (percentiles)
  std::vector<OtherReadRec> m_otherReadLog; // policy-independent per-read log

  // Phase 4: hazard + progressive release, evaluated against a modeled probe
  // stream (other-master accesses to target pages during the copy).
  uint64_t m_probeTotal;         // probes evaluated
  uint64_t m_probeConflict;      // probes hitting a not-yet-done target line (hazard=1)
  uint64_t m_probePassThrough;   // probes to an already-done line (proposed passes, baseline blocks)
  uint64_t m_probeBaseStallSum;  // sum of baseline (page-coarse) stall cycles
  uint64_t m_probePropStallSum;  // sum of proposed (line-progressive) stall cycles
  int64_t  m_probeBaseStallMax;  // max baseline stall
  int64_t  m_probePropStallMax;  // max proposed stall
  uint64_t m_probeI3Violations;  // I3: hazard!=(pending target line, different source)

  // Phase 5: per-probe stall samples for latency-tail metrics (p50/p95/p99).
  std::vector<int64_t> m_probeBaseStalls;   // baseline (page-coarse) per probe
  std::vector<int64_t> m_probePropStalls;   // proposed (line-progressive) per probe
  std::vector<uint8_t> m_probeHazardFlag;   // 1 = conflict (hazard) probe, 0 = non-conflict
#endif
};

#endif
