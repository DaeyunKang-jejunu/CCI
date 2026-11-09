//-----------------------------------------------------------
// Filename     : CBUS.cpp
// Version  : 0.79
// Date         : 18 Nov 2019
// Contact  : JaeYoung.Hur@gmail.com
// Description  : Nx1 Bus definition
//-----------------------------------------------------------
// (1) Buffer-less bus
//-----------------------------------------------------------
#include <algorithm>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <utility>
#include <vector>

#include "CBUS.h"

// Constructor
CBUS::CBUS(string cName, int NUM_PORT) {

  // Master interface
  this->cpTx_AR = new CTRx("BUS_Tx_AR", ETRX_TYPE_TX, EPKT_TYPE_AR);
  this->cpTx_AW = new CTRx("BUS_Tx_AW", ETRX_TYPE_TX, EPKT_TYPE_AW);
  this->cpRx_R = new CTRx("BUS_Rx_R", ETRX_TYPE_RX, EPKT_TYPE_R);
  this->cpTx_W = new CTRx("BUS_Tx_W", ETRX_TYPE_TX, EPKT_TYPE_W);
  this->cpRx_B = new CTRx("BUS_Rx_B", ETRX_TYPE_RX, EPKT_TYPE_B);

  // Slave interface
  this->cpRx_AR = new CTRx *[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Rx%d_AR", i);
    this->cpRx_AR[i] = new CTRx(cName, ETRX_TYPE_RX, EPKT_TYPE_AR);
  };

  this->cpRx_AW = new CTRx *[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Rx%d_AW", i);
    this->cpRx_AW[i] = new CTRx(cName, ETRX_TYPE_RX, EPKT_TYPE_AW);
  };

  this->cpTx_R = new CTRx *[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Tx%d_R", i);
    this->cpTx_R[i] = new CTRx(cName, ETRX_TYPE_TX, EPKT_TYPE_R);
  };

  this->cpRx_W = new CTRx *[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Rx%d_W", i);
    this->cpRx_W[i] = new CTRx(cName, ETRX_TYPE_RX, EPKT_TYPE_W);
  };

  this->cpTx_B = new CTRx *[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Tx%d_B", i);
    this->cpTx_B[i] = new CTRx(cName, ETRX_TYPE_TX, EPKT_TYPE_B);
  };

  // Stat
  this->nAR_SI = new int[NUM_PORT];
  this->nAW_SI = new int[NUM_PORT];
  this->nR_SI = new int[NUM_PORT];
  this->nB_SI = new int[NUM_PORT];

  for (int i = 0; i < NUM_PORT; i++) {
    this->nAR_SI[i] = -1;
  };
  for (int i = 0; i < NUM_PORT; i++) {
    this->nAW_SI[i] = -1;
  };
  for (int i = 0; i < NUM_PORT; i++) {
    this->nR_SI[i] = -1;
  };
  for (int i = 0; i < NUM_PORT; i++) {
    this->nB_SI[i] = -1;
  };

  // Num bits port (ID encode)
  this->NUM_PORT = NUM_PORT;
  this->BIT_PORT = (int)(ceilf(log2f(NUM_PORT)));
  if (this->BIT_PORT == 0) {
    this->BIT_PORT = 1;
  }

  // FIFO
  // this->cpFIFO_AR = new CFIFO("BUS_FIFO_AR", EUD_TYPE_AR, 50);
  this->cpFIFO_AW = new CFIFO("BUS_FIFO_AW", EUD_TYPE_AW, 50);
  // this->cpFIFO_W  = new CFIFO("BUS_FIFO_W",  EUD_TYPE_W,  50);

#ifdef CCI_ON
  this->cpTx_AC = new CTRx *[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Tx%d_AC", i);
    this->cpTx_AC[i] = new CTRx(cName, ETRX_TYPE_TX, EPKT_TYPE_AC);
  };

  this->cpRx_CD = new CTRx *[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Rx%d_CD", i);
    this->cpRx_CD[i] = new CTRx(cName, ETRX_TYPE_RX, EPKT_TYPE_CD);
  };

  this->cpRx_CR = new CTRx *[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Rx%d_CR", i);
    this->cpRx_CR[i] = new CTRx(cName, ETRX_TYPE_RX, EPKT_TYPE_CR);
  };

  this->cpFIFO_MstAW = new CPFIFO[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Rx%d_MstAW", i);
    this->cpFIFO_MstAW[i] = new CFIFO(cName, EUD_TYPE_AW, MAX_MO_COUNT / 2);
  };

  this->cpFIFO_MstAR = new CPFIFO[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Rx%d_MstAR", i);
    this->cpFIFO_MstAR[i] = new CFIFO(cName, EUD_TYPE_AR, MAX_MO_COUNT / 2);
  };

  this->cpFIFO_SnoopResp = new CPFIFO[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Rx%d_SnoopResp", i);
    this->cpFIFO_SnoopResp[i] = new CFIFO(cName, EUD_TYPE_CR, MAX_MO_COUNT / 2);
  };

  this->cpFIFO_SnoopReqMst = new CPFIFO[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Rx%d_SnoopReqMst", i);
    this->cpFIFO_SnoopReqMst[i] = new CFIFO(cName, EUD_TYPE_CENTRAL, MAX_MO_COUNT / 2);
  };

  this->cpFIFO_SnoopReq = new CPFIFO[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    char cName[50];
    sprintf(cName, "BUS_Rx%d_SnoopReq", i);
    this->cpFIFO_SnoopReq[i] = new CFIFO(cName, EUD_TYPE_AC, MAX_MO_COUNT / 2);
  }
  this->cpFIFO_SnoopData = new CFIFO("BUS_SnoopData", EUD_TYPE_W, MAX_MO_COUNT / 2);
  this->cpFIFO_Central = new CFIFO("BUS_CentralFIFO", EUD_TYPE_CENTRAL, MAX_MO_COUNT / 2);

  this->nSnoopedMaster = new int[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    this->nSnoopedMaster[i] = 0;
  }

  this->bArb = new bool[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    this->bArb[i] = false;
  }
#endif

  // Arbiter
  this->cpArb_AR = new CArb("BUS_ARBITER_AR", NUM_PORT);
  this->cpArb_AW = new CArb("BUS_ARBITER_AW", NUM_PORT);

  // Initialize
  this->cName = cName;
  this->nMO_AR = -1;
  this->nMO_AW = -1;
  this->nRTrans = new uint32_t[NUM_PORT];
  this->nBTrans = new uint32_t[NUM_PORT];
  this->nR_GEN_NUM = new uint32_t[NUM_PORT];
  this->nB_GEN_NUM = new uint32_t[NUM_PORT];
  for (int i = 0; i < NUM_PORT; i++) {
    this->nRTrans[i] = 0;
    this->nBTrans[i] = 0;
    this->nR_GEN_NUM[i] = 0;
    this->nB_GEN_NUM[i] = 0;
  }
  this->nCentralStall = 0;
  this->nACStall = 0;
  this->nStall = 0;
  this->nWaitResp = 0;
  this->nSnoopIssued = 0;
  this->nSnoopResp = 0;
  this->nSnoopCnt = 0;

#ifdef CCI_PROPOSED
  this->m_range.reset();
  this->m_rangeMemcpyPort = -1;
  this->m_rangeLinesPerAW = 1;
  this->m_rangeAllocCount = 0;
  this->m_rangeTargetLineTotal = 0;
  this->m_rangePageRevisit = 0;
  this->m_rangeDoubleTarget = 0;
  this->m_rangePeakOccupancy = 0;
  this->m_rangeSnoopLatency = CCI_SNOOP_LATENCY;
  this->m_rangeMakeInvalidIssued = 0;
  this->m_rangeInvalidatingCount = 0;
  this->m_rangeTrackingCount = 0;
  this->m_rangeWriteBObserved = 0;
  this->m_rangeI1Violations = 0;
  this->m_rangeTimeline.clear();
  this->m_rangeLive.clear();
  this->m_rangeDoneBitsSet = 0;
  this->m_rangeDoneEntries = 0;
  this->m_rangeI2Violations = 0;
  this->m_rangeDonePremature = 0;
  this->m_rangeLivePeak = 0;
  this->m_probeTotal = 0;
  this->m_probeConflict = 0;
  this->m_probePassThrough = 0;
  this->m_probeBaseStallSum = 0;
  this->m_probePropStallSum = 0;
  this->m_probeBaseStallMax = 0;
  this->m_probePropStallMax = 0;
  this->m_probeI3Violations = 0;
  this->m_probeBaseStalls.clear();
  this->m_probePropStalls.clear();
  this->m_probeHazardFlag.clear();
  this->m_rangeDstBasePage = 0;
  this->m_rangeTotalLines = 0;
  this->m_rangeExpectedPages = 0;
  this->m_rangeVerifyFail = 0;
  this->m_rangeDstBaseLine = 0;
  this->m_rangeOtherPort = -1;
  this->m_rangeGateEnable = 0;
  this->m_otherWaitAccum = 0;
  this->m_otherReadsAdmitted = 0;
  this->m_otherReadsHazard = 0;
  this->m_otherWaitTotal = 0;
  this->m_otherWaitMax = 0;
  this->m_otherWaitSamples.clear();
  this->m_otherReadLog.clear();
#endif
};

// Destructor
CBUS::~CBUS() {

  // Debug
  assert(this->cpTx_AR != NULL);
  assert(this->cpTx_AW != NULL);
  assert(this->cpTx_W != NULL);
  assert(this->cpRx_R != NULL);
  assert(this->cpRx_B != NULL);

  // MI
  delete (this->cpTx_AR);
  delete (this->cpRx_R);
  delete (this->cpTx_AW);
  delete (this->cpTx_W);
  delete (this->cpRx_B);

  // SI
  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpRx_AR[i]);
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpRx_AW[i]);
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpRx_W[i]);
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpTx_R[i]);
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpTx_B[i]);
  };

  delete[] this->cpRx_AR;
  delete[] this->cpRx_AW;
  delete[] this->cpRx_W;
  delete[] this->cpTx_R;
  delete[] this->cpTx_B;

  // FIFO
  delete (this->cpFIFO_AW);

#ifdef CCI_ON
  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpTx_AC[i]);
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpRx_CD[i]);
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpRx_CR[i]);
  };

  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpFIFO_MstAW[i]);
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpFIFO_MstAR[i]);
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpFIFO_SnoopResp[i]);
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpFIFO_SnoopReqMst[i]);
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    delete (this->cpFIFO_SnoopReq[i]);
  };

  delete[] this->cpTx_AC;
  delete[] this->cpRx_CD;
  delete[] this->cpRx_CR;

  delete[] this->cpFIFO_MstAW;
  delete[] this->cpFIFO_MstAR;
  delete[] this->cpFIFO_SnoopReq;
  delete[] this->cpFIFO_SnoopResp;
  delete[] this->cpFIFO_SnoopReqMst;

  delete (this->cpFIFO_SnoopData);
  delete (this->cpFIFO_Central);
#endif
  // delete (this->cpFIFO_AR);
  // delete (this->cpFIFO_W);

  // Arb
  delete (this->cpArb_AR);
  delete (this->cpArb_AW);

  // Stat
  delete[] this->nAR_SI;
  delete[] this->nAW_SI;
  delete[] this->nR_SI;
  delete[] this->nB_SI;
  delete[] this->nRTrans;
  delete[] this->nBTrans;
  delete[] this->nR_GEN_NUM;
  delete[] this->nB_GEN_NUM;

  this->cpTx_AR = NULL;
  this->cpTx_AW = NULL;
  this->cpTx_W = NULL;
  this->cpRx_R = NULL;
  this->cpRx_B = NULL;

  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_AR[i] = NULL;
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_AW[i] = NULL;
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_W[i] = NULL;
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpTx_R[i] = NULL;
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpTx_B[i] = NULL;
  };

  this->cpFIFO_AW = NULL;
  // this->cpFIFO_AR = NULL;
  // this->cpFIFO_W  = NULL;

#ifdef CCI_ON
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpTx_AC[i] = NULL;
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_CD[i] = NULL;
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_CR[i] = NULL;
  };

  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpFIFO_MstAW[i] = NULL;
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpFIFO_MstAR[i] = NULL;
  };
  this->cpFIFO_SnoopReq = NULL;
  this->cpFIFO_SnoopData = NULL;
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpFIFO_SnoopResp[i] = NULL;
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpFIFO_SnoopReqMst[i] = NULL;
  };
  this->cpFIFO_SnoopData = NULL;
  this->cpFIFO_Central = NULL;

  delete[] this->nSnoopedMaster;
  delete[] this->bArb;
#endif

  this->cpArb_AR = NULL;
  this->cpArb_AW = NULL;
};

// Initialize
EResultType CBUS::Reset() {

  // MI
  this->cpTx_AR->Reset();
  this->cpTx_AW->Reset();
  this->cpTx_W->Reset();
  this->cpRx_R->Reset();
  this->cpRx_B->Reset();

  // SI
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_AR[i]->Reset();
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_AW[i]->Reset();
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_W[i]->Reset();
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpTx_R[i]->Reset();
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpTx_B[i]->Reset();
  };

  for (int i = 0; i < this->NUM_PORT; i++) {
    this->nAR_SI[i] = 0;
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->nAW_SI[i] = 0;
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->nR_SI[i] = 0;
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->nB_SI[i] = 0;
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->nRTrans[i] = 0;
    this->nBTrans[i] = 0;
  }

  // FIFO
  this->cpFIFO_AW->Reset();
  // this->cpFIFO_AR->Reset();
  // this->cpFIFO_W->Reset();

#ifdef CCI_ON
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpTx_AC[i]->Reset();
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_CD[i]->Reset();
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_CR[i]->Reset();
  };

  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpFIFO_MstAW[i]->Reset();
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpFIFO_MstAR[i]->Reset();
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpFIFO_SnoopReq[i]->Reset();
  }
  this->cpFIFO_SnoopData->Reset();
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpFIFO_SnoopResp[i]->Reset();
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpFIFO_SnoopReqMst[i]->Reset();
  };
  this->cpFIFO_Central->Reset();

  for (int i = 0; i < this->NUM_PORT; i++) {
    this->nSnoopedMaster[i] = 0;
    this->bArb[i] = false;
  }
  this->m_outstandingMemARID.clear();
  this->m_outstandingMemAWID.clear();
  this->m_outstandingMemARAddr.clear();
  this->m_outstandingMemAWAddr.clear();
  this->m_outstandingMemAWIsRead.clear();
#endif

  // Arb
  this->cpArb_AR->Reset();
  this->cpArb_AW->Reset();

  this->nMO_AR = 0;
  this->nMO_AW = 0;

  this->nCentralStall = 0;
  this->nACStall = 0;
  this->nStall = 0;
  this->nWaitResp = 0;
  this->nSnoopIssued = 0;
  this->nSnoopResp = 0;
  this->nSnoopCnt = 0;

#ifdef CCI_PROPOSED
  this->m_range.reset();
  // m_rangeMemcpyPort / m_rangeLinesPerAW are configured via Range_SetParams and
  // are preserved across Reset(); only per-run accounting is cleared here.
  this->m_rangeAllocCount = 0;
  this->m_rangeTargetLineTotal = 0;
  this->m_rangePageRevisit = 0;
  this->m_rangeDoubleTarget = 0;
  this->m_rangePeakOccupancy = 0;
  this->m_rangeMakeInvalidIssued = 0;
  this->m_rangeInvalidatingCount = 0;
  this->m_rangeTrackingCount = 0;
  this->m_rangeWriteBObserved = 0;
  this->m_rangeI1Violations = 0;
  this->m_rangeTimeline.clear();
  this->m_rangeLive.clear();
  this->m_rangeDoneBitsSet = 0;
  this->m_rangeDoneEntries = 0;
  this->m_rangeI2Violations = 0;
  this->m_rangeDonePremature = 0;
  this->m_rangeLivePeak = 0;
  this->m_probeTotal = 0;
  this->m_probeConflict = 0;
  this->m_probePassThrough = 0;
  this->m_probeBaseStallSum = 0;
  this->m_probePropStallSum = 0;
  this->m_probeBaseStallMax = 0;
  this->m_probePropStallMax = 0;
  this->m_probeI3Violations = 0;
  this->m_probeBaseStalls.clear();
  this->m_probePropStalls.clear();
  this->m_probeHazardFlag.clear();
  // Region (m_rangeDstBasePage/TotalLines/ExpectedPages) and other-master config
  // (m_rangeOtherPort/GateEnable/GateCoarse) are set before the run and preserved
  // across Reset(); only per-run state is cleared.
  this->m_rangeVerifyFail = 0;
  this->m_otherWaitAccum = 0;
  this->m_otherReadsAdmitted = 0;
  this->m_otherReadsHazard = 0;
  this->m_otherWaitTotal = 0;
  this->m_otherWaitMax = 0;
  this->m_otherWaitSamples.clear();
  this->m_otherReadLog.clear();
#endif

  return (ERESULT_TYPE_SUCCESS);
};

