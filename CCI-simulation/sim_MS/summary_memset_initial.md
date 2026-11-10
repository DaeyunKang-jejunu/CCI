# Memset scenario — initial simulation (r=16, s=10)

Mode: CCI_MEMSET (write-only, no source read, no read->write dependency).
SEED=493, 32,768 lines (2MB). Floor = 32,768 column commands x tCCD 4 = 131,072.
Integrity: R responses=0, B responses=32,768, Write transactions=32,768/n (all verified).

| n | 1 | 2 | 4 | 8 | 16 | 64 |
|---|---|---|---|---|---|---|
| total cycles | 524,304 | 262,161 | 131,106 | 131,101 | 131,101 | 131,101 |

Notes:
- n=1 is issue-bound: 32,768 x r(16) = 524,288 ~= 524,304.
- n>=4 reaches the memory floor (131,101 ~= 131,072). Crossover n* = r / per-line floor = 16/4 = 4.
- Same floor as burst write-only (memset == write-only traffic in this timing model);
  distinct from memcpy (R+W -> 262,144 floor). n=64 stays at floor (no AC-FIFO penalty).