#ifndef CCI_ON
//------------------------------------------------------
// AR valid
//------------------------------------------------------
EResultType CBUS::Do_AR_fwd(int64_t nCycle) {

  // Check Tx valid
  if (this->cpTx_AR->IsBusy() == ERESULT_TYPE_YES) {
    return (ERESULT_TYPE_FAIL);
  };

  // Check MO
  if (this->GetMO_AR() >= MAX_MO_COUNT) {
    return (ERESULT_TYPE_FAIL);
  };

  // Arbiter
  int nCandidateList[this->NUM_PORT];
  for (int nPort = 0; nPort < this->NUM_PORT; nPort++) {

    // Check remote-Tx valid
    if (this->cpRx_AR[nPort]->GetPair()->IsBusy() == ERESULT_TYPE_YES) {
      nCandidateList[nPort] = 1;
    } else {
      nCandidateList[nPort] = 0;
    };
  };

  int nArbResult = this->cpArb_AR->Arbitration(nCandidateList);

  // Check
  if (nArbResult == -1) { // Nothing arbitrated
    return (ERESULT_TYPE_SUCCESS);
  };

#ifdef DEBUG
  assert(nArbResult < this->NUM_PORT);
  assert(nArbResult > -1);
#endif

  // Get Ax
  CPAxPkt cpAR = this->cpRx_AR[nArbResult]->GetPair()->GetAx();

#ifdef DEBUG
  assert(cpAR != NULL);
// cpAR->CheckPkt();
#endif

  // Put Rx
  this->cpRx_AR[nArbResult]->PutAx(cpAR);
#ifdef DEBUG_BUS
  printf("[Cycle %3ld: %s.Do_AR_fwd] (%s) put Rx_AR[%d].\n", nCycle, this->cName.c_str(), cpAR->GetName().c_str(),
         nArbResult);
// cpAR->Display();
#endif

  // Stat
  this->nAR_SI[nArbResult]++;

  // Encode ID
  int nID = cpAR->GetID();
  int64_t nAddr = cpAR->GetAddr();
  int nLen = cpAR->GetLen();
  nID = (nID << this->BIT_PORT) + nArbResult;

  // Set pkt
  cpAR->SetPkt(nID, nAddr, nLen);

  // Put Tx
  this->cpTx_AR->PutAx(cpAR);
#ifdef DEBUG_BUS
  printf("[Cycle %3ld: %s.Do_AR_fwd] (%s) put Tx_AR.\n", nCycle, this->cName.c_str(), cpAR->GetName().c_str());
// cpAR->Display();
#endif

  return (ERESULT_TYPE_SUCCESS);
};
#else
//---------------------------------------------------------------------------------------------------
//   1. FIXME: Getting transactions from Masters (put into local Rx_AR ports)
// = assert READY.
//    1.1. If the BUS's Rx_AR is gotten, MASTERs will keep the current
// transactions at its ports.
//  2. Encode the AR transactions and push it into cpFIFO_MstAR.
//  3. The copying only happens if:
//    2.1. cpFIFO_MstAR is not full.
//    2.2. The transaction is valid at the Master's ports.
//---------------------------------------------------------------------------------------------------
EResultType CBUS::Do_AR_fwd(int64_t nCycle) {

  // ---- Check MO ---
  if (this->GetMO_AR() >= MAX_MO_COUNT) {
    return (ERESULT_TYPE_FAIL);
  };

  // ---- Receives Transactions ---
  // Checking every MASTERs' ports.
  for (int nPort = 0; nPort < this->NUM_PORT; nPort++) {

    // ---- 1. Checking receiving conditions ---
    // Do not accept the transactions if the FIFO is full.
    if (this->cpFIFO_MstAR[nPort]->IsFull() == ERESULT_TYPE_YES) {
      continue;
    }

    // Get Ax - Check if the port is busy.
    // Skip if MASTERs' ports do not issue transactions.
    if (this->cpRx_AR[nPort]->GetPair()->IsBusy() == ERESULT_TYPE_NO) {
      continue;
    }

    // ---- 2. BUS READY receives AR transactions ---
    // Get the transactions from MASTER ports.
    CPAxPkt cpAR = this->cpRx_AR[nPort]->GetPair()->GetAx();

    // Encoding AR transactions' ID
    int nID = cpAR->GetID();
    int64_t nAddr = cpAR->GetAddr();
    int nLen = cpAR->GetLen();
    int nSnoop = cpAR->GetSnoop();

#ifdef CCI_PROPOSED
    // Policy-independent measurement: log the other-master read (ungated). The
    // read proceeds normally so both policies see the identical schedule; per-read
    // waits are derived from the completion timeline at end-of-run.
    this->Range_ObserveOtherRead(nPort, nAddr, nCycle);
#endif

    nID = (nID << this->BIT_PORT) + nPort;
    cpAR->SetPkt(nID, nAddr, nLen, nSnoop);

#ifdef DEBUG
    assert(cpAR != NULL);
// cpAR->CheckPkt();
#endif

    // Put the AR transactions to local port = asserting READY.
    this->cpRx_AR[nPort]->PutAx(cpAR);

    // ---- 3. Push AR transactions to cpFIFO_MstAR ---
    // Instead of putting Rx to Tx, we put to a FIFO and maintain the FIFO to
    // waiting snoops.
    UPUD udAR = new UUD;
    udAR->cpAR = Copy_CAxPkt(cpAR);
    this->cpFIFO_MstAR[nPort]->Push(udAR); // FIXME: Only READ

#ifdef DEBUG_BUS
    printf("[Cycle %3ld: %s.Do_AR_fwd] (%s) push to FIFO[%d].\n", nCycle, this->cName.c_str(), cpAR->GetName().c_str(),
           nPort);
#endif
  }

  return (ERESULT_TYPE_SUCCESS);
};
#endif

//------------------------------------------------------
// AW valid
//------------------------------------------------------
#ifndef CCI_ON
EResultType CBUS::Do_AW_fwd(int64_t nCycle) {

  // Check Tx valid
  if (this->cpTx_AW->IsBusy() == ERESULT_TYPE_YES) {
    return (ERESULT_TYPE_FAIL);
  };

  // Check MO
  if (this->GetMO_AW() >= MAX_MO_COUNT) {
    return (ERESULT_TYPE_FAIL);
  };

  // Arbiter
  int nCandidateList[this->NUM_PORT];
  for (int nPort = 0; nPort < this->NUM_PORT; nPort++) {

    // Check remote-Tx valid
    if (this->cpRx_AW[nPort]->GetPair()->IsBusy() == ERESULT_TYPE_YES) {
      nCandidateList[nPort] = 1;
    } else {
      nCandidateList[nPort] = 0;
    };
  };

  int nArbResult = this->cpArb_AW->Arbitration(nCandidateList);

  // Check
  if (nArbResult == -1) { // Nothing arbitrated
    return (ERESULT_TYPE_SUCCESS);
  };

#ifdef DEBUG
  assert(nArbResult < this->NUM_PORT);
  assert(nArbResult > -1);
#endif

  // Get Ax
  CPAxPkt cpAW = this->cpRx_AW[nArbResult]->GetPair()->GetAx();

#ifdef DEBUG
  assert(cpAW != NULL);
// cpAW->CheckPkt();
#endif

  // Put Rx
  this->cpRx_AW[nArbResult]->PutAx(cpAW);
  // printf("[Cycle %3ld: %s.Do_AW_fwd] (%s) put Rx_AW[%d].\n", nCycle,
  // this->cName.c_str(), cpAW->GetName().c_str(), nArbResult); cpAW->Display();

  // Stat
  this->nAW_SI[nArbResult]++;

  // Encode ID
  int nID = cpAW->GetID();
  int64_t nAddr = cpAW->GetAddr();
  int nLen = cpAW->GetLen();

#ifdef CCI_PROPOSED
  // Phase 1-2: observe each forwarded AW (destination write). NOTE: this is the
  // non-CCI (#ifndef CCI_ON) forwarding path and is dead code in CCI builds
  // (Top.h always defines CCI_ON); the live hook is in the CCI_ON variant. Kept
  // in sync so a hypothetical non-CCI build still compiles.
  this->Range_ObserveAW(nArbResult, nAddr, nCycle);
#endif

  nID = (nID << this->BIT_PORT) + nArbResult;

  // Set pkt
  cpAW->SetPkt(nID, nAddr, nLen);

  // Put Tx
  this->cpTx_AW->PutAx(cpAW);
  // printf("[Cycle %3ld: %s.Do_AW_fwd] (%s) put Tx_AW.\n", nCycle,
  // this->cName.c_str(), cpAW->GetName().c_str());
  // cpAW->Display();

#ifdef USE_W_CHANNEL
  // Generate new Ax arbitrated
  UPUD upAW_new = new UUD;
  upAW_new->cpAW = Copy_CAxPkt(cpAW);

  // Push AW FIFO
  this->cpFIFO_AW->Push(upAW_new);

  // Debug
  // printf("[Cycle %3ld: %s.Do_AW_fwd] (%s) push FIFO_AW.\n", nCycle,
  // this->cName.c_str(), cpAW->GetName()); this->cpFIFO_AW->Display();
  // this->cpFIFO_AW->CheckFIFO();

  // Maintain
  Delete_UD(upAW_new, EUD_TYPE_AW);

#endif

  return (ERESULT_TYPE_SUCCESS);
};
#else
//---------------------------------------------------------------------------------------------------
// (The flow is the same as READ transactions)
//   1. Getting transactions from Masters (put into local Rx_AW ports) =
// READY.
//    1.1. If the BUS's Rx_AW is gotten, MASTERs will keep the current
// transactions at its ports.
//  2. Encode the AW transactions and push it into cpFIFO_MstAW.
//  3. The copying only happens if:
//    2.1. cpFIFO_MstAW is not full.
//    2.2. The transaction is valid at the Master's ports.
//---------------------------------------------------------------------------------------------------
EResultType CBUS::Do_AW_fwd(int64_t nCycle) {

  // ---- Check MO ---
  if (this->GetMO_AW() >= MAX_MO_COUNT) {
    return (ERESULT_TYPE_FAIL);
  };

  // ---- Receives Transactions ---
  // Checking every MASTERs' ports.
  for (int nPort = 0; nPort < this->NUM_PORT; nPort++) {

    // ---- 1. Checking receiving conditions ---
    // Do not accept the transactions if the FIFO is full.
    if (this->cpFIFO_MstAW[nPort]->IsFull() == ERESULT_TYPE_YES) {
      continue;
    }

    // Get Ax - Check if the port is busy.
    // Skip if MASTERs' ports do not issue transactions.
    if (this->cpRx_AW[nPort]->GetPair()->IsBusy() == ERESULT_TYPE_NO) {
      continue;
    }

    // ---- 2. BUS READY receives AW transactions ---
    // Get the transactions from MASTER ports.
    CPAxPkt cpAW = this->cpRx_AW[nPort]->GetPair()->GetAx();

    // Encoding AR transactions' ID
    int nID = cpAW->GetID();
    int64_t nAddr = cpAW->GetAddr();
    int nLen = cpAW->GetLen();
    int nSnoop = cpAW->GetSnoop();

    nID = (nID << this->BIT_PORT) + nPort; // FIXME: Master 3
    cpAW->SetPkt(nID, nAddr, nLen, nSnoop);

#ifdef CCI_PROPOSED
    // Phase 1: observe each accepted destination-write AW (this is the active
    // CCI_ON forwarding path) to build the range entry's line_mask per 4KB page.
    // Phase 2: allocation enters INVALIDATING and arms write_release at this cycle.
    // Observation only: does not alter timing.
    this->Range_ObserveAW(nPort, nAddr, nCycle);
#endif

#ifdef DEBUG
    assert(cpAW != NULL);
// cpAW->CheckPkt();
#endif

    // Pu the AR transactions to local port = asserting READY.
    this->cpRx_AW[nPort]->PutAx(cpAW);

    // ---- 3. Push AR transactions to cpFIFO_MstAR ---
    // Instead of putting Rx to Tx, we put to a FIFO and maintain the FIFO to
    // waiting snoops.
    UPUD udAW = new UUD;
    udAW->cpAW = Copy_CAxPkt(cpAW);
    this->cpFIFO_MstAW[nPort]->Push(udAW); // FIXME: Only READ

#ifdef DEBUG_BUS
    printf("[Cycle %3ld: %s.Do_AW_fwd] (%s) push to FIFO[%d].\n", nCycle, this->cName.c_str(), cpAW->GetName().c_str(),
           nPort);
#endif
  }

  return (ERESULT_TYPE_SUCCESS);
};
#endif

//------------------------------------------------------
// W valid
//------------------------------------------------------
EResultType CBUS::Do_W_fwd(int64_t nCycle) {

  // Check Tx valid
  if (this->cpTx_W->IsBusy() == ERESULT_TYPE_YES) {
    return (ERESULT_TYPE_FAIL);
  };

#ifdef CCI_ON
  this->Do_W_snoop_fwd(nCycle);
  if (this->cpTx_W->IsBusy() == ERESULT_TYPE_YES) {
    return (ERESULT_TYPE_SUCCESS);
  };
#endif

  // Check FIFO_AW
  if (this->cpFIFO_AW->IsEmpty() == ERESULT_TYPE_YES) {
    return (ERESULT_TYPE_SUCCESS);
  };

  // Get arbitrated port
  // int nArb = this->cpFIFO_AW->GetTop()->cpAW->GetID() % this->NUM_PORT; //
  // Only when power-of-2 ports FIXME
  int AxID = this->cpFIFO_AW->GetTop()->cpAW->GetID();
  int nArb = GetPortNum(AxID);

#ifdef DEBUG
  assert(nArb > -1);
  assert(nArb < this->NUM_PORT);
#endif

  // Check remote-Tx valid
  if (this->cpRx_W[nArb]->GetPair()->IsBusy() == ERESULT_TYPE_NO) {
    return (ERESULT_TYPE_SUCCESS);
  };

  // Get W
  CPWPkt cpW = this->cpRx_W[nArb]->GetPair()->GetW();

#ifdef DEBUG
  assert(cpW != NULL);
// cpW->CheckPkt();
#endif

  // Put Rx
  this->cpRx_W[nArb]->PutW(cpW);
  // printf("[Cycle %3ld: %s.Do_W_fwd] (%s) put Rx_W[%d].\n", nCycle,
  // this->cName.c_str(), cpW->GetName().c_str(), nArbResult); cpW->Display();

  // Encode ID
  int nID = cpW->GetID();
  nID = (nID << this->BIT_PORT) + nArb;

  // Set pkt
  cpW->SetID(nID);

  // Put Tx
  this->cpTx_W->PutW(cpW);

  // Debug
  if (cpW->IsLast() == ERESULT_TYPE_YES) {
    printf("[Cycle %3ld: %s.Do_W_fwd] (%s) WLAST put Tx_W.\n", nCycle, this->cName.c_str(), cpW->GetName().c_str());
    // cpW->Display();
  } else {
    printf("[Cycle %3ld: %s.Do_W_fwd] (%s) put Tx_W.\n", nCycle, this->cName.c_str(), cpW->GetName().c_str());
    // cpW->Display();
  };

  return (ERESULT_TYPE_SUCCESS);
};

#ifndef CCI_ON
//------------------------------------------------------
// AR ready
//------------------------------------------------------
EResultType CBUS::Do_AR_bwd(int64_t nCycle) {

  // Check Tx ready
  if (this->cpTx_AR->GetAcceptResult() == ERESULT_TYPE_REJECT) {
    return (ERESULT_TYPE_SUCCESS);
  };

  CPAxPkt cpAR = this->cpTx_AR->GetAx();

#ifdef DEBUG_BUS
  assert(cpAR != NULL);
  assert(this->cpTx_AR->IsBusy() == ERESULT_TYPE_YES);
  string cARPktName = cpAR->GetName();
  printf("[Cycle %3ld: %s.Do_AR_bwd] (%s) handshake Tx_AR.\n", nCycle, this->cName.c_str(), cARPktName.c_str());
// cpAR->Display();
#endif

  // Get arbitrated port FIXME Need? No
  int nArbResult = this->cpArb_AR->GetArbResult();
  assert(nArbResult > -1);
  assert(nArbResult < this->NUM_PORT);

  // Debug
  // int nPort = (cpAR->GetID()) % this->NUM_PORT; // Only when this->NUM_PORT
  // power-of-2. FIXME assert (nArbResult == nPort);

  // Check Rx valid
  // if (this->cpRx_AR[nPort]->IsBusy() == ERESULT_TYPE_YES) {
  //   // Set ready
  //   this->cpRx_AR[nPort]->SetAcceptResult(ERESULT_TYPE_ACCEPT);
  //
  //   // MO
  //   if (this->cpTx_AR->IsBusy() == ERESULT_TYPE_YES ) {
  //     this->Increase_MO_AR();
  //   };
  // };

  int nID = cpAR->GetID();
  int nPort = GetPortNum(nID);

#ifdef DEBUG // FIXME Need? No
  assert(nArbResult == nPort);
#endif

  // Check Rx valid
  if (this->cpRx_AR[nPort]->IsBusy() == ERESULT_TYPE_YES) {
    // Set ready
    this->cpRx_AR[nPort]->SetAcceptResult(ERESULT_TYPE_ACCEPT);
#ifdef DEBUG_BUS
    printf("[Cycle %3ld: %s.Do_AR_bwd] (%s) handshake Rx_AR[%d].\n", nCycle, this->cName.c_str(),
           (this->cpRx_AR[nPort]->GetAx()->GetName()).c_str(), nPort);
#endif
    // MO
    if (this->cpTx_AR->IsBusy() == ERESULT_TYPE_YES) {
      this->Increase_MO_AR();
    };
  };

  return (ERESULT_TYPE_SUCCESS);
};
#else
//---------------------------------------------------------------------------------------------------
// AR ready
//  1. Set the acceptance results. Indicating the BUS is ready to receive AR
// following transactions from MASTER.
//  3. The AR READY only happens if:
//    2.1. cpFIFO_MstAR is not full (have slots).
//    2.2. Already receive a transaction. Reset the AcceptResult for
// the next transactions.
//---------------------------------------------------------------------------------------------------
EResultType CBUS::Do_AR_bwd(int64_t nCycle) {

  // ---- Receives Transactions ---
  // Checking every MASTERs' ports.
  for (int nPort = 0; nPort < this->NUM_PORT; nPort++) {

    // ---- 1. Checking receiving conditions ---
    // Do not accept the transactions if the FIFO is full (after pushing the
    // current transactions).
    // if (this->cpFIFO_MstAR[nPort]->IsFull() == ERESULT_TYPE_YES) { continue;
    // }

    // ---- 2. Reset the AcceptResult = Set Ready to receive the next
    // transactions ---
    if (this->cpRx_AR[nPort]->IsBusy() == ERESULT_TYPE_YES) {
      // Set ready
      this->cpRx_AR[nPort]->SetAcceptResult(ERESULT_TYPE_ACCEPT);

#ifdef DEBUG_BUS
      printf("[Cycle %3ld: %s.Do_AR_bwd] (%s) handshake Rx_AR[%d].\n", nCycle, this->cName.c_str(),
             (this->cpRx_AR[nPort]->GetAx()->GetName()).c_str(), nPort);
#endif
    };
  };

  // ---- Increasing the outstandings if BUS successfully puts transactions into
  // Tx_AR port ---
  if (this->cpTx_AR->IsBusy() == ERESULT_TYPE_YES) {
    this->Increase_MO_AR();
  };

  return (ERESULT_TYPE_SUCCESS);
};
#endif

//------------------------------------------------------
// AW ready
//------------------------------------------------------
#ifndef CCI_ON
EResultType CBUS::Do_AW_bwd(int64_t nCycle) {

  // Check Tx ready
  if (this->cpTx_AW->GetAcceptResult() == ERESULT_TYPE_REJECT) {
    return (ERESULT_TYPE_SUCCESS);
  };

  CPAxPkt cpAW = this->cpTx_AW->GetAx();

#ifdef DEBUG_BUS
  assert(cpAW != NULL);
  assert(this->cpTx_AW->IsBusy() == ERESULT_TYPE_YES);
  printf("[Cycle %3ld: %s.Do_AW_bwd] (%s) handshake Tx_AW.\n", nCycle, this->cName.c_str(), (cpAW->GetName()).c_str());
// cpAW->Display();
#endif

#ifdef DEBUG
  // Get arbitrated port  FIXME Need? No
  int nArbResult = this->cpArb_AW->GetArbResult();
  assert(nArbResult > -1);
  assert(nArbResult < this->NUM_PORT);
#endif

  // Debug
  // int nPort = (cpAW->GetID()) % this->NUM_PORT; // Only when powe-of-2
  // assert (nArbResult == nPort);

  // // Check Rx valid
  // if (this->cpRx_AW[nPort]->IsBusy() == ERESULT_TYPE_YES) {
  //   // Set ready
  //   this->cpRx_AW[nPort]->SetAcceptResult(ERESULT_TYPE_ACCEPT);
  //
  //   // MO
  //   if (this->cpTx_AW->IsBusy() == ERESULT_TYPE_YES ) {
  //     this->Increase_MO_AW();
  //   };
  // };

  int nID = cpAW->GetID();
  int nPort = GetPortNum(nID);

#ifdef DEBUG // FIXME Need? No
  assert(nArbResult == nPort);
#endif

  // Check Rx valid
  if (this->cpRx_AW[nPort]->IsBusy() == ERESULT_TYPE_YES) {
    // Set ready
    this->cpRx_AW[nPort]->SetAcceptResult(ERESULT_TYPE_ACCEPT);
#ifdef DEBUG_BUS
    printf("[Cycle %3ld: %s.Do_AW_bwd] (%s) handshake Rx_AW[%d].\n", nCycle, this->cName.c_str(),
           (this->cpRx_AW[nPort]->GetAx()->GetName()).c_str(), nPort);
#endif

    // MO
    if (this->cpTx_AW->IsBusy() == ERESULT_TYPE_YES) {
      this->Increase_MO_AW();
    };
  };

  return (ERESULT_TYPE_SUCCESS);
};
#else
//---------------------------------------------------------------------------------------------------
// AW ready
// (The flow is the same as READ transactions)
//  1. Set the acceptance results. Indicating the BUS is ready to receive AW
// following transactions from MASTER.
//  3. The AW READY only happens if:
//    2.1. cpFIFO_MstAW is not full (have slots).
//    2.2. Already receive a transaction. Reset the AcceptResult for
// the next transactions.
//---------------------------------------------------------------------------------------------------
EResultType CBUS::Do_AW_bwd(int64_t nCycle) {

  // ---- Receives Transactions ---
  // Checking every MASTERs' ports.
  for (int nPort = 0; nPort < this->NUM_PORT; nPort++) {

    // ---- 1. Checking receiving conditions ---
    // Do not accept the transactions if the FIFO is full (after pushing the
    // current transactions). if (this->cpFIFO_MstAW[nPort]->IsFull() ==
    // ERESULT_TYPE_YES) { continue; }

    // ---- 2. Reset the AcceptResult = Set Ready to receive the next
    // transactions ---
    if (this->cpRx_AW[nPort]->IsBusy() == ERESULT_TYPE_YES) {
      // Set ready
      this->cpRx_AW[nPort]->SetAcceptResult(ERESULT_TYPE_ACCEPT);

#ifdef DEBUG_BUS
      printf("[Cycle %3ld: %s.Do_AW_bwd] (%s) handshake Rx_AW[%d].\n", nCycle, this->cName.c_str(),
             (this->cpRx_AW[nPort]->GetAx()->GetName()).c_str(), nPort);
#endif
    };
  };

  // ---- Increasing the outstandings if BUS successfully puts transactions into
  // Tx_AW port ---
  if (this->cpTx_AW->IsBusy() == ERESULT_TYPE_YES) {
    this->Increase_MO_AW();
  };

  return (ERESULT_TYPE_SUCCESS);
};
#endif

#ifdef CCI_ON
//-------------------------------------------------------
// AC valid
//  1. Scanning Ready-to-Snooped MASTERs.
//  2. Encoding the snooping transactions.
//  3. Issuing snooping to other MASTERs.
//-------------------------------------------------------
EResultType CBUS::Do_AC_fwd(int64_t nCycle) {

  // ----------------------------------------------------------------------------------
  // ---- Part 1: Snoop Issuance (Triggered after Central FIFO confirmation)
  // ----------------------------------------------------------------------------------
  for (int snoopMaster = 0; snoopMaster < this->NUM_PORT; snoopMaster++) {
    if ((SNOOP_MASK & (1 << snoopMaster)) != 0)
      continue; // Masked out snoop master

    if (this->cpFIFO_SnoopReq[snoopMaster]->IsEmpty() == ERESULT_TYPE_NO) {

      UPUD upTop = this->cpFIFO_SnoopReq[snoopMaster]->GetTop();

      if (this->cpFIFO_SnoopReq[snoopMaster]->GetHead()->nLatency > 0) {
        continue;
      }

      CPACPkt snoopReqEntry = upTop->cpAC;

      if (this->cpTx_AC[snoopMaster]->IsBusy() == ERESULT_TYPE_NO) {
        this->cpTx_AC[snoopMaster]->PutAC(snoopReqEntry);
        this->nSnoopIssued++;

#ifdef DEBUG_BUS
        printf("[Cycle %3ld: %s.Do_AC_fwd] (%s) put Tx_AC[%d] of %d/%d.\n", nCycle, this->cName.c_str(),
               snoopReqEntry->GetName().c_str(), snoopMaster, upTop->nCounter, upTop->nLength);
#endif

        upTop->nCounter++; // Move to the next beat (if multi-beat)

        if (upTop->nCounter >= upTop->nLength) {
          UPUD upPop = this->cpFIFO_SnoopReq[snoopMaster]->Pop();
          if (upPop) {
            Delete_UD(upPop, EUD_TYPE_AC);
          }
        }
      }
    }
  }

  // ----------------------------------------------------------------------------------
  // ---- Part 2: Arbitration & Decoupled Movement to Central FIFO (Pipeline Stage) ---
  // ----------------------------------------------------------------------------------
  // Dependency Check: Subsequent transactions must stall until the current
  // burst in cpFIFO_Central finishes. We enforce this by only allowing ONE
  // active transaction in cpFIFO_Central at a time for the coherence phase.
  int initMaster = nCycle & (NUM_PORT - 1); // simple scan
  CPAxPkt initTrans = NULL;

  assert(initMaster >= 0 && initMaster <= NUM_PORT);

  // Arbitration between AR and AW per master port
  if (this->bArb[initMaster]) {
    if (this->cpFIFO_MstAR[initMaster]->IsEmpty() == ERESULT_TYPE_NO) {
      initTrans = this->cpFIFO_MstAR[initMaster]->GetTop()->cpAR;
    } else if (this->cpFIFO_MstAW[initMaster]->IsEmpty() == ERESULT_TYPE_NO) {
      initTrans = this->cpFIFO_MstAW[initMaster]->GetTop()->cpAW;
      this->bArb[initMaster] = false;
    }
  } else {
    if (this->cpFIFO_MstAW[initMaster]->IsEmpty() == ERESULT_TYPE_NO) {
      initTrans = this->cpFIFO_MstAW[initMaster]->GetTop()->cpAW;
    } else if (this->cpFIFO_MstAR[initMaster]->IsEmpty() == ERESULT_TYPE_NO) {
      initTrans = this->cpFIFO_MstAR[initMaster]->GetTop()->cpAR;
      this->bArb[initMaster] = true;
    }
  }

  if (initTrans != NULL) {
    // Identify if snoop is required for this transaction
    bool bSnoopReq = true;
    if (initTrans->GetDir() == ETRANS_DIR_TYPE_WRITE) {
      int snoop = initTrans->GetSnoop();
      // WriteBack (3), WriteClean (2), WriteEvict (5), Evict (4) do not
      // require snooping
      if (snoop == 0b0011 || snoop == 0b0010 || snoop == 0b0101 || snoop == 0b0100) {
        bSnoopReq = false;
      }
    }

    // Only move to central FIFO if it's a snoop transaction. Snoop-less
    // transactions can be issued directly to memory.
    if (bSnoopReq) {

      // Performance tracking: Count the number of cycles stalled due to
      // central FIFO being full or snoop request FIFO being full.
      bool SnoopReqIsFull = false;
      for (int snoopMaster = 0; snoopMaster < this->NUM_PORT; snoopMaster++) {
        if (snoopMaster == initMaster)
          continue;
        if ((SNOOP_MASK & (1 << snoopMaster)) != 0)
          continue;
        if (this->cpFIFO_SnoopReq[snoopMaster]->IsFull() == ERESULT_TYPE_YES) {
          SnoopReqIsFull = true;
          break;
        }
      }

      if (this->cpFIFO_Central->IsFull() == ERESULT_TYPE_YES)
        this->nCentralStall++;
      if (SnoopReqIsFull)
        this->nACStall++;
      if (SnoopReqIsFull && (this->cpFIFO_Central->IsFull() == ERESULT_TYPE_YES))
        this->nStall++;

      // Exit the loop and stall if either FIFO is full, as we cannot proceed
      // with the snoop transaction until there is space in both FIFOs.
      if (this->cpFIFO_Central->IsFull() == ERESULT_TYPE_YES)
        return (ERESULT_TYPE_SUCCESS);

      if (SnoopReqIsFull)
        return (ERESULT_TYPE_SUCCESS);

      bool SnoopReqMstIsFull = false;
      for (int snoopMaster = 0; snoopMaster < this->NUM_PORT; snoopMaster++) {
        if (snoopMaster == initMaster)
          continue;

        if ((SNOOP_MASK & (1 << snoopMaster)) != 0)
          continue;

        if (this->cpFIFO_SnoopReqMst[snoopMaster]->IsFull() == ERESULT_TYPE_YES)
          SnoopReqMstIsFull = true;
      }
      if (SnoopReqMstIsFull)
        return (ERESULT_TYPE_SUCCESS);

      // For snoop transactions, we still push them to central FIFO for
      // snooping. Encoding the snooping transactions
      CPACPkt SnoopPkt = new CACPkt;
      SnoopPkt->SetSnoop(initTrans->GetSnoop());
      SnoopPkt->SetName(initTrans->GetName());
      SnoopPkt->SetAddr(initTrans->GetAddr());

      // READ transactions: Snoop encoding is mostly 1-to-1 mapping, except
      // for some special cases like WriteBack/WriteClean which can be treated
      // as ReadUnique for snooping purposes.
      if (initTrans->GetDir() == ETRANS_DIR_TYPE_READ) {

        SnoopPkt->SetTransDirType(ETRANS_DIR_TYPE_READ);

        if (initTrans->GetSnoop() == 0b0000)
          SnoopPkt->SetSnoop(0b0000); // ReadOnce           -> ReadOnce
        else if (initTrans->GetSnoop() == 0b0001)
          SnoopPkt->SetSnoop(0b0001); // ReadClean          -> ReadClean
        else if (initTrans->GetSnoop() == 0b0010)
          SnoopPkt->SetSnoop(0b0010); // ReadNotSharedDirty -> ReadNotSharedDirty
        else if (initTrans->GetSnoop() == 0b0011)
          SnoopPkt->SetSnoop(0b0011); // ReadShared         -> ReadShared
        else if (initTrans->GetSnoop() == 0b0111)
          SnoopPkt->SetSnoop(0b0111); // ReadUnique         -> ReadUnique
        else if (initTrans->GetSnoop() == 0b1011)
          SnoopPkt->SetSnoop(0b1001); // CleanUnique        -> CleanInvalid
        else if (initTrans->GetSnoop() == 0b1100)
          SnoopPkt->SetSnoop(0b1101); // MakeUnique         -> MakeInvalid
        else if (initTrans->GetSnoop() == 0b1000)
          SnoopPkt->SetSnoop(0b1000); // CleanShared        -> CleanShared
        else if (initTrans->GetSnoop() == 0b1001)
          SnoopPkt->SetSnoop(0b1001); // CleanInvalid       -> CleanInvalid
        else if (initTrans->GetSnoop() == 0b1101)
          SnoopPkt->SetSnoop(0b1101); // MakeInvalid        -> MakeInvalid
        else
          assert(false);

        // WRITE transactions: More complex encoding based on the snoop type.
        // For example, WriteLineUnique may require a MakeInvalidate if
        // snooped by multiple targets,
      } else {

        SnoopPkt->SetTransDirType(ETRANS_DIR_TYPE_WRITE);

        if (initTrans->GetSnoop() == 0b0000)
          SnoopPkt->SetSnoop(0b1001); // WriteUnique    -> CleanInvalid
        else if (initTrans->GetSnoop() == 0b0001)
          SnoopPkt->SetSnoop(0b1101); // WriteLineUnique  -> MakeInvalid
        else
          assert(false);
      }

      // Confirm in cpFIFO_Central before any snoop activity occurs
      UPUD upCentral = new UUD;
      upCentral->cpCentral = Copy_CAxPkt(initTrans);
      upCentral->nCounter = 0;
      upCentral->nLength = ceil((initTrans->GetLen() + 1) / 4.0);
      upCentral->nSnoopMask = 0;

      this->cpFIFO_Central->Push(upCentral, BUS_LATENCY);
      Delete_UD(upCentral, EUD_TYPE_CENTRAL);

      // Push snoop requests to target master snoop request queues
      for (int snoopMaster = 0; snoopMaster < this->NUM_PORT; snoopMaster++) {
        if (snoopMaster == initMaster)
          continue;
        if ((SNOOP_MASK & (1 << snoopMaster)) != 0)
          continue;

        UPUD upNew = new UUD;
        upNew->cpAC = Copy_CACPkt(SnoopPkt);
        upNew->nCounter = 0;
        upNew->nLength = ceil((initTrans->GetLen() + 1) / 4.0);
        upNew->nSnoopMask = 0;
        this->cpFIFO_SnoopReq[snoopMaster]->Push(upNew, BUS_LATENCY);
        Delete_UD(upNew, EUD_TYPE_AC);
      }

      // Push to parallel cpFIFO_SnoopReqMst when cpFIFO_SnoopReq is push
      for (int snoopMaster = 0; snoopMaster < this->NUM_PORT; snoopMaster++) {
        if (snoopMaster == initMaster)
          continue;

        if ((SNOOP_MASK & (1 << snoopMaster)) != 0)
          continue;

        UPUD upAC_mst = new UUD;
        upAC_mst->cpCentral = Copy_CAxPkt(initTrans);
        upAC_mst->nCounter = 0;
        upAC_mst->nLength = ceil((initTrans->GetLen() + 1) / 4.0);
        upAC_mst->nSnoopMask = 0;
        this->cpFIFO_SnoopReqMst[snoopMaster]->Push(upAC_mst);
        Delete_UD(upAC_mst, EUD_TYPE_CENTRAL);
      }

      // Snoop-less transaction (e.g. WriteBack): Issue directly to memory
      // Only push the outstanding memory write ID for snoop transactions.
      // Do not need to check for potential hazards here since all of writes
      // requested transfer to the memory.
      // if (initTrans->GetDir() == ETRANS_DIR_TYPE_WRITE) {
      //   for (int i = 0; i < ((initTrans->GetLen() + 1) / 4.0); i++) {
      //     this->m_outstandingMemAWID.push_back(initTrans->GetID());
      //     this->m_outstandingMemAWAddr.push_back(initTrans->GetAddr() + i);
      //   }
      // }

#ifdef DEBUG_BUS
      string curName = initTrans->GetName();
      printf("[Cycle %3ld: %s.Do_AC_fwd] (%s) Moved to Central FIFO from "
             "Master[%d].\n",
             nCycle, this->cName.c_str(), curName.c_str(), initMaster);
#endif

    } else {
      // WriteBack (3), WriteClean (2), WriteEvict (5), Evict (4) do not
      // require snooping requrests (e.g. WriteBack): Issue
      // directly to memory
      if (initTrans->GetDir() == ETRANS_DIR_TYPE_WRITE) {

        if (this->cpTx_AW->IsBusy() == ERESULT_TYPE_YES) {
          return (ERESULT_TYPE_SUCCESS);
          ;
        } // Stall until memory interface is ready
        if (this->GetMO_AW() >= MAX_MO_COUNT) {
          return (ERESULT_TYPE_SUCCESS);
          ;
        } // Stall until MO allows new transaction

        // If there are outstanding memory writes, we need to check for
        // potential hazards cause by WriteUnique.
        int nID = initTrans->GetID();
        int64_t nAddr = initTrans->GetAddr();
        auto it = std::find(this->m_outstandingMemAWID.begin(), this->m_outstandingMemAWID.end(), nID);
        if (it != this->m_outstandingMemAWID.end()) { // Found an outstanding memory
          return (ERESULT_TYPE_SUCCESS);
          ;
        }

        // Write-to-Write guarantee
        auto itAddr = std::find(this->m_outstandingMemAWAddr.begin(), this->m_outstandingMemAWAddr.end(), nAddr);
        if (itAddr != this->m_outstandingMemAWAddr.end()) {
          return (ERESULT_TYPE_SUCCESS);
          ; // Stall if address hazard detected
        }

        // Read-to-Write guarantee
        auto itAddrR = std::find(this->m_outstandingMemARAddr.begin(), this->m_outstandingMemARAddr.end(), nAddr);
        if (itAddrR != this->m_outstandingMemARAddr.end()) {
          return (ERESULT_TYPE_SUCCESS);
          ; // Stall if address hazard detected
        }

        this->cpTx_AW->PutAx(initTrans);
        this->m_outstandingMemAWID.push_back(nID);
        this->m_outstandingMemAWAddr.push_back(initTrans->GetAddr());
        this->m_outstandingMemAWIsRead.push_back(false);
      }

#ifdef DEBUG_BUS
      string curName = initTrans->GetName();
      printf("[Cycle %3ld: %s.Do_AC_fwd] (%s) Snoop-less transaction issued "
             "to memory from Master[%d].\n",
             nCycle, this->cName.c_str(), curName.c_str(), initMaster);
#endif
    }

    // ----------------------------------------------------------------------------------
    // ---- Part 3: Fast-Snoop Response Optimization
    // ----------------------------------------------------------------------------------
    // Fast-Snoop Response Optimization: For certain snoop-less transactions
    // that are known to be WriteBack/WriteClean/WriteEvict, we can directly
    // generate a snoop response to the initiator without waiting for memory
    // response.

    // Get the master ID from the transaction ID encoding
    int initMaster = GetPortNum(initTrans->GetID());

    // Currently, all write can be optimized as fast-snoop since they do not
    // require snooping. We can add more conditions here if needed. int snoop
    // = initTrans->GetSnoop();
    bool isFastSnoop = (initTrans->GetDir() == ETRANS_DIR_TYPE_WRITE);

    // Doing-the fast-snoop response.
    if (isFastSnoop || (!bSnoopReq)) {

      // Stall until the initiator's B channel is ready to accept the response
      if (this->cpTx_B[initMaster]->IsBusy() == ERESULT_TYPE_YES) {
        return (ERESULT_TYPE_SUCCESS);
        ;
      }

      // Handling the early response for snoop-less transactions.
      // We can directly send a response back to the initiator without waiting
      // for snoops or memory response.
      UPUD respTrans = new UUD;
      respTrans->cpB = new CBPkt;
      respTrans->cpB->SetID(initTrans->GetID());
      respTrans->cpB->SetName(initTrans->GetName());
      respTrans->cpB->SetFinalTrans(initTrans->IsFinalTrans());
      this->cpTx_B[initMaster]->PutB(respTrans->cpB);

#ifdef DEBUG_BUS
      printf("[Cycle %3ld: %s.Do_AC_fwd] Early Response: Acknowledging "
             "Initiating Master[%d] for (%s).\n",
             nCycle, this->cName.c_str(), initMaster, initTrans->GetName().c_str());
#endif
      delete respTrans;
    }

    // Pop from master staging FIFO after successful movement/issuance
    if (initTrans->GetDir() == ETRANS_DIR_TYPE_READ) {
      UPUD upPop = this->cpFIFO_MstAR[initMaster]->Pop();
      if (upPop)
        Delete_UD(upPop, EUD_TYPE_AR);
      this->bArb[initMaster] = false; // Toggle for next
    } else {
      UPUD upPop = this->cpFIFO_MstAW[initMaster]->Pop();
      if (upPop)
        Delete_UD(upPop, EUD_TYPE_AW);
      this->bArb[initMaster] = true; // Toggle for next
    }
  }

  return (ERESULT_TYPE_SUCCESS);
}

EResultType CBUS::Do_AC_bwd(int64_t nCycle) {

  // ---- Receives Transactions ---
  // Checking every MASTERs' ports.
  for (int nPort = 0; nPort < this->NUM_PORT; nPort++) {
    // Check Tx valid
    CPACPkt cpAC = this->cpTx_AC[nPort]->GetAC();

    if (cpAC == NULL) {
      continue;
    };

    // Check Tx ready
    EResultType eAcceptResult = this->cpTx_AC[nPort]->GetAcceptResult();

    if (eAcceptResult == ERESULT_TYPE_ACCEPT) {

#ifdef DEBUG_MST
      string cACPktName = cpAC->GetName();
      printf("[Cycle %3ld: %s.Do_AC_bwd] %s handshake cpTx_AC[%d].\n", nCycle, this->cName.c_str(), cACPktName.c_str(),
             nPort);
// cpAR->Display();
#endif
    };
  }

  return (ERESULT_TYPE_SUCCESS);
};

//------------------------------------------------------
// CD ready
//   1. Getting transactions from Masters (put into local cpRx_CD ports) =
// READY.
//    1.1. If the BUS's cpRx_CD is gotten, MASTERs will keep the
// current transactions at its ports.
//  2. Encode the CD transactions and push it into cpFIFO_SnoopData.
//  3. The copying only happens if:
//    2.1. cpFIFO_SnoopData is not full.
//    2.2. The transaction is valid at the Master's ports.
//------------------------------------------------------
EResultType CBUS::Do_CD_fwd(int64_t nCycle) {

  // bool fcaptured = false;

  // ---- 1. Checking receiving conditions ---
  // Do not accept the transactions if the FIFO is full.
  if (this->cpFIFO_SnoopData->IsFull() == ERESULT_TYPE_YES) { // No transaction
    return (ERESULT_TYPE_FAIL);
  }

  for (int i = 0; i < this->NUM_PORT; i++) {

    // Get CD - Check if the port is busy.
    // Skip if MASTERs' ports do not have transactions.
    if (this->cpRx_CD[i]->GetPair()->IsBusy() == ERESULT_TYPE_NO) { // No transaction
      continue;
    }

    // ---- 2. BUS READY receives CD transactions ---
    // Get the transactions from MASTER ports.
    CPCDPkt cpCD = this->cpRx_CD[i]->GetPair()->GetCD();

    if (cpCD == NULL) {
      continue;
    };

    // Put the CD transactions to local port = READY.
    this->cpRx_CD[i]->PutCD(cpCD);

    // --------------------
    // Drop the CD data.
    // --------------------

    //    // ---- 3. Push CD transactions to cpFIFO_SnoopData ---
    //    // Encode ID
    //    if (this->cpFIFO_Central->IsEmpty() == ERESULT_TYPE_YES) {
    // #ifdef DEBUG_BUS
    //      printf("[Cycle %3ld: %s.Do_CD_fwd] Unexpected CD packet from
    //      Master[%d] "
    //             "without active snoop.\n",
    //             nCycle, this->cName.c_str(), i);
    // #endif
    //      continue;
    //    }
    //    UPUD upTop = this->cpFIFO_Central->GetTop();
    //    CPAxPkt cpAxTop_cd = upTop->cpCentral->cpAx;
    //    int nID = cpAxTop_cd->GetID();
    //    int nData = cpCD->GetData();
    //    int nLast = (cpCD->IsLast() == ERESULT_TYPE_YES) ? 1 : 0;
    //
    //    // Only get the first data matches, every data should be the same.
    //    // Other data is dropped.
    //    if (!fcaptured) {
    //      // Set pkt
    //      UPUD upW_new = new UUD;
    //      upW_new->cpW = new CWPkt;
    //      upW_new->cpW->SetPkt(nID, nData, nLast);
    //      upW_new->cpW->SetName(cpCD->GetName());
    //
    //      this->cpFIFO_SnoopData->Push(upW_new);
    //      Delete_UD(upW_new, EUD_TYPE_W);
    //      fcaptured = true;
    //
    // #ifdef DEBUG_BUS
    //      printf("[Cycle %3ld: %s.Do_CD_fwd] (%s) captured Rx_CD[%d].\n",
    //      nCycle,
    //             this->cName.c_str(), cpCD->GetName().c_str(), i);
    // #endif
    //    }
  }
  return (ERESULT_TYPE_SUCCESS);
};

//---------------------------------------------------------------------------------------------------
// CD ready
//  Handles the backward (READY) part of the CD channel handshake.
//  If the bus has received data from a master port (i.e., cpRx_CD is busy),
//  it signals acceptance (asserts READY) back to that master.
//---------------------------------------------------------------------------------------------------
EResultType CBUS::Do_CD_bwd(int64_t nCycle) {

  // ---- Receives Transactions ---
  // Checking every MASTERs' ports.
  for (int i = 0; i < this->NUM_PORT; i++) {
    // If a packet is present in the receive port, signal acceptance.
    if (this->cpRx_CD[i]->IsBusy() == ERESULT_TYPE_YES) {
      this->cpRx_CD[i]->SetAcceptResult(ERESULT_TYPE_ACCEPT);

#ifdef DEBUG_BUS
      CPCDPkt cpCD = this->cpRx_CD[i]->GetCD();
      printf("[Cycle %3ld: %s.Do_CD_bwd] (%s) handshake cpRx_CD[%d].\n", nCycle, this->cName.c_str(),
             cpCD->GetName().c_str(), i);
#endif
    }
  }

  return (ERESULT_TYPE_SUCCESS);
};

//------------------------------------------------------
// CR ready
//  1. Collect CR from snoop targets to FIFOs.
//   2. Ensure all snoop targets have returned CR.
//   3. Write to the main memory (For transactions required WB).
//  4. Read the main memory (For transactions require READ because no
// MASTERs hold the requrested cacheline).
//  5. Return to the initiating Master (Do not need to access the main
// memory).
//------------------------------------------------------
#ifdef CCI_ON
//---------------------------------------------------------------------------------------------------
// Helper: HasIDConflictInCentralFIFO
//  Scans 'cpFIFO_Central' from top (head) to the current target transaction 'upCentral'.
//  - Returns true if there is a transaction closer to the top that has the SAME AXI transaction ID.
//  - This enforces in-order execution requirements for transactions with the same ID, even when
//    out-of-order traversal allows newer transactions with different IDs to pass stalled ones.
//---------------------------------------------------------------------------------------------------
bool CBUS::HasIDConflictInCentralFIFO(UPUD upCentral) {
  if (!upCentral || !upCentral->cpCentral) {
    return false;
  }
  int targetID = upCentral->cpCentral->GetID();
  SPLinkedUD spScan = this->cpFIFO_Central->GetHead();
  while (spScan != NULL) {
    UPUD upCurrent = spScan->upData;
    // Stop scanning once we reach the target entry itself.
    if (upCurrent == upCentral) {
      break;
    }
    // If a prior entry closer to the top has the same AXI ID, a conflict exists.
    if (upCurrent && upCurrent->cpCentral && upCurrent->cpCentral->GetID() == targetID) {
      return true;
    }
    spScan = spScan->spNext;
  }
  return false;
}

//---------------------------------------------------------------------------------------------------
// Helper: GetSnoopResponseCount
//  Scans the active snoop requests queue ('cpFIFO_SnoopReqMst') for 'for_snoopMaster' to locate
//  the tracking entry matching the current central transaction.
//  - Returns the transaction's current snoop beat counter.
//  - Returns 'nLength' if no entry is found, meaning no active snoop requests are outstanding.
//---------------------------------------------------------------------------------------------------
int CBUS::GetSnoopResponseCount(UPUD upCentral, int for_snoopMaster) {
  // Pre-validate that we have a valid transaction packet to compare against.
  if (!upCentral || !upCentral->cpCentral) {
    return 0;
  }

  SPLinkedUD spScan = this->cpFIFO_SnoopReqMst[for_snoopMaster]->GetHead();
  while (spScan != NULL) {
    UPUD upMst = spScan->upData;
    // Check if the outstanding snoop request corresponds to the exact central transaction name.
    if (upMst && upMst->cpCentral && upMst->cpCentral->GetName() == upCentral->cpCentral->GetName()) {
      return upMst->nCounter;
    }
    spScan = spScan->spNext;
  }
  return upCentral->nLength;
}

//---------------------------------------------------------------------------------------------------
// Helper: PopSnoopResponses
//  Consumes and deletes the gathered snoop response packets from the snoop response FIFOs for all
//  active master ports (excluding the initiating master and masked out ports).
//---------------------------------------------------------------------------------------------------
void CBUS::PopSnoopResponses(int initMaster, const std::vector<UPUD> &readySnoopResps) {
  // If the snoop response list is empty (e.g., WriteLineUnique), there are no responses to consume.
  if (readySnoopResps.empty()) {
    return;
  }

  for (int i = 0; i < this->NUM_PORT; i++) {
    if (i == initMaster)
      continue;
    if ((SNOOP_MASK & (1 << i)) != 0)
      continue; // Mask out snoop master

    // Fetch the matched snoop response packet from our pre-validated collection.
    UPUD upCR = readySnoopResps[i];
    if (upCR) {
      UPUD upTmp = this->cpFIFO_SnoopResp[i]->Pop(upCR);
      if (upTmp)
        Delete_UD(upTmp, EUD_TYPE_CR);
    }
  }
}

//---------------------------------------------------------------------------------------------------
// Helper: CheckSnoopResponses
//  Verifies whether snoop responses for the current beat of the transaction (upCentral->nCounter)
//  have been received from all expected snoop targets.
//  - Outstanding snoop progress is matched against 'cpFIFO_SnoopReqMst' counters.
//  - Gathers pointers to the target snoop responses into 'readySnoopResps' on success.
//---------------------------------------------------------------------------------------------------
bool CBUS::CheckSnoopResponses(UPUD upCentral, std::vector<UPUD> &readySnoopResps) {
  CPAxPkt cpAxTop = upCentral->cpCentral;
  int initMaster = GetPortNum(cpAxTop->GetID());
  string expectedName = "CR_" + cpAxTop->GetName();
  readySnoopResps.resize(this->NUM_PORT, NULL);

  for (int for_snoopMaster = 0; for_snoopMaster < this->NUM_PORT; for_snoopMaster++) {
    if (for_snoopMaster == initMaster)
      continue;
    if ((SNOOP_MASK & (1 << for_snoopMaster)) != 0)
      continue; // Mask out snoop master

    // Compare the number of snoop responses received against the transaction's current beat index.
    int respCount = GetSnoopResponseCount(upCentral, for_snoopMaster);
    if (respCount <= upCentral->nCounter) {
      return false; // Snoop response for the current beat is still outstanding.
    }

    // Find the specific snoop response packet by name in the response FIFO.
    UPUD upCR = this->cpFIFO_SnoopResp[for_snoopMaster]->FindByName(expectedName);
    if (upCR == NULL) {
      return false;
    }
    readySnoopResps[for_snoopMaster] = upCR;
  }
  return true;
}

//---------------------------------------------------------------------------------------------------
// Helper: TryWriteToMemory
//  Attempts to issue a write transaction to main memory (AW channel) if:
//  - Memory controller outstanding queue limits are not exceeded.
//  - Write address channel is not busy.
//  - No address/ID hazards exist with already in-flight outstanding transactions.
//---------------------------------------------------------------------------------------------------
bool CBUS::TryWriteToMemory(UPUD upCentral, bool isClean, bool isWriteLineUnique,
                            const std::vector<UPUD> &readySnoopResps, int64_t nCycle) {
  CPAxPkt cpAxTop = upCentral->cpCentral;
  int initMaster = GetPortNum(cpAxTop->GetID());

  // Enforce in-order execution within Central FIFO for matching IDs.
  if (HasIDConflictInCentralFIFO(upCentral)) {
    return false;
  }

  // Enforce outstanding memory transaction budget limit.
  if (this->GetMO_AW() >= MAX_MO_COUNT) {
    return false;
  }

  // Ensure the memory interface write address channel (AW) is ready.
  if (this->cpTx_AW->IsBusy() == ERESULT_TYPE_YES) {
    return false;
  }

  // Address conflicts checking: Only conflict if address matches but AXI ID is different.
  // Transactions with matching IDs are guaranteed to execute in-order, preventing hazards.
  for (size_t i = 0; i < this->m_outstandingMemAWAddr.size(); i++) {
    if (this->m_outstandingMemAWAddr[i] == cpAxTop->GetAddr() && this->m_outstandingMemAWID[i] != cpAxTop->GetID()) {
      return false; // Stall to avoid reordering hazards at the memory controller.
    }
  }

  // Ensure write-after-read coherence by blocking if matching read transactions are outstanding.
  auto itAddrR =
      std::find(this->m_outstandingMemARAddr.begin(), this->m_outstandingMemARAddr.end(), cpAxTop->GetAddr());
  if (itAddrR != this->m_outstandingMemARAddr.end()) {
    return false; // Stall
  }

  // Clone transaction packet and submit to memory AW interface.
  CPAxPkt cpAW = Copy_CAxPkt(cpAxTop);
  this->cpTx_AW->PutAx(cpAW);

  // If this is a ReadClean transaction converted to memory writeback, track it in the AR outstanding list.
  this->m_outstandingMemAWID.push_back(cpAW->GetID());
  this->m_outstandingMemAWAddr.push_back(cpAW->GetAddr());

  if (cpAxTop->GetDir() == ETRANS_DIR_TYPE_READ) {
    this->m_outstandingMemAWIsRead.push_back(true);
  } else {
    this->m_outstandingMemAWIsRead.push_back(false);
  }

  // For standard writes (not WriteLineUnique), consume and delete the resolved snoop response packets.
  if (!isWriteLineUnique) {
    PopSnoopResponses(initMaster, readySnoopResps);
  }

  // Advance beat progress and update next burst address based on the current scan/rotation scenario.
  upCentral->nCounter += 1;
  cpAxTop->SetAddr(cpAxTop->GetAddr() + MAX_TRANS_SIZE);

#ifdef DEBUG_BUS
  printf("[Cycle %3ld: %s.Do_CR_fwd] (%s) put Tx_AW to %lx of %d/%d. Mark "
         "top snoop UNDEFINED.\n",
         nCycle, this->cName.c_str(), cpAW->GetName().c_str(), cpAW->GetAddr(), upCentral->nCounter,
         upCentral->nLength);
#endif

  return true;
}

//---------------------------------------------------------------------------------------------------
// Helper: TryReadFromMemory
//  Attempts to issue a read transaction to main memory (AR channel) if:
//  - Memory controller outstanding queue limits are not exceeded.
//  - Read address channel is not busy.
//  - No address/ID hazards exist with already in-flight outstanding transactions.
//---------------------------------------------------------------------------------------------------
bool CBUS::TryReadFromMemory(UPUD upCentral, const std::vector<UPUD> &readySnoopResps, int64_t nCycle) {
  CPAxPkt cpAxTop = upCentral->cpCentral;
  int initMaster = GetPortNum(cpAxTop->GetID());

  // Enforce in-order execution within Central FIFO for matching IDs.
  if (HasIDConflictInCentralFIFO(upCentral)) {
    return false;
  }

  // Enforce outstanding memory transaction budget limit.
  if (this->GetMO_AR() >= MAX_MO_COUNT) {
    return false;
  }

  // Ensure the memory interface read address channel (AR) is ready.
  if (this->cpTx_AR->IsBusy() == ERESULT_TYPE_YES) {
    return false;
  }

  // Write-to-Read hazard prevention: Stall if a write to the exact same address is in flight.
  auto itAddrW =
      std::find(this->m_outstandingMemAWAddr.begin(), this->m_outstandingMemAWAddr.end(), cpAxTop->GetAddr());
  if (itAddrW != this->m_outstandingMemAWAddr.end()) {
    return false; // Stall to maintain write-after-read consistency.
  }

  // // Read-to-Read hazard prevention: Do not need to check
  // auto itAddrR =
  //     std::find(this->m_outstandingMemARAddr.begin(), this->m_outstandingMemARAddr.end(), cpAxTop->GetAddr());
  // if (itAddrR != this->m_outstandingMemARAddr.end()) {
  //   return false; // Stall
  // }

  // Clone transaction packet and submit to memory AR interface.
  CPAxPkt cpAR = Copy_CAxPkt(cpAxTop);
  cpAR->SetLen(AXI_BURST_LENGTH - 1);
  this->cpTx_AR->PutAx(cpAR);

  // Record this transaction as an active outstanding memory read.
  this->m_outstandingMemARID.push_back(cpAR->GetID());
  this->m_outstandingMemARAddr.push_back(cpAR->GetAddr());

  // Consume and delete the gathered snoop response packets from response FIFOs.
  PopSnoopResponses(initMaster, readySnoopResps);

  // Update central transaction progress and advance next address.
  upCentral->nCounter += 1;
  cpAxTop->SetAddr(cpAxTop->GetAddr() + MAX_TRANS_SIZE);

#ifdef DEBUG_BUS
  printf("[Cycle %3ld: %s.Do_CR_fwd] (%s) put Tx_AR to %lx.\n", nCycle, this->cName.c_str(), cpAR->GetName().c_str(),
         cpAR->GetAddr());
#endif

  return true;
}

//---------------------------------------------------------------------------------------------------
// Helper: TryReturnResponseToMaster
//  Attempts to return the snoop response directly to the initiating master's response channel (R)
//  without memory transaction if:
//  - Master R response port is not busy.
//  - No ID ordering violations exist with currently outstanding memory operations.
//---------------------------------------------------------------------------------------------------
bool CBUS::TryReturnResponseToMaster(UPUD upCentral, int initMaster, bool bIsShared, bool bPassDirty,
                                     const std::vector<UPUD> &readySnoopResps, int64_t nCycle) {
  CPAxPkt cpAxTop = upCentral->cpCentral;
  int currentOriginalID = cpAxTop->GetID();

  // Enforce in-order execution within Central FIFO for matching IDs.
  if (HasIDConflictInCentralFIFO(upCentral)) {
    return false;
  }

  // Enforce ID ordering: Block if a transaction with the same ID is in flight to memory.
  // This prevents transaction reordering violations at the initiating master.
  auto itAR = std::find(this->m_outstandingMemARID.begin(), this->m_outstandingMemARID.end(), currentOriginalID);
  if (itAR != this->m_outstandingMemARID.end()) {
    return false; // Stall
  }

  auto itAW = std::find(this->m_outstandingMemAWID.begin(), this->m_outstandingMemAWID.end(), currentOriginalID);
  if (itAW != this->m_outstandingMemAWID.end()) {
    return false; // Stall
  }

  // Ensure initiating master's response channel (R channel) is ready.
  if (this->cpTx_R[initMaster]->IsBusy() == ERESULT_TYPE_YES) {
    return false;
  }

  // Create a clean CR response packet and place it onto the master's receive port.
  CPRPkt cpR = new CRPkt;
  cpR->SetPkt(initMaster, 0, ERESULT_TYPE_YES, (bIsShared << 3) | (bPassDirty << 2));
  cpR->SetLast(ERESULT_TYPE_YES);
  cpR->SetName(cpAxTop->GetName());
  cpR->SetFinalTrans(cpAxTop->IsFinalTrans());
  this->cpTx_R[initMaster]->PutR(cpR);

#ifdef DEBUG_BUS
  printf("[Cycle %3ld: %s.Do_CR_fwd] (%s) put Tx_R.\n", nCycle, this->cName.c_str(), cpR->GetName().c_str());
#endif

  // Consume and delete the gathered snoop response packets from response FIFOs.
  PopSnoopResponses(initMaster, readySnoopResps);

  // Update central transaction progress tracking
  upCentral->nCounter += 1;
  this->nRTrans[initMaster]++;
  cpAxTop->SetAddr(cpAxTop->GetAddr() + MAX_TRANS_SIZE);

  return true;
}
#endif

EResultType CBUS::Do_CR_fwd(int64_t nCycle) {

  // ----------------------------------------------------------------------------------
  // Part 1: Collect CR from snoop targets
  // ----------------------------------------------------------------------------------
  for (int for_snoopMaster = 0; for_snoopMaster < this->NUM_PORT; for_snoopMaster++) {

    // Do not collect CR from the initiating master or masked-out snoop
    // master.
    if ((SNOOP_MASK & (1 << for_snoopMaster)) != 0)
      continue; // Mask out snoop master

    // Do not collect CR if the snoop response FIFO is full or the CR is not
    // ready at the target master port.
    if (this->cpFIFO_SnoopResp[for_snoopMaster]->IsFull() == ERESULT_TYPE_YES)
      continue;

    if (this->cpRx_CR[for_snoopMaster]->GetPair()->IsBusy() == ERESULT_TYPE_NO)
      continue;

    // Collect the CR from the target master port and push it into the
    // corresponding snoop response FIFO for later processing.
    CPCRPkt cpCR = this->cpRx_CR[for_snoopMaster]->GetPair()->GetCR();

    if (cpCR == NULL)
      continue;

    // Incase there is a CR response, the cpFIFO_SnoopReqMst must be not empty.
    assert(this->cpFIFO_SnoopReqMst[for_snoopMaster]->IsEmpty() == ERESULT_TYPE_NO);

    // Construct a response and push to the FIFO
    this->cpRx_CR[for_snoopMaster]->PutCR(cpCR);
    this->nSnoopResp++;
    UPUD upCR_new = new UUD;
    upCR_new->cpCR = Copy_CCRPkt(cpCR);
    upCR_new->nCounter = this->nSnoopCnt;
    upCR_new->nLength = 0;

    bool dropSnoop =
        (this->cpFIFO_SnoopReqMst[for_snoopMaster]->GetTop()->cpCentral->GetSnoop() == 0b001) &&
        (this->cpFIFO_SnoopReqMst[for_snoopMaster]->GetTop()->cpCentral->GetDir() == ETRANS_DIR_TYPE_WRITE);

    if (!dropSnoop)
      this->cpFIFO_SnoopResp[for_snoopMaster]->Push(upCR_new);

    this->cpFIFO_SnoopReqMst[for_snoopMaster]->GetTop()->nCounter += 1;

    if (this->cpFIFO_SnoopReqMst[for_snoopMaster]->GetTop()->nCounter >=
        this->cpFIFO_SnoopReqMst[for_snoopMaster]->GetTop()->nLength) {
      UPUD upPopAC = this->cpFIFO_SnoopReqMst[for_snoopMaster]->Pop();
      if (upPopAC)
        Delete_UD(upPopAC, EUD_TYPE_CENTRAL);
    }

    Delete_UD(upCR_new, EUD_TYPE_CR);

#ifdef DEBUG_BUS
    printf("[Cycle %3ld: %s.Do_CR_fwd] (%s) CR from Master[%d].\n", nCycle, this->cName.c_str(),
           cpCR->GetName().c_str(), for_snoopMaster);
#endif
  }

  if (this->cpFIFO_Central->IsEmpty() == ERESULT_TYPE_YES)
    return (ERESULT_TYPE_SUCCESS);

  ProcessCentralTransactions(nCycle);

  return (ERESULT_TYPE_SUCCESS);
}

bool CBUS::ProcessCentralTransactions(int64_t nCycle) {
  // Traverse the central FIFO to process ready transactions out-of-order
  SPLinkedUD spScan = this->cpFIFO_Central->GetHead();
  while (spScan != NULL) {
    UPUD upCentral = spScan->upData;
    SPLinkedUD spNextScan = spScan->spNext;

    // Check the latency of the current entry
    if (spScan->nLatency > 0) {
      spScan = spNextScan;
      continue;
    }

    CPAxPkt cpAxTop = upCentral->cpCentral;
    int initMaster = GetPortNum(cpAxTop->GetID());

    int nSnoopType = cpAxTop->GetSnoop();
    bool isWrite = (cpAxTop->GetDir() == ETRANS_DIR_TYPE_WRITE);

    // CleanShared (1000), CleanInvalid (1001) and CleanUnique (1011)
    bool isClean = ((nSnoopType == 0b1000 || nSnoopType == 0b1001 || nSnoopType == 0b1011) &&
                    (cpAxTop->GetDir() == ETRANS_DIR_TYPE_READ));

    // WriteLineUnique (1101)
    bool isWriteLineUnique = (isWrite && nSnoopType == 0b001);

    std::vector<UPUD> readySnoopResps;
    bool snoopResponsesReady = false;

    if (isWriteLineUnique) {
      snoopResponsesReady = true;
    } else {
      snoopResponsesReady = CheckSnoopResponses(upCentral, readySnoopResps);
    }

    // Stop traversal if snoop responses are not ready yet
    if (!snoopResponsesReady) {
      // Continue to next transaction if current one stalls due to address/ID hazard or resource limit
      spScan = spNextScan;

      // continue until the CentralFIFO is NULL.
      continue;
    }

    // Decode snoop responses
    bool bIsShared = false, bWasUnique = false, bPassDirty = false, bDataTransfer = false;
    if (!isWriteLineUnique) {
      for (int i = 0; i < this->NUM_PORT; i++) {
        if (i == initMaster)
          continue;
        if ((SNOOP_MASK & (1 << i)) != 0)
          continue; // Mask out snoop master

        UPUD upCR = readySnoopResps[i];
        assert(upCR != NULL);
        int resp = upCR->cpCR->GetResp();
        if (resp & 0b00001)
          bDataTransfer = true;
        if (resp & 0b00100)
          bPassDirty = true;
        if (resp & 0b01000)
          bIsShared = true;
        if (resp & 0b10000)
          bWasUnique = true;
      }
    }

    // Try processing the three coherent actions mutually exclusively:
    // 1. Write to main memory
    if ((isClean && bDataTransfer) || isWrite) {
      if (TryWriteToMemory(upCentral, isClean, isWriteLineUnique, readySnoopResps, nCycle)) {

        // Check if the current transaction is already finished
        if (upCentral->nCounter >= upCentral->nLength) {

          UPUD upPopCentral = this->cpFIFO_Central->Pop(upCentral);
          if (upPopCentral) {
            Delete_UD(upPopCentral, EUD_TYPE_CENTRAL);
          }
        }

        return true;
      }
    }
    // 2. Read the main memory
    else if (!bIsShared && !bWasUnique && !bDataTransfer && !bPassDirty) {
      if (TryReadFromMemory(upCentral, readySnoopResps, nCycle)) {

        // Check if the current transaction is already finished
        if (upCentral->nCounter >= upCentral->nLength) {

          UPUD upPopCentral = this->cpFIFO_Central->Pop(upCentral);
          if (upPopCentral) {
            Delete_UD(upPopCentral, EUD_TYPE_CENTRAL);
          }
        }

        return true;
      }
    }
    // 3. Return response to initiating master
    else {
      if (TryReturnResponseToMaster(upCentral, initMaster, bIsShared, bPassDirty, readySnoopResps, nCycle)) {

        // Check if the current transaction is already finished
        if (upCentral->nCounter >= upCentral->nLength) {

          UPUD upPopCentral = this->cpFIFO_Central->Pop(upCentral);
          if (upPopCentral) {
            Delete_UD(upPopCentral, EUD_TYPE_CENTRAL);
          }
        }

        return true;
      }
    }

    // Continue to next transaction if current one stalls due to address/ID hazard or resource limit
    spScan = spNextScan;
  }

  return false;
}

EResultType CBUS::Do_CR_bwd(int64_t nCycle) {

  // ---- Receives Transactions ---
  // Checking every MASTERs' ports.
  for (int i = 0; i < this->NUM_PORT; i++) {
    // If a packet is present in the receive port, signal acceptance.
    if (this->cpRx_CR[i]->IsBusy() == ERESULT_TYPE_YES) {
      this->cpRx_CR[i]->SetAcceptResult(ERESULT_TYPE_ACCEPT);

#ifdef DEBUG_BUS
      CPCRPkt cpCR = this->cpRx_CR[i]->GetCR();
      printf("[Cycle %3ld: %s.Do_CR_bwd] (%s) handshake cpRx_CR[%d].\n", nCycle, this->cName.c_str(),
             cpCR->GetName().c_str(), i);
#endif
    }
  }

  return (ERESULT_TYPE_SUCCESS);
};

//-------------------------------------------------------
// W ready
//  1. Issuing the W data.
//-------------------------------------------------------
EResultType CBUS::Do_W_snoop_fwd(int64_t nCycle) {

  //  // The Tx_W from MASTER often disable since we assumpt the data followed
  //  the
  //  // commands. Thus, when there are no data transfer from snooped master,
  //  we
  //  // just pop the FIFO and assump the data followed the request. In case
  //  the
  //  // snooped master would like to return data, we can simulate the spacing
  //  // between requests and data. Check if active transaction marked as
  //  // UNDEFINED (waiting for data phase)
  //
  //  // --------------------------------------------------
  //  // 0. Decode the initMaster address.
  //  // --------------------------------------------------
  //  int initMaster = -1;
  //  // bool isUndefined = false;
  //  bool isWrite = false;
  //
  //  CPCentral centralEntry = NULL;
  //
  //  if (this->cpFIFO_Central->IsEmpty() == ERESULT_TYPE_NO) {
  //
  //    // No active transaction or the active transaction does not have AC
  //    packet
  //    // (should not happen but just in case).
  //    if (this->cpFIFO_Central->GetTop()->cpCentral->cpAC == NULL)
  //      return (ERESULT_TYPE_SUCCESS);
  //
  //    UPUD upTop = this->cpFIFO_Central->GetTop();
  //    centralEntry = upTop->cpCentral;
  //    CPAxPkt cpAxTop = centralEntry->cpAx;
  //
  //    // Only Write + CleanUnique + CleanShared + CleanInvalid are able to
  //    write
  //    // to main memory.
  //    int snoopType = centralEntry->cpAC ? centralEntry->cpAC->GetSnoop() :
  //    -1;
  //
  //    isWrite =
  //        ((snoopType == 0b1000 || snoopType == 0b1001 || snoopType ==
  //        0b1011)
  //        &&
  //         (cpAxTop->GetDir() == ETRANS_DIR_TYPE_READ)) ||
  //        (cpAxTop->GetDir() == ETRANS_DIR_TYPE_WRITE);
  //
  //    // isUndefined     = (centralEntry->cpAC->GetDir() ==
  //    // ETRANS_DIR_TYPE_UNDEFINED);
  //
  //    printf("[Cycle %3ld: %s.Do_W_snoop_fwd] Snoop Type: %d, isWrite:
  //    %d.\n",
  //           nCycle, this->cName.c_str(), snoopType, isWrite);
  //    if (!isWrite) {
  //      return (ERESULT_TYPE_SUCCESS); // Isn't the WRITE
  //    }
  //
  //    initMaster = GetPortNum(cpAxTop->GetID());
  //  } else {
  //    printf("[Cycle %3ld: %s.Do_W_snoop_fwd] No active transaction in "
  //           "cpFIFO_Central. Wait for transaction.\n",
  //           nCycle, this->cName.c_str());
  //    return (ERESULT_TYPE_SUCCESS);
  //  }
  //
  //  assert(initMaster >= 0);
  //
  //  // isUndefined indicate that the Tx_AW has been issued but waiting for
  //  data
  //  // phase. In this case, we should not check the snoop response and just
  //  wait
  //  // for the data to come in. if (isWrite && isUndefined) {return
  //  // (ERESULT_TYPE_SUCCESS);}
  //
  //  // --------------------------------------------------
  //  // 1. Check snoop responses.
  //  // --------------------------------------------------
  //  // Ensure all snoop targets have returned CR
  //  int nReadyMaster = 0;
  //  int nExpectedMasters = 0;
  //  for (int for_snoopMaster = 0; for_snoopMaster < this->NUM_PORT;
  //       for_snoopMaster++) {
  //
  //    if (for_snoopMaster == initMaster)
  //      continue;
  //    if ((SNOOP_MASK & (1 << for_snoopMaster)) != 0)
  //      continue; // Mask out snoop master
  //
  //    nExpectedMasters++;
  //
  //    if (this->cpFIFO_SnoopResp[for_snoopMaster]->IsEmpty() ==
  //    ERESULT_TYPE_YES)
  //      continue;
  //
  //    nReadyMaster++;
  //  }
  //
  //  printf("[Cycle %3ld: %s.Do_W_snoop_fwd] Snoop Response: %d/%d masters "
  //         "ready.\n",
  //         nCycle, this->cName.c_str(), nReadyMaster, nExpectedMasters);
  //  if (nReadyMaster < nExpectedMasters) {
  //    nWaitResp += 1;
  //    return (ERESULT_TYPE_SUCCESS);
  //  }
  //
  //  // --------------------------------------------------
  //  // 2. Check if data transfer is needed based on the snoop responses and
  //  wait
  //  // for data if needed.
  //  // --------------------------------------------------
  //  // Since we verified all responses were in,
  //  // we check bDataTransfer from the stored slave responses.
  //  bool bDataTransfer = false;
  //  for (int i = 0; i < this->NUM_PORT; i++) {
  //    if (i == initMaster)
  //      continue;
  //    if (this->cpFIFO_SnoopResp[i]->IsEmpty() == ERESULT_TYPE_NO) {
  //      if ((this->cpFIFO_SnoopResp[i]->GetTop()->cpCR->GetResp() & 0b00001)
  //      ==
  //          0b00001) { // DataTransfer
  //        bDataTransfer = true;
  //        break;
  //      }
  //    }
  //  }
  //
  //  if (bDataTransfer) {
  //    if (this->cpFIFO_SnoopData->IsEmpty() == ERESULT_TYPE_YES) {
  //      printf("[Cycle %3ld: %s.Do_W_snoop_fwd] Data transfer expected but
  //      no
  //      "
  //             "data in cpFIFO_SnoopData. Wait for data.\n",
  //             nCycle, this->cName.c_str());
  //      return (ERESULT_TYPE_SUCCESS); // Wait for data
  //    }
  //  } else if (centralEntry->cpAx->GetDir() != ETRANS_DIR_TYPE_WRITE) {
  //    printf("[Cycle %3ld: %s.Do_W_snoop_fwd] No data transfer needed based
  //    on
  //    "
  //           "snoop responses. Pop tracking.\n",
  //           nCycle, this->cName.c_str());
  //    return (ERESULT_TYPE_SUCCESS); // No transfer data
  //  }
  //
  //  // --------------------------------------------------
  //  // 3. Write data to the main memory
  //  // --------------------------------------------------
  //  if (this->cpTx_W->IsBusy() == ERESULT_TYPE_YES) {
  //    return (ERESULT_TYPE_FAIL);
  //  };
  //
  //  // Issuing the data and pop the FIFOs when data transfer is expected.
  //  // If no data transfer is expected, just pop the FIFOs to finish the
  //  // transaction (Just assume there is no data from snooped masters).
  //  if (bDataTransfer) {
  //
  //    CPWPkt cpW = Copy_CWPkt(this->cpFIFO_SnoopData->GetTop()->cpW);
  //
  //    // Set pkt for write to memory.
  //    this->cpTx_W->PutW(cpW);
  //    // Pop-out the snoop response data.
  //    UPUD upW_tmp = this->cpFIFO_SnoopData->Pop();
  //    if (upW_tmp)
  //      Delete_UD(upW_tmp, EUD_TYPE_W);
  //
  //    if (cpW->IsLast() == ERESULT_TYPE_YES) {
  //      // Data transfer complete, pop tracking FIFOs
  //      for (int i = 0; i < this->NUM_PORT; i++) {
  //
  //        if (i == initMaster)
  //          continue;
  //        if ((SNOOP_MASK & (1 << i)) != 0)
  //          continue;
  //
  //        // Pop the snoop response for this beat.
  //        // For multi-beat transactions, we will pop after each beat is
  //        // transferred.
  //        int nCounter_tmp = this->cpFIFO_SnoopResp[i]->GetTop()->nCounter;
  //        UPUD upTmp = this->cpFIFO_SnoopResp[i]->Pop();
  //        if (upTmp)
  //          Delete_UD(upTmp, EUD_TYPE_CR);
  //
  //        this->cpFIFO_SnoopResp[i]->GetTop()->nCounter = nCounter_tmp + 1;
  //      }
  //
  //      // Pop central FIFO if all data beats have been transferred.
  //      // For multi-beat transactions, we will pop after the last beat is
  //      // transferred (counter >= length).
  //      if ((this->cpFIFO_SnoopResp[0]->GetTop()->nCounter >=
  //           this->cpFIFO_SnoopResp[0]->GetTop()->nLength)) { // FIXME
  //        // if (upTop_central->nCounter >= upTop_central->nLength) {
  //
  //        UPUD upTmpCentral = this->cpFIFO_Central->Pop();
  //        if (upTmpCentral) {
  //          int nID = upTmpCentral->cpCentral->cpAx->GetID();
  //          auto it = std::find(this->m_outstandingMemAWID.begin(),
  //                              this->m_outstandingMemAWID.end(), nID);
  //
  //          if (it != this->m_outstandingMemAWID.end()) {
  //            int index = std::distance(this->m_outstandingMemAWID.begin(),
  //            it); this->m_outstandingMemAWID.erase(it);
  //            this->m_outstandingMemAWAddr.erase(
  //                this->m_outstandingMemAWAddr.begin() + index);
  //          }
  //
  //          Delete_UD(upTmpCentral, EUD_TYPE_CENTRAL);
  //        }
  //
  //      }
  //
  // #ifdef DEBUG_BUS
  //      printf("[Cycle %3ld: %s.Do_W_snoop_fwd] (%s) WLAST put Tx_W. Pop "
  //             "tracking.\n",
  //             nCycle, this->cName.c_str(), cpW->GetName().c_str());
  // #endif
  //
  //    } else {
  //
  // #ifdef DEBUG_BUS
  //      printf("[Cycle %3ld: %s.Do_W_snoop_fwd] (%s) put Tx_W.\n", nCycle,
  //             this->cName.c_str(), cpW->GetName().c_str());
  // #endif
  //    }
  //
  //    return (ERESULT_TYPE_SUCCESS);
  //
  //  } else {
  //    // No data transfer expected (Address-only write phase completed)
  //    for (int i = 0; i < this->NUM_PORT; i++) {
  //
  //      if (i == initMaster)
  //        continue;
  //      if ((SNOOP_MASK & (1 << i)) != 0)
  //        continue;
  //
  //      // Pop the snoop response for this beat.
  //      // For multi-beat transactions, we will pop after each beat is
  //      // transferred.
  //      // Software Hack:
  //      int nCounter_tmp = this->cpFIFO_SnoopResp[i]->GetTop()->nCounter;
  //      nCounter_tmp++;
  //
  //      UPUD upTmp = this->cpFIFO_SnoopResp[i]->Pop();
  //      if (upTmp)
  //        Delete_UD(upTmp, EUD_TYPE_CR);
  //
  //
  //      this->cpFIFO_SnoopResp[i]->GetTop()->nCounter = nCounter_tmp;
  //    }
  //
  //    assert()
  //
  // #ifdef DEBUG_BUS
  //        printf(
  //            "[Cycle %3ld: %s.Do_W_snoop_fwd] (%s) WLAST put Tx_W. Pop "
  //            "tracking.\n",
  //            nCycle, this->cName.c_str(),
  //            this->cpFIFO_Central->GetTop()->cpCentral->cpAx->GetName().c_str());
  // #endif
  //
  //    // Pop central FIFO if all data beats have been transferred.
  //    // For multi-beat transactions, we will pop after the last beat is
  //    // transferred (counter >= length).
  //    printf("[Cycle %3ld: %s.Do_W_snoop_fwd] Counter = %d/%d.\n", nCycle,
  //           this->cName.c_str(),
  //           this->cpFIFO_SnoopResp[0]->GetTop()->nCounter,
  //           this->cpFIFO_SnoopResp[0]->GetTop()->nLength);
  //
  //    if ((this->cpFIFO_SnoopResp[0]->GetTop()->nCounter >=
  //         this->cpFIFO_SnoopResp[0]->GetTop()->nLength)) { // FIXME
  //
  //      // if (upTop_central->nCounter >= upTop_central->nLength) {
  //      UPUD upTmpCentral = this->cpFIFO_Central->Pop();
  //      if (upTmpCentral) {
  //        int nID = upTmpCentral->cpCentral->cpAx->GetID();
  //        auto it = std::find(this->m_outstandingMemAWID.begin(),
  //                            this->m_outstandingMemAWID.end(), nID);
  //
  //        if (it != this->m_outstandingMemAWID.end()) {
  //          int index = std::distance(this->m_outstandingMemAWID.begin(),
  //          it); this->m_outstandingMemAWID.erase(it);
  //          this->m_outstandingMemAWAddr.erase(
  //              this->m_outstandingMemAWAddr.begin() + index);
  //        }
  //
  //        Delete_UD(upTmpCentral, EUD_TYPE_CENTRAL);
  //      }
  //    }
  //
  //    return (ERESULT_TYPE_SUCCESS);
  //  }
  //
  return (ERESULT_TYPE_SUCCESS);
};
#endif

//------------------------------------------------------
// W ready
//------------------------------------------------------
EResultType CBUS::Do_W_bwd(int64_t nCycle) {

  // Check Tx ready
  if (this->cpTx_W->GetAcceptResult() == ERESULT_TYPE_REJECT) {
    return (ERESULT_TYPE_SUCCESS);
  };

  CPWPkt cpW = this->cpTx_W->GetW();

#ifdef DEBUG_BUS
  assert(cpW != NULL);
  assert(this->cpTx_W->IsBusy() == ERESULT_TYPE_YES);
  printf("[Cycle %3ld: %s.Do_W_bwd] (%s) handshake Tx_W.\n", nCycle, this->cName.c_str(), cpW->GetName().c_str());
  // cpW->Display();
  assert(this->cpFIFO_AW->IsEmpty() == ERESULT_TYPE_NO);
#endif

  // Get arbitrated port
  // int nArb = this->cpFIFO_AW->GetTop()->cpAW->GetID() % this->NUM_PORT; //
  // Only when power-of-2 ports
  int AxID = this->cpFIFO_AW->GetTop()->cpAW->GetID();
  int nArb = GetPortNum(AxID);

#ifdef DEBUG
  assert(nArb >= 0);
  assert(nArb < this->NUM_PORT);
#endif

  // Check Rx valid
  if (this->cpRx_W[nArb]->IsBusy() == ERESULT_TYPE_YES) {
    // Set ready
    this->cpRx_W[nArb]->SetAcceptResult(ERESULT_TYPE_ACCEPT);
  };

  // Check WLAST. Pop FIFO_AW
  if (this->cpTx_W->IsPass() == ERESULT_TYPE_YES and cpW->IsLast() == ERESULT_TYPE_YES) {

#ifdef DEBUG
    assert(this->cpFIFO_AW->IsEmpty() == ERESULT_TYPE_NO);
#endif

    UPUD up_new = this->cpFIFO_AW->Pop();
    // this->cpFIFO_AW->CheckFIFO();

    // Maintain
    Delete_UD(up_new, EUD_TYPE_AW);
  };

  return (ERESULT_TYPE_SUCCESS);
};

//------------------------------------------------------
// R Valid
//------------------------------------------------------
EResultType CBUS::Do_R_fwd(int64_t nCycle) {

  // Check remote-Tx valid
  CPRPkt cpR = this->cpRx_R->GetPair()->GetR();
  if (cpR == NULL) {
    return (ERESULT_TYPE_SUCCESS);
  };
  // cpR->CheckPkt();

  // Get destination port
  int nID = cpR->GetID();
  // int nPort = nID % this->NUM_PORT; // Only when power-of-2 FIXME
  int nPort = GetPortNum(nID);

  // Check Tx valid
  if (this->cpTx_R[nPort]->IsBusy() == ERESULT_TYPE_YES) {
    return (ERESULT_TYPE_SUCCESS);
  };

  // Put Rx
  this->cpRx_R->PutR(cpR);

// Debug
#ifdef DEBUG_BUS
  if (cpR->IsLast() == ERESULT_TYPE_YES) {
    printf("[Cycle %3ld: %s.Do_R_fwd] (%s) RID 0x%x RLAST put Rx_R.\n", nCycle, this->cName.c_str(),
           cpR->GetName().c_str(), cpR->GetID());
    // cpR->Display();
  } else {
    printf("[Cycle %3ld: %s.Do_R_fwd] (%s) RID 0x%x put Rx_R.\n", nCycle, this->cName.c_str(), cpR->GetName().c_str(),
           cpR->GetID());
    // cpR->Display();
  };
#endif

  // Decode ID
  CPRPkt cpR_new = Copy_CRPkt(cpR);
  nID = nID >> this->BIT_PORT;
  cpR_new->SetID(nID);

  // Put Tx
  this->cpTx_R[nPort]->PutR(cpR_new);

  // Stat
  this->nR_SI[nPort]++;
  if (cpR_new->IsLast() == ERESULT_TYPE_YES) {
    this->nRTrans[nPort]++;

#ifdef CCI_ON
    auto it = std::find(this->m_outstandingMemARID.begin(), this->m_outstandingMemARID.end(), cpR->GetID());
    if (it != this->m_outstandingMemARID.end()) {
      int index = std::distance(this->m_outstandingMemARID.begin(), it);

      this->m_outstandingMemARID.erase(it);
      this->m_outstandingMemARAddr.erase(this->m_outstandingMemARAddr.begin() + index);

    } else {
      assert(0);
    }
#endif
  }

// Debug
#ifdef DEBUG_BUS
  if (cpR_new->IsLast() == ERESULT_TYPE_YES) {
    printf("[Cycle %3ld: %s.Do_R_fwd] (%s) RID 0x%x RLAST put Tx_R[%d].\n", nCycle, this->cName.c_str(),
           cpR_new->GetName().c_str(), cpR_new->GetID(), nPort);
    // cpR_new->Display();
  } else {
    printf("[Cycle %3ld: %s.Do_R_fwd] (%s) RID 0x%x put Tx_R[%d].\n", nCycle, this->cName.c_str(),
           cpR_new->GetName().c_str(), cpR_new->GetID(), nPort);
    // cpR_new->Display();
  };
#endif

  // Maintain
  delete (cpR_new);
  cpR_new = NULL;

  return (ERESULT_TYPE_SUCCESS);
};

//------------------------------------------------------
// B Valid
//------------------------------------------------------
#ifndef CCI_ON
EResultType CBUS::Do_B_fwd(int64_t nCycle) {

  // Check remote-Tx valid
  CPBPkt cpB = this->cpRx_B->GetPair()->GetB();
  if (cpB == NULL) {
    return (ERESULT_TYPE_SUCCESS);
  };
  // cpB->CheckPkt();

  // Get destination port
  int nID = cpB->GetID();
  // int nPort = nID % this->NUM_PORT;   // Only when power-of-2 ports
  int nPort = GetPortNum(nID);

  // Check Tx valid
  if (this->cpTx_B[nPort]->IsBusy() == ERESULT_TYPE_YES) {
    return (ERESULT_TYPE_SUCCESS);
  };

  // Put Rx
  this->cpRx_B->PutB(cpB);

  // Debug
  // printf("[Cycle %3ld: %s.Do_B_fwd] (%s) BID 0x%x put Rx_B.\n", nCycle,
  // this->cName.c_str(), cpB->GetName().c_str(), cpB->GetID() );
  // cpB->Display();

  // Decode ID
  CPBPkt cpB_new = Copy_CBPkt(cpB);
  nID = nID >> this->BIT_PORT;
  cpB_new->SetID(nID);

  // Put Tx
  this->cpTx_B[nPort]->PutB(cpB_new);

  // Stat
  this->nB_SI[nPort]++;

  // Debug
  // printf("[Cycle %3ld: %s.Do_B_fwd] (%s) BID 0x%x put Tx_B[%d] -
  // IsFinalTrans = %s.\n", nCycle, this->cName.c_str(),
  // cpB_new->GetName().c_str(), cpB->GetID(), nPort,
  // Convert_eResult2string(cpB_new->IsFinalTrans()).c_str());
  // cpB_new->Display();

  // Maintain
  delete (cpB_new);
  cpB_new = NULL;

  return (ERESULT_TYPE_SUCCESS);
};
#else
EResultType CBUS::Do_B_fwd(int64_t nCycle) {

  // Because we have already do the fast-response.
  // Drop all incoming B responses since CCI does not use the B channel for
  // write responses.

  // Check remote-Tx valid
  CPBPkt cpB = this->cpRx_B->GetPair()->GetB();

  if (cpB == NULL) {
    return (ERESULT_TYPE_SUCCESS);
  };

  int nID = cpB->GetID();
  auto itW = std::find(this->m_outstandingMemAWID.begin(), this->m_outstandingMemAWID.end(), nID);

  // Existed in outstanding AR,
  // means this B is for a read transaction that requires data return. We need
  // to forward it to the master.
  if (itW != this->m_outstandingMemAWID.end()) {
    int index = std::distance(this->m_outstandingMemAWID.begin(), itW);
    int nPort = GetPortNum(nID);

    if (this->m_outstandingMemAWIsRead[index]) {

      if (this->cpTx_R[nPort]->IsBusy() == ERESULT_TYPE_YES) {
        return (ERESULT_TYPE_SUCCESS); // Stall
      }

      // Redirect to cpRx_R: construct CRPkt and put it onto the remote transmitter's queue (pair of cpRx_R)
      CPRPkt cpR_new = new CRPkt;
      cpR_new->SetPkt(nID, 0, 1, 0);
      cpR_new->SetName(cpB->GetName());
      cpR_new->SetLast(ERESULT_TYPE_YES);

      this->cpTx_R[nPort]->PutR(cpR_new);

      // Increase the counter.
      this->nRTrans[nPort]++;

      // Erase the m_outstandingMemAWIsRead
      this->m_outstandingMemAWIsRead.erase(this->m_outstandingMemAWIsRead.begin() + index);

      // Erase the m_outstandingMemAWID
      this->m_outstandingMemAWID.erase(itW);
      this->m_outstandingMemAWAddr.erase(this->m_outstandingMemAWAddr.begin() + index);

    } else {
      this->nBTrans[nPort]++;

#ifdef CCI_PROPOSED
      // Phase 2: this is a memory-level write completion. Verify invariant I1 for
      // target lines (no write completes before its page's invalidation does).
      this->Range_ObserveWriteB(this->m_outstandingMemAWAddr[index], nCycle);
#endif

      // Erase the m_outstandingMemAWIsRead
      this->m_outstandingMemAWIsRead.erase(this->m_outstandingMemAWIsRead.begin() + index);

      // Erase the m_outstandingMemAWID
      this->m_outstandingMemAWID.erase(itW);
      this->m_outstandingMemAWAddr.erase(this->m_outstandingMemAWAddr.begin() + index);
    }
  }

  // Put Rx
  this->cpRx_B->PutB(cpB);

#ifdef DEBUG_BUS
  printf("[Cycle %3ld: %s.Do_B_fwd] (%s) BID 0x%x put Rx_B.\n", nCycle, this->cName.c_str(), cpB->GetName().c_str(),
         cpB->GetID());
#endif

  return (ERESULT_TYPE_SUCCESS);
}
#endif

//------------------------------------------------------
// R ready
//------------------------------------------------------
EResultType CBUS::Do_R_bwd(int64_t nCycle) {

  // Check Rx valid
  CPRPkt cpR = this->cpRx_R->GetR();
  if (cpR == NULL) {
    return (ERESULT_TYPE_SUCCESS);
  };

#ifdef DEBUG
  // cpR->CheckPkt();
  assert(this->cpRx_R->IsBusy() == ERESULT_TYPE_YES);
#endif

  // Get destination port
  int nID = cpR->GetID();
  // int nPort = nID % this->NUM_PORT; // Only when power-of-2 ports
  int nPort = GetPortNum(nID);

  // Check Tx ready FIXME FIXME
  EResultType eAcceptResult = this->cpTx_R[nPort]->GetAcceptResult();
  if (eAcceptResult == ERESULT_TYPE_REJECT) {
    return (ERESULT_TYPE_SUCCESS);
  };

#ifdef DEBUG_BUS
  assert(eAcceptResult == ERESULT_TYPE_ACCEPT);
  printf("[Cycle %3ld: %s.Do_R_bwd] (%s) handshake Tx_R[%d].\n", nCycle, this->cName.c_str(),
         this->cpTx_R[nPort]->GetR()->GetName().c_str(), nPort);
#endif

  // Set ready
  this->cpRx_R->SetAcceptResult(ERESULT_TYPE_ACCEPT);

  // Debug
  if (cpR->IsLast() == ERESULT_TYPE_YES) {
#ifdef DEBUG_BUS
    printf("[Cycle %3ld: %s.Do_R_bwd] (%s) RLAST handshake Rx_R.\n", nCycle, this->cName.c_str(),
           cpR->GetName().c_str());
#endif

    // Decrease MO
    this->Decrease_MO_AR();

  }
#ifdef DEBUG_BUS
  else {
    printf("[Cycle %3ld: %s.Do_R_bwd] (%s) handshake Rx_R.\n", nCycle, this->cName.c_str(), cpR->GetName().c_str());
  };
#endif

  // Debug
  // cpR->Display();

  return (ERESULT_TYPE_SUCCESS);
};

//------------------------------------------------------
// B ready
//------------------------------------------------------
#ifndef CCI_ON
EResultType CBUS::Do_B_bwd(int64_t nCycle) {

  // Check Rx valid
  CPBPkt cpB = this->cpRx_B->GetB();

  if (cpB == NULL) {
    return (ERESULT_TYPE_SUCCESS);
  };

#ifdef DEBUG
  // cpB->CheckPkt();
  assert(this->cpRx_B->IsBusy() == ERESULT_TYPE_YES);
#endif

  // Get destination port
  int nID = cpB->GetID();
  // int nPort = nID % this->NUM_PORT; // Only when power-of-2 ports
  int nPort = GetPortNum(nID);

  // Check Tx ready FIXME FIXME When SLV->Do_R_bwd and BUS->Do_R_bwd reverse,
  // function issue
  EResultType eAcceptResult = this->cpTx_B[nPort]->GetAcceptResult();
  if (eAcceptResult == ERESULT_TYPE_REJECT) {
    return (ERESULT_TYPE_SUCCESS);
  };

#ifdef DEBUG
  assert(eAcceptResult == ERESULT_TYPE_ACCEPT);
#endif

  // Set ready
  this->cpRx_B->SetAcceptResult(ERESULT_TYPE_ACCEPT);

// Debug
#ifdef DEBUG_BUS
  printf("[Cycle %3ld: %s.Do_B_bwd] (%s) B handshake Rx_B.\n", nCycle, this->cName.c_str(), cpB->GetName().c_str());
#endif

  // Decrease MO
  this->Decrease_MO_AW();

  // Debug
  // cpB->Display();

  return (ERESULT_TYPE_SUCCESS);
};
#else
EResultType CBUS::Do_B_bwd(int64_t nCycle) {

  // Check Rx valid
  CPBPkt cpB = this->cpRx_B->GetB();

  if (cpB == NULL) {
    return (ERESULT_TYPE_SUCCESS);
  };

#ifdef DEBUG
  // cpB->CheckPkt();
  assert(this->cpRx_B->IsBusy() == ERESULT_TYPE_YES);
#endif

  // Set ready
  this->cpRx_B->SetAcceptResult(ERESULT_TYPE_ACCEPT);

// Debug
#ifdef DEBUG_BUS
  printf("[Cycle %3ld: %s.Do_B_bwd] (%s) B handshake Rx_B.\n", nCycle, this->cName.c_str(), cpB->GetName().c_str());
#endif

  // Decrease MO
  this->Decrease_MO_AW();

  return (ERESULT_TYPE_SUCCESS);
};
#endif

// Debug
EResultType CBUS::CheckLink() {

  assert(this->cpTx_AR != NULL);
  assert(this->cpTx_AW != NULL);
  assert(this->cpTx_W != NULL);
  assert(this->cpRx_R != NULL);
  assert(this->cpRx_B != NULL);

#ifdef CCI_ON
  for (int i = 0; i < this->NUM_PORT; i++) {
    assert(this->cpTx_AC[i] != NULL);
    assert(this->cpRx_CR[i] != NULL);
    assert(this->cpRx_CD[i] != NULL);
  }
#endif

  assert(this->cpTx_AR->GetPair() != NULL);
  assert(this->cpTx_AW->GetPair() != NULL);
  assert(this->cpTx_W->GetPair() != NULL);
  assert(this->cpRx_R->GetPair() != NULL);
  assert(this->cpRx_B->GetPair() != NULL);

#ifdef CCI_ON
  for (int i = 0; i < this->NUM_PORT; i++) {
    assert(this->cpTx_AC[i]->GetPair() != NULL);
    assert(this->cpRx_CR[i]->GetPair() != NULL);
    assert(this->cpRx_CD[i]->GetPair() != NULL);
  }
#endif

  assert(this->cpTx_AR->GetTRxType() != this->cpTx_AR->GetPair()->GetTRxType());
  assert(this->cpTx_AW->GetTRxType() != this->cpTx_AW->GetPair()->GetTRxType());
  assert(this->cpTx_W->GetTRxType() != this->cpTx_W->GetPair()->GetTRxType());
  assert(this->cpRx_R->GetTRxType() != this->cpRx_R->GetPair()->GetTRxType());
  assert(this->cpRx_B->GetTRxType() != this->cpRx_B->GetPair()->GetTRxType());

#ifdef CCI_ON
  for (int i = 0; i < this->NUM_PORT; i++) {
    assert(this->cpTx_AC[i]->GetTRxType() != this->cpTx_AC[i]->GetPair()->GetTRxType());
    assert(this->cpRx_CR[i]->GetTRxType() != this->cpRx_CR[i]->GetPair()->GetTRxType());
    assert(this->cpRx_CD[i]->GetTRxType() != this->cpRx_CD[i]->GetPair()->GetTRxType());
  }
#endif

  assert(this->cpTx_AR->GetPktType() == this->cpTx_AR->GetPair()->GetPktType());
  assert(this->cpTx_AW->GetPktType() == this->cpTx_AW->GetPair()->GetPktType());
  assert(this->cpTx_W->GetPktType() == this->cpTx_W->GetPair()->GetPktType());
  assert(this->cpRx_R->GetPktType() == this->cpRx_R->GetPair()->GetPktType());
  assert(this->cpRx_B->GetPktType() == this->cpRx_B->GetPair()->GetPktType());

#ifdef CCI_ON
  for (int i = 0; i < this->NUM_PORT; i++) {
    assert(this->cpTx_AC[i]->GetPktType() == this->cpTx_AC[i]->GetPair()->GetPktType());
    assert(this->cpRx_CR[i]->GetPktType() == this->cpRx_CR[i]->GetPair()->GetPktType());
    assert(this->cpRx_CD[i]->GetPktType() == this->cpRx_CD[i]->GetPair()->GetPktType());
  }
#endif

  assert(this->cpTx_AR->GetPair()->GetPair() == this->cpTx_AR);
  assert(this->cpTx_AW->GetPair()->GetPair() == this->cpTx_AW);
  assert(this->cpTx_W->GetPair()->GetPair() == this->cpTx_W);
  assert(this->cpRx_R->GetPair()->GetPair() == this->cpRx_R);
  assert(this->cpRx_B->GetPair()->GetPair() == this->cpRx_B);

#ifdef CCI_ON
  for (int i = 0; i < this->NUM_PORT; i++) {
    assert(this->cpTx_AC[i]->GetPair()->GetPair() == this->cpTx_AC[i]);
    assert(this->cpRx_CR[i]->GetPair()->GetPair() == this->cpRx_CR[i]);
    assert(this->cpRx_CD[i]->GetPair()->GetPair() == this->cpRx_CD[i]);
  }
#endif

  return (ERESULT_TYPE_SUCCESS);
};

// Increase AR MO count
EResultType CBUS::Increase_MO_AR() {

  this->nMO_AR++;

#ifdef DEBUG
  assert(this->nMO_AR >= 0);
  assert(this->nMO_AR <= MAX_MO_COUNT);
#endif

  return (ERESULT_TYPE_SUCCESS);
};

// Decrease AR MO count
EResultType CBUS::Decrease_MO_AR() {

  this->nMO_AR--;

#ifdef DEBUG
  assert(this->nMO_AR >= 0);
  assert(this->nMO_AR <= MAX_MO_COUNT);
#endif

  return (ERESULT_TYPE_SUCCESS);
};

// Increase AW MO count
EResultType CBUS::Increase_MO_AW() {

  this->nMO_AW++;

#ifdef DEBUG
  assert(this->nMO_AW >= 0);
  assert(this->nMO_AW <= MAX_MO_COUNT);
#endif

  return (ERESULT_TYPE_SUCCESS);
};

// Decrease AW MO count
EResultType CBUS::Decrease_MO_AW() {

  this->nMO_AW--;

#ifdef DEBUG
  assert(this->nMO_AW >= 0);
  assert(this->nMO_AW <= MAX_MO_COUNT);
#endif

  return (ERESULT_TYPE_SUCCESS);
};

// Get AR MO count
int CBUS::GetMO_AR() {

#ifdef DEBUG
  assert(this->nMO_AR >= 0);
  assert(this->nMO_AR <= MAX_MO_COUNT);
#endif

  return (this->nMO_AR);
};

// Get AW MO count
int CBUS::GetMO_AW() {

#ifdef DEBUG
  assert(this->nMO_AW >= 0);
  assert(this->nMO_AW <= MAX_MO_COUNT);
#endif

  return (this->nMO_AW);
};

int CBUS::GetPortNum(int nID) {

  int nPort = -1;

  if (this->BIT_PORT == 1)
    nPort = nID & 0x1; // 1-bit.  Upto 2 ports
  else if (this->BIT_PORT == 2)
    nPort = nID & 0x3; // 2-bits. Upto 4 ports
  else if (this->BIT_PORT == 3)
    nPort = nID & 0x7;
  else if (this->BIT_PORT == 4)
    nPort = nID & 0xF;
  else
    assert(0);

#ifdef DEBUG
  assert(nPort >= 0);
#endif

  return (nPort);
};

EResultType CBUS::Set_nR_GEN_NUM(int nPort, int nNum) {
  this->nR_GEN_NUM[nPort] = nNum;
  return (ERESULT_TYPE_SUCCESS);
};

EResultType CBUS::Set_nB_GEN_NUM(int nPort, int nNum) {
  this->nB_GEN_NUM[nPort] = nNum;
  return (ERESULT_TYPE_SUCCESS);
};

int CBUS::Get_nRTrans(int nPort) { return (this->nRTrans[nPort]); };

int CBUS::Get_nBTrans(int nPort) { return (this->nBTrans[nPort]); };

int CBUS::Get_nR_GEN_NUM(int nPort) { return (this->nR_GEN_NUM[nPort]); };

int CBUS::Get_nB_GEN_NUM(int nPort) { return (this->nB_GEN_NUM[nPort]); };

uint32_t CBUS::GetSnoopIssued() { return (this->nSnoopIssued); };

uint32_t CBUS::GetSnoopResp() { return (this->nSnoopResp); };

// Update state
EResultType CBUS::UpdateState(int64_t nCycle) {

  // MI
  this->cpTx_AR->UpdateState();
  this->cpTx_AW->UpdateState();
  this->cpTx_W->UpdateState();
  this->cpRx_R->UpdateState();
  this->cpRx_B->UpdateState();

#ifdef CCI_ON

  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpTx_AC[i]->UpdateState();
  }
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_CR[i]->UpdateState();
  }
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_CD[i]->UpdateState();
  }

#endif

  // SI
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_AR[i]->UpdateState();
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpRx_AW[i]->UpdateState();
  };
  // for (int i=0; i<this->NUM_PORT; i++) { this->cpRx_W[i] ->UpdateState();
  // };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpTx_R[i]->UpdateState();
  };
  for (int i = 0; i < this->NUM_PORT; i++) {
    this->cpTx_B[i]->UpdateState();
  };

  // FIFO
  this->cpFIFO_AW->UpdateState();
  this->cpFIFO_SnoopData->UpdateState();
  this->cpFIFO_Central->UpdateState();

  for (int i = 0; i < NUM_PORT; i++) {
    this->cpFIFO_MstAW[i]->UpdateState();
    this->cpFIFO_MstAR[i]->UpdateState();
    this->cpFIFO_SnoopReq[i]->UpdateState();
    this->cpFIFO_SnoopResp[i]->UpdateState();
    this->cpFIFO_SnoopReqMst[i]->UpdateState();
  }

  return (ERESULT_TYPE_SUCCESS);
};

// Stat
#ifdef CCI_PROPOSED
// --- Proposed range tracking ---------------------------------------------------
//   Phase 0-1: range entry + line_mask accounting.
//   Phase 2   : early-invalidation FSM. When a page entry is allocated it enters
//               INVALIDATING and MakeInvalid is modeled for every target line;
//               invalidation is deemed complete (write_release) at
//               alloc_cycle + CCI_SNOOP_LATENCY, at which point the entry moves to
//               TRACKING. Invariant I1 is verified at the memory-level write
//               completion (Range_ObserveWriteB): no target-line write may
//               complete before its page's write_release. This is an observation
//               model: it does not alter timing (write gating for other masters
//               is introduced in Phase 4).
void CBUS::Range_SetParams(int nMemcpyPort, int nCachelinePerAW) {
  this->m_rangeMemcpyPort = nMemcpyPort;
  this->m_rangeLinesPerAW = (nCachelinePerAW > 0) ? nCachelinePerAW : 1;
  this->m_rangeSnoopLatency = CCI_SNOOP_LATENCY;
}

// Fix-3: declare the contiguous destination region so each page's full target
// mask is known at allocation (DONE fires only at true completion).
void CBUS::Range_SetRegion(int64_t dstBaseAddr, uint64_t totalLines) {
  this->m_rangeDstBasePage   = cci_page_of(dstBaseAddr);
  this->m_rangeDstBaseLine   = cci_line_of(dstBaseAddr); // offset within the base page
  this->m_rangeTotalLines    = totalLines;
  this->m_rangeExpectedPages =
      (totalLines + (uint64_t)this->m_rangeDstBaseLine + CCI_LINES_PER_PAGE - 1) / CCI_LINES_PER_PAGE;
}

// Configure the modeled other master whose reads are gated by the live range
// state. coarse=1 blocks the whole in-flight page (baseline); coarse=0 releases
// per line as its write completes (proposed).
void CBUS::Range_SetOtherMaster(int otherPort, int enable) {
  this->m_rangeOtherPort  = otherPort;
  this->m_rangeGateEnable = enable;
  // Reserve up front: the base sim has a latent heap fragility, and vector
  // reallocation churn during the run can trip it. Reserve an upper bound
  // (one sample per target line is more than enough) so no realloc occurs.
  if (enable) {
    size_t cap = (size_t)this->m_rangeTotalLines + 16;
    if (!cap) cap = 65536;
    this->m_otherWaitSamples.reserve(cap);
    this->m_otherReadLog.reserve(cap);
  }
}

// Policy-independent measurement: log each admitted other-master read (issue
// cycle, page, line) WITHOUT gating it. The read proceeds normally, so its issue
// schedule and the resulting contention are identical regardless of release
// policy; the per-read wait under proposed and coarse is derived at end-of-run
// from the recorded completion timeline (see Range_PrintVerify).
void CBUS::Range_ObserveOtherRead(int nPort, int64_t nAddr, int64_t nCycle) {
  if (!this->m_rangeGateEnable)        return;
  if (nPort != this->m_rangeOtherPort) return;
  this->m_otherReadsAdmitted++;
  OtherReadRec r;
  r.issue = nCycle;
  r.page  = cci_page_of(nAddr);
  r.line  = cci_line_of(nAddr);
  this->m_otherReadLog.push_back(r);
}

// Finalize the currently-valid entry: its line_mask is complete, so account the
// target lines, model MakeInvalid issuance, and record the INVALIDATING->TRACKING
// transition. Leaves the entry reset (invalid) for reuse.
void CBUS::Range_FinalizeEntry() {
  if (!this->m_range.valid) return;
  uint64_t lines = cci_popcount64(this->m_range.line_mask);
  this->m_rangeTargetLineTotal   += lines;
  this->m_rangeMakeInvalidIssued += lines; // one MakeInvalid per target line
  this->m_rangeTrackingCount++;            // INVALIDATING -> TRACKING (write_release)
  this->m_range.state = CCI_RANGE_TRACKING;
  this->m_range.reset();
}

void CBUS::Range_ObserveAW(int nPort, int64_t nAddr, int64_t nCycle) {
  if (nPort != this->m_rangeMemcpyPort) return; // only memcpy destination writes

  uint64_t page      = cci_page_of(nAddr);
  int      startline = cci_line_of(nAddr);
  uint64_t bits      = cci_lines_mask(startline, this->m_rangeLinesPerAW);

  bool allocate = false;
  if (!this->m_range.valid) {
    allocate = true;
    if (this->m_rangePeakOccupancy < 1) this->m_rangePeakOccupancy = 1;
  } else if (this->m_range.base_page_addr != page) {
    // Page transition: finalize current entry, then reuse it for the new page.
    if (page < this->m_range.base_page_addr) this->m_rangePageRevisit++;
    this->Range_FinalizeEntry();
    allocate = true;
  }

  if (allocate) {
    // Allocate entry and enter INVALIDATING; invalidation completes (write_release)
    // after the snoop latency. Model MakeInvalid issuance at finalize.
    this->m_range.reset();
    this->m_range.valid          = true;
    this->m_range.state          = CCI_RANGE_INVALIDATING;
    this->m_range.base_page_addr = page;
    this->m_range.source_id      = nPort;
    this->m_rangeAllocCount++;
    this->m_rangeInvalidatingCount++;
    CciRangeTimeline tl;
    tl.init(nCycle, nCycle + this->m_rangeSnoopLatency);
    // Fix-3: set the page's final target up front (0 => region unknown, fall
    // back to incremental accumulation below).
    tl.line_mask = cci_page_full_mask(page, this->m_rangeDstBasePage,
                                      this->m_rangeDstBaseLine, this->m_rangeTotalLines);
    this->m_rangeTimeline[page] = tl;
  }

  if (this->m_range.line_mask & bits) this->m_rangeDoubleTarget++;
  this->m_range.line_mask |= bits;
  CciRangeTimeline &tlref = this->m_rangeTimeline[page];
  tlref.line_mask |= bits;
  // Record each targeted line's write-ISSUE (AW) cycle so the line-granular
  // tracker occupancy counts a line as outstanding from its own AW (not from the
  // page's first AW). This avoids overstating the line-tracker peak for n<64.
  for (int li = startline;
       li < startline + this->m_rangeLinesPerAW && li < CCI_LINES_PER_PAGE; li++) {
    if (tlref.aw_cycle[li] < 0) tlref.aw_cycle[li] = nCycle;
  }

  // Phase 3: mirror the target line_mask into a per-page live entry that persists
  // until all its writes complete (DONE). Writes complete long after this AW, so
  // DONE tracking cannot use the single reused Phase 1-2 entry.
  auto lit = this->m_rangeLive.find(page);
  if (lit == this->m_rangeLive.end()) {
    CciRangeEntry e;
    e.reset();
    e.valid          = true;
    e.state          = CCI_RANGE_TRACKING;
    e.base_page_addr = page;
    e.source_id      = nPort;
    // Fix-3: full target up front so DONE fires only at true completion (0 =>
    // region unknown, fall back to incremental accumulation below).
    e.line_mask      = cci_page_full_mask(page, this->m_rangeDstBasePage,
                                          this->m_rangeDstBaseLine, this->m_rangeTotalLines);
    lit = this->m_rangeLive.emplace(page, e).first;
    if (this->m_rangeLive.size() > this->m_rangeLivePeak)
      this->m_rangeLivePeak = this->m_rangeLive.size();
  }
  lit->second.line_mask |= bits;
}

// Phase 2 invariant I1: a target-line write must not complete before that page's
// invalidation completes (write_release). Phase 3: set the line's done_mask bit
// and transition the page entry to DONE when line_mask is fully covered.
// Called at the memory-level write B (exact line address recovered by ID).
void CBUS::Range_ObserveWriteB(int64_t nAddr, int64_t nCycle) {
  uint64_t page = cci_page_of(nAddr);
  auto it = this->m_rangeTimeline.find(page);
  if (it == this->m_rangeTimeline.end()) return; // not a tracked target page
  CciRangeTimeline &tl = it->second;
  this->m_rangeWriteBObserved++;
  if (nCycle < tl.write_release) this->m_rangeI1Violations++; // Phase 2 I1

  // Phase 3: done_mask update.
  int      line = cci_line_of(nAddr);
  uint64_t bit  = cci_line_bit(line);
  auto lit = this->m_rangeLive.find(page);
  if (lit == this->m_rangeLive.end()) {
    // Page already reached DONE: an extra target-line completion is an anomaly.
    this->m_rangeDonePremature++;
    return;
  }
  CciRangeEntry &e = lit->second;
  if (!(e.line_mask & bit)) {          // I2: done_mask must be a subset of line_mask
    this->m_rangeI2Violations++;
    return;
  }
  if (!(e.done_mask & bit)) {
    this->m_rangeDoneBitsSet++;        // count each line once
    if (tl.done_cycle[line] < 0) tl.done_cycle[line] = nCycle; // Phase 4: line release
  }
  e.done_mask |= bit;
  if ((e.line_mask & ~e.done_mask) == 0) { // I4: DONE <=> all target lines done
    e.state = CCI_RANGE_DONE;
    if (tl.page_done_cycle < 0) {          // Fix-2: count each page's DONE once
      this->m_rangeDoneEntries++;
      tl.page_done_cycle = nCycle;         // page-coarse release (baseline)
    }
    this->m_rangeLive.erase(lit);
  }
}

void CBUS::Range_Finalize() {
  this->Range_FinalizeEntry();
}

// Number of modeled other-master probes per target page (per-page small & uniform).
// Overridable at compile time; swept in Phase 6.
#ifndef OTHER_PROBES_PER_PAGE
#define OTHER_PROBES_PER_PAGE 4
#endif

// Phase 4: RTL hazard formula evaluated on the recorded timeline at cycle T.
//   probe_hazard = valid & (probe_source != source_id) & page_match
//                  & line_mask[idx] & ~done_mask[idx]
// "valid" holds from page copy start until the page reaches DONE; ~done_mask[idx]
// at T means the line's write has not completed by T (progressive release).
bool CBUS::Range_ProbeHazard(uint64_t page, int line, int probe_source, int64_t T) const {
  auto it = this->m_rangeTimeline.find(page);
  if (it == this->m_rangeTimeline.end()) return false;      // page_match & valid
  const CciRangeTimeline &tl = it->second;
  bool valid_at_T   = (T >= tl.start_cycle) &&
                      (tl.page_done_cycle < 0 || T < tl.page_done_cycle);
  bool diff_source  = (probe_source != this->m_rangeMemcpyPort);
  bool line_target  = (tl.line_mask & cci_line_bit(line)) != 0;
  bool line_done_T  = (tl.done_cycle[line] >= 0 && T >= tl.done_cycle[line]);
  return valid_at_T && diff_source && line_target && !line_done_T;
}

// Phase 4: evaluate a deterministic other-master probe stream against the recorded
// timeline and compare page-coarse (baseline) vs line-progressive (proposed)
// release. Non-perturbing: the memcpy simulation is unchanged; this is pure
// post-hoc analysis over the observed range state.
void CBUS::Range_EvaluateProbes() {
  const int  probesPerPage = OTHER_PROBES_PER_PAGE;
  const int  probe_source  = (this->m_rangeMemcpyPort == 0) ? 1 : 0; // idle other master
  const uint64_t seed      = (uint64_t)SEED_INIT;

  // Reserve once: the base simulator has latent heap fragility that repeated
  // vector reallocation can trip, so avoid incremental growth here.
  size_t cap = this->m_rangeTimeline.size() * (size_t)probesPerPage;
  this->m_probeBaseStalls.reserve(cap);
  this->m_probePropStalls.reserve(cap);
  this->m_probeHazardFlag.reserve(cap);

  for (const auto &kv : this->m_rangeTimeline) {
    uint64_t page = kv.first;
    const CciRangeTimeline &tl = kv.second;
    if (tl.page_done_cycle < 0 || tl.page_done_cycle <= tl.start_cycle) continue;
    int64_t span = tl.page_done_cycle - tl.start_cycle;

    for (int k = 0; k < probesPerPage; k++) {
      // Uniform interior arrival within [start, page_done).
      int64_t T = tl.start_cycle + (int64_t)((k + 1) * span / (probesPerPage + 1));
      // Deterministic pseudo-random target line (reproducible under fixed SEED).
      uint64_t h = (page * 2654435761ull) + (uint64_t)(k * 40503) + seed;
      h ^= (h >> 13); h *= 0x9E3779B97F4A7C15ull; h ^= (h >> 7);
      int line = (int)(h % CCI_LINES_PER_PAGE);

      bool hz = this->Range_ProbeHazard(page, line, probe_source, T);
      // proposed (line-progressive): wait only until this line completes.
      int64_t propStall = hz ? (tl.done_cycle[line] - T) : 0;
      if (propStall < 0) propStall = 0;
      // baseline (page-coarse): any target-page access blocks until page DONE.
      bool blocked = (T >= tl.start_cycle) && (T < tl.page_done_cycle) &&
                     ((tl.line_mask & cci_line_bit(line)) != 0);
      int64_t baseStall = blocked ? (tl.page_done_cycle - T) : 0;

      // I3 consistency: hazard <=> the progressive policy imposes a stall.
      if ((hz && propStall <= 0) || (!hz && propStall != 0)) this->m_probeI3Violations++;

      this->m_probeTotal++;
      if (hz) this->m_probeConflict++;
      else if (baseStall > 0) this->m_probePassThrough++; // done line: proposed passes, baseline blocks
      this->m_probeBaseStallSum += (uint64_t)baseStall;
      this->m_probePropStallSum += (uint64_t)propStall;
      if (baseStall > this->m_probeBaseStallMax) this->m_probeBaseStallMax = baseStall;
      if (propStall > this->m_probePropStallMax) this->m_probePropStallMax = propStall;
      // Phase 5: keep per-probe samples for tail statistics.
      this->m_probeBaseStalls.push_back(baseStall);
      this->m_probePropStalls.push_back(propStall);
      this->m_probeHazardFlag.push_back(hz ? 1 : 0);
    }
  }
}

// Phase 5: peak concurrent in-flight target lines. A conventional line-granular
// tracker allocates one entry per outstanding line (from page copy start until
// that line's write completes); the proposed range tracker uses one entry per
// page. Event sweep over the recorded timeline gives the line-tracker peak.
// Fix-1: peak concurrent in-flight range entries (one per page), computed from
// the persistent timeline intervals [start_cycle, page_done_cycle] rather than
// the erase-based live map. This is the correct occupancy denominator.
int64_t CBUS::Range_RangeEntryPeak() const {
  std::vector<std::pair<int64_t, int> > ev;
  ev.reserve(this->m_rangeTimeline.size() * 2);
  for (const auto &kv : this->m_rangeTimeline) {
    const CciRangeTimeline &tl = kv.second;
    int64_t d = (tl.page_done_cycle >= 0) ? tl.page_done_cycle : tl.start_cycle;
    ev.push_back(std::make_pair(tl.start_cycle, +1));
    ev.push_back(std::make_pair(d, -1));
  }
  std::sort(ev.begin(), ev.end(), [](const std::pair<int64_t,int> &a, const std::pair<int64_t,int> &b) {
    if (a.first != b.first) return a.first < b.first;
    return a.second < b.second; // completions before allocations at same cycle
  });
  int64_t cur = 0, peak = 0;
  for (const auto &e : ev) { cur += e.second; if (cur > peak) peak = cur; }
  return peak;
}

int64_t CBUS::Range_LineTrackerPeak() const {
  std::vector<std::pair<int64_t, int> > ev; // (cycle, delta)
  ev.reserve(this->m_rangeTimeline.size() * (size_t)CCI_LINES_PER_PAGE * 2); // avoid realloc churn
  for (const auto &kv : this->m_rangeTimeline) {
    const CciRangeTimeline &tl = kv.second;
    for (int i = 0; i < CCI_LINES_PER_PAGE; i++) {
      if (!(tl.line_mask & cci_line_bit(i))) continue;
      // Outstanding from the line's own AW (write issue) to its completion.
      int64_t a = (tl.aw_cycle[i] >= 0) ? tl.aw_cycle[i] : tl.start_cycle;
      int64_t d = (tl.done_cycle[i] >= 0) ? tl.done_cycle[i] : tl.page_done_cycle;
      if (d < a) d = a; // safety (a line cannot complete before it is issued)
      ev.push_back(std::make_pair(a, +1)); // line becomes outstanding at its AW
      ev.push_back(std::make_pair(d, -1)); // line completes
    }
  }
  // Process completions (-1) before allocations (+1) at the same cycle for a
  // conservative (non-inflated) peak.
  std::sort(ev.begin(), ev.end(), [](const std::pair<int64_t,int> &a, const std::pair<int64_t,int> &b) {
    if (a.first != b.first) return a.first < b.first;
    return a.second < b.second;
  });
  int64_t cur = 0, peak = 0;
  for (const auto &e : ev) { cur += e.second; if (cur > peak) peak = cur; }
  return peak;
}

// Phase 5: percentile (0..100) of a sample vector via sort (copy).
static int64_t cci_percentile(std::vector<int64_t> v, double p) {
  if (v.empty()) return 0;
  std::sort(v.begin(), v.end());
  size_t idx = (size_t)((p / 100.0) * (v.size() - 1) + 0.5);
  if (idx >= v.size()) idx = v.size() - 1;
  return v[idx];
}

void CBUS::Range_PrintVerify() {
  this->Range_Finalize();
  printf("\n\t [RANGE-VERIFY] memcpy port                    : %d\n", this->m_rangeMemcpyPort);
  printf("\t [RANGE-VERIFY] lines per AW (nCACHELINE)      : %d\n", this->m_rangeLinesPerAW);
  printf("\t [RANGE-VERIFY] entries allocated (== pages)   : %lu\n", (unsigned long)this->m_rangeAllocCount);
  printf("\t [RANGE-VERIFY] target lines total (==GEN)     : %lu\n", (unsigned long)this->m_rangeTargetLineTotal);
  printf("\t [RANGE-VERIFY] peak occupancy (single entry)  : %d\n", this->m_rangePeakOccupancy);
  printf("\t [RANGE-VERIFY] page revisit anomalies (==0)   : %lu\n", (unsigned long)this->m_rangePageRevisit);
  printf("\t [RANGE-VERIFY] double-target anomalies (==0)  : %lu\n", (unsigned long)this->m_rangeDoubleTarget);
  // Phase 2: early invalidation + ordering.
  printf("\t [RANGE-VERIFY] snoop latency (write_release)  : %d\n", this->m_rangeSnoopLatency);
  printf("\t [RANGE-VERIFY] MakeInvalid issued (==GEN)     : %lu\n", (unsigned long)this->m_rangeMakeInvalidIssued);
  printf("\t [RANGE-VERIFY] INVALIDATING transitions       : %lu\n", (unsigned long)this->m_rangeInvalidatingCount);
  printf("\t [RANGE-VERIFY] TRACKING transitions (==pages) : %lu\n", (unsigned long)this->m_rangeTrackingCount);
  printf("\t [RANGE-VERIFY] target-line write B observed   : %lu\n", (unsigned long)this->m_rangeWriteBObserved);
  printf("\t [RANGE-VERIFY] I1 info (write<write_release)     : %lu  (informational: write_release=first_AW+s is NOT enforced in this observation model; wait metrics use actual done_cycle)\n", (unsigned long)this->m_rangeI1Violations);
  // Phase 3: done_mask update + DONE transition.
  printf("\t [RANGE-VERIFY] done bits set (==GEN)          : %lu\n", (unsigned long)this->m_rangeDoneBitsSet);
  printf("\t [RANGE-VERIFY] pages reaching DONE (==pages)  : %lu\n", (unsigned long)this->m_rangeDoneEntries);
  printf("\t [RANGE-VERIFY] peak live range entries        : %lu\n", (unsigned long)this->m_rangeLivePeak);
  printf("\t [RANGE-VERIFY] live entries at end (==0)       : %lu\n", (unsigned long)this->m_rangeLive.size());
  printf("\t [RANGE-VERIFY] I2 violations (done!⊆line)==0  : %lu\n", (unsigned long)this->m_rangeI2Violations);
  printf("\t [RANGE-VERIFY] post-DONE extra write (==0)    : %lu\n\n", (unsigned long)this->m_rangeDonePremature);

  // [RANGE-TL] per-page timeline dump (SV cosim 대조용). start_cycle 오름차순 앞 3페이지.
  {
    std::vector<std::pair<int64_t,uint64_t>> order; // (start_cycle, page)
    for (auto &kv : this->m_rangeTimeline)
      order.push_back(std::make_pair(kv.second.start_cycle, kv.first));
    std::sort(order.begin(), order.end());
    int shown = 0;
    for (auto &pr : order) {
      if (shown++ >= 3) break;
      CciRangeTimeline &tl = this->m_rangeTimeline[pr.second];
      printf("\t [RANGE-TL] page=%lu start=%ld write_release=%ld page_done=%ld lines=%d snoop_s=%d\n",
             (unsigned long)pr.second, (long)tl.start_cycle, (long)tl.write_release,
             (long)tl.page_done_cycle, __builtin_popcountll(tl.line_mask), this->m_rangeSnoopLatency);
      // 라인별 AW/done 사이클 (대상 라인만)
      for (int li = 0; li < CCI_LINES_PER_PAGE; li++) {
        if (tl.line_mask & (1ULL << li))
          printf("\t [RANGE-TL]   line=%d aw=%ld done=%ld\n",
                 li, (long)tl.aw_cycle[li], (long)tl.done_cycle[li]);
      }
    }
  }

  // Fix-4: promote the "== expected" equalities to explicit PASS/FAIL checks so
  // a discrepancy (e.g. DONE count != pages) fails loudly instead of hiding in a
  // printed number. Only meaningful when the region is known.
  if (this->m_rangeTotalLines > 0) {
    unsigned long exp = (unsigned long)this->m_rangeExpectedPages;
    unsigned long gen = (unsigned long)this->m_rangeTotalLines;
    struct { const char *n; unsigned long got, want; } chk[] = {
      {"alloc==pages",     (unsigned long)this->m_rangeAllocCount,      exp},
      {"DONE==pages",      (unsigned long)this->m_rangeDoneEntries,     exp},
      {"trackTrans==pages",(unsigned long)this->m_rangeTrackingCount,   exp},
      {"doneBits==GEN",    (unsigned long)this->m_rangeDoneBitsSet,     gen},
      {"targetLines==GEN", (unsigned long)this->m_rangeTargetLineTotal, gen},
      {"makeInval==GEN",   (unsigned long)this->m_rangeMakeInvalidIssued, gen},
      {"liveAtEnd==0",     (unsigned long)this->m_rangeLive.size(),     0UL},
      // I1 (write before modeled write_release) is INFORMATIONAL, not a failure:
      // the observation model intentionally does NOT gate copy writes (to keep
      // copy timing / non-regression), so at large snoop latency s the modeled
      // invalidation window (start+s) can exceed the observed write onset. The
      // other-master latency metric uses actual completion (done_cycle), not
      // write_release, so it is unaffected. Printed above as [RANGE-VERIFY] I1.
      {"I2==0",            (unsigned long)this->m_rangeI2Violations,    0UL},
      {"I4premature==0",   (unsigned long)this->m_rangeDonePremature,   0UL},
    };
    for (size_t i = 0; i < sizeof(chk)/sizeof(chk[0]); i++) {
      bool ok = (chk[i].got == chk[i].want);
      if (!ok) this->m_rangeVerifyFail++;
      printf("\t [RANGE-CHECK] %-20s %s (got %lu want %lu)\n",
             chk[i].n, ok ? "PASS" : "FAIL", chk[i].got, chk[i].want);
    }
    printf("\t [RANGE-CHECK] TOTAL FAILURES (==0)          : %lu\n\n",
           (unsigned long)this->m_rangeVerifyFail);
  }

#ifdef CCI_SYNTH_PROBE
  // (LEGACY, default OFF) Analytical probe model: post-hoc hazard evaluation over
  // a synthetic uniform probe stream. Superseded by the real other-master gate
  // ([OTHERMASTER-VERIFY] below). Kept behind -DCCI_SYNTH_PROBE for cross-check.
  this->Range_EvaluateProbes();
  double baseAvg = this->m_probeTotal ? (double)this->m_probeBaseStallSum / this->m_probeTotal : 0.0;
  double propAvg = this->m_probeTotal ? (double)this->m_probePropStallSum / this->m_probeTotal : 0.0;
  double reduction = this->m_probeBaseStallSum
                     ? 100.0 * (1.0 - (double)this->m_probePropStallSum / this->m_probeBaseStallSum)
                     : 0.0;
  printf("\t [PROPOSED-VERIFY] probes per page              : %d\n", OTHER_PROBES_PER_PAGE);
  printf("\t [PROPOSED-VERIFY] probes evaluated             : %lu\n", (unsigned long)this->m_probeTotal);
  printf("\t [PROPOSED-VERIFY] conflict probes (hazard=1)   : %lu\n", (unsigned long)this->m_probeConflict);
  printf("\t [PROPOSED-VERIFY] pass-through (done line)     : %lu\n", (unsigned long)this->m_probePassThrough);
  printf("\t [PROPOSED-VERIFY] baseline stall avg / max     : %.2f / %ld\n", baseAvg, (long)this->m_probeBaseStallMax);
  printf("\t [PROPOSED-VERIFY] proposed stall avg / max     : %.2f / %ld\n", propAvg, (long)this->m_probePropStallMax);
  printf("\t [PROPOSED-VERIFY] total stall base / prop      : %lu / %lu\n",
         (unsigned long)this->m_probeBaseStallSum, (unsigned long)this->m_probePropStallSum);
  printf("\t [PROPOSED-VERIFY] stall reduction (proposed)   : %.1f%%\n", reduction);
  printf("\t [PROPOSED-VERIFY] I3 violations (hazard!=rel)  : %lu\n\n", (unsigned long)this->m_probeI3Violations);

  // ---------------- Phase 5: paper metrics ----------------
  // (1) Other-master access-latency tail (p50/p95/p99), all + conflict + non-conflict.
  std::vector<int64_t> baseConf, propConf, baseNon, propNon;
  for (size_t i = 0; i < this->m_probeBaseStalls.size(); i++) {
    if (this->m_probeHazardFlag[i]) { baseConf.push_back(this->m_probeBaseStalls[i]); propConf.push_back(this->m_probePropStalls[i]); }
    else                           { baseNon.push_back(this->m_probeBaseStalls[i]);  propNon.push_back(this->m_probePropStalls[i]); }
  }
  double nonBaseAvg = 0.0;
  for (int64_t v : baseNon) nonBaseAvg += v;
  nonBaseAvg = baseNon.empty() ? 0.0 : nonBaseAvg / baseNon.size();

  printf("\t [METRIC] latency all  base p50/p95/p99         : %ld / %ld / %ld\n",
         (long)cci_percentile(this->m_probeBaseStalls, 50), (long)cci_percentile(this->m_probeBaseStalls, 95),
         (long)cci_percentile(this->m_probeBaseStalls, 99));
  printf("\t [METRIC] latency all  prop p50/p95/p99         : %ld / %ld / %ld\n",
         (long)cci_percentile(this->m_probePropStalls, 50), (long)cci_percentile(this->m_probePropStalls, 95),
         (long)cci_percentile(this->m_probePropStalls, 99));
  printf("\t [METRIC] conflict     base p95 / prop p95      : %ld / %ld\n",
         (long)cci_percentile(baseConf, 95), (long)cci_percentile(propConf, 95));
  printf("\t [METRIC] non-conflict count / base avg / prop  : %lu / %.2f / 0.00\n",
         (unsigned long)baseNon.size(), nonBaseAvg); // proposed passes done lines immediately
#endif // CCI_SYNTH_PROBE

  // Policy-independent other-master measurement. From the ungated read log and
  // the completion timeline, derive per-read wait under BOTH policies in a single
  // run (identical schedule): proposed waits until the read's line completes,
  // coarse until the whole page completes. done_cycle[line] <= page_done_cycle
  // guarantees proposed <= coarse for every read.
  if (this->m_rangeGateEnable) {
    std::vector<int64_t> propW, coarseW;
    propW.reserve(this->m_otherReadLog.size());
    coarseW.reserve(this->m_otherReadLog.size());
    uint64_t propTot = 0, coarseTot = 0, conflictReads = 0;
    int64_t  propMax = 0, coarseMax = 0;
    for (size_t i = 0; i < this->m_otherReadLog.size(); i++) {
      const OtherReadRec &r = this->m_otherReadLog[i];
      int64_t pw = 0, cw = 0;
      auto it = this->m_rangeTimeline.find(r.page);
      if (it != this->m_rangeTimeline.end() && r.issue >= it->second.start_cycle) {
        const CciRangeTimeline &tl = it->second;
        int64_t ld = (tl.done_cycle[r.line] >= 0) ? tl.done_cycle[r.line] : tl.page_done_cycle;
        if (ld > r.issue)                  pw = ld - r.issue;              // proposed: until line done
        if (tl.page_done_cycle > r.issue)  cw = tl.page_done_cycle - r.issue; // coarse: until page done
      }
      propW.push_back(pw); coarseW.push_back(cw);
      propTot += (uint64_t)pw; coarseTot += (uint64_t)cw;
      if (pw > 0 || cw > 0) conflictReads++;
      if (pw > propMax) propMax = pw;
      if (cw > coarseMax) coarseMax = cw;
    }
    size_t n = this->m_otherReadLog.size();
    double propAvg   = n ? (double)propTot / (double)n : 0.0;
    double coarseAvg = n ? (double)coarseTot / (double)n : 0.0;
    double redPct    = coarseTot ? 100.0 * (1.0 - (double)propTot / (double)coarseTot) : 0.0;
    printf("\t [OTHERMASTER-VERIFY] measurement               : policy-independent (single run)\n");
    printf("\t [OTHERMASTER-VERIFY] reads logged              : %lu\n", (unsigned long)n);
    printf("\t [OTHERMASTER-VERIFY] conflict reads (wait>0)   : %lu\n", (unsigned long)conflictReads);
    printf("\t [OTHERMASTER-VERIFY] wait total    prop/coarse : %lu / %lu  (-%.1f%%)\n",
           (unsigned long)propTot, (unsigned long)coarseTot, redPct);
    printf("\t [OTHERMASTER-VERIFY] wait avg      prop/coarse : %.2f / %.2f\n", propAvg, coarseAvg);
    printf("\t [OTHERMASTER-VERIFY] wait max      prop/coarse : %ld / %ld\n", (long)propMax, (long)coarseMax);
    printf("\t [OTHERMASTER-VERIFY] wait p95      prop/coarse : %ld / %ld\n",
           (long)cci_percentile(propW, 95), (long)cci_percentile(coarseW, 95));
    printf("\t [OTHERMASTER-VERIFY] wait p99      prop/coarse : %ld / %ld\n",
           (long)cci_percentile(propW, 99), (long)cci_percentile(coarseW, 99));
    printf("\n");
  }

  // (2) Tracker occupancy: range-entry peak vs line-granular tracker peak.
  // Fix-1: range peak from timeline intervals (not the erase-based live map).
  int64_t linePeak  = this->Range_LineTrackerPeak();
  int64_t rangePeak = this->Range_RangeEntryPeak();
  double ratio = (rangePeak > 0) ? (double)linePeak / (double)rangePeak : 0.0;
  // NOTE: this is descriptor DEMAND (peak concurrent in-flight descriptors) under
  // UNBOUNDED resources -- NOT resource-limited RTL occupancy and NOT FF/LUT area.
  // The C++ live model allows multiple pages concurrently, whereas the RTL range
  // tracker is single-context and the RTL baseline releases per batch. Cite HW
  // cost from synthesis, and read this ratio as an arithmetic 64:1 demand bound.
  printf("\t [METRIC] descriptor demand (unbounded) range/line : %ld / %ld  (%.1fx bound)\n",
         (long)rangePeak, (long)linePeak, ratio);

  // (3) Copy completion + effective bandwidth (regression watch; expect unchanged).
  int64_t copyStart = -1, copyDone = -1;
  for (const auto &kv : this->m_rangeTimeline) {
    const CciRangeTimeline &tl = kv.second;
    if (copyStart < 0 || tl.start_cycle < copyStart) copyStart = tl.start_cycle;
    if (tl.page_done_cycle > copyDone) copyDone = tl.page_done_cycle;
  }
  int64_t copyCycles = (copyDone > copyStart && copyStart >= 0) ? (copyDone - copyStart) : 0;
  uint64_t copyBytes = (uint64_t)this->m_rangeTargetLineTotal * (uint64_t)CCI_LINE_BYTES;
  double bwBpc = copyCycles ? (double)copyBytes / (double)copyCycles : 0.0;
  printf("\t [METRIC] copy window cycles / bytes            : %ld / %lu\n", (long)copyCycles, (unsigned long)copyBytes);
  printf("\t [METRIC] effective bandwidth (bytes/cycle)     : %.2f\n\n", bwBpc);
}
#endif

EResultType CBUS::PrintStat(int64_t nCycle, FILE *fp) {

  printf("--------------------------------------------------------\n");
  printf("\t Name : %s\n", this->cName.c_str());
  printf("--------------------------------------------------------\n");

  printf("\t Number of SI ports         : %d\n\n", this->NUM_PORT);

  for (int i = 0; i < this->NUM_PORT; i++) {
    printf("\t Number of AR SI[%d]         : %d\n", i, this->nAR_SI[i]);
  };
  printf("\n");
  for (int i = 0; i < this->NUM_PORT; i++) {
    printf("\t Number of AW SI[%d]         : %d\n", i, this->nAW_SI[i]);
  };
  printf("\n");
  for (int i = 0; i < this->NUM_PORT; i++) {
    printf("\t Number of R SI[%d]          : %d\n", i, this->nR_SI[i]);
  };
  printf("\n");
  for (int i = 0; i < this->NUM_PORT; i++) {
    printf("\t Number of B SI[%d]          : %d\n", i, this->nB_SI[i]);
  };
  printf("\n");

  printf("\t Number of cycles when cpFIFO_Central is full           : %d\n", this->nCentralStall);
  printf("\t Number of cycles when cpFIFO_AC is full                : %d\n\n", this->nACStall);
  printf("\t Number of cycles when both Central and AC are full     : %d\n\n", this->nStall);
  printf("\t Number of cycles when waiting for CR response          : %d\n\n", this->nWaitResp);
  printf("\t Number of snoop requests issued                        : %d\n", this->nSnoopIssued);
  printf("\t Number of snoop responses received                     : %d\n\n", this->nSnoopResp);

#ifdef CCI_PROPOSED
  this->Range_PrintVerify();
#endif

  // printf("\t Max allowed AR MO                : %d\n",   MAX_MO_COUNT);
  // printf("\t Max allowed AW MO                : %d\n\n",MAX_MO_COUNT);

  return (ERESULT_TYPE_SUCCESS);
};
