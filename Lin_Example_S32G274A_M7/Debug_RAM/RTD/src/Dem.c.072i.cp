
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Sys_GetCoreID/7:
  Jump functions of caller  Dem_ReportErrorStatusPreExtData/6:
  Jump functions of caller  Dem_SetEventStatus/5:

 Propagating constants:

Not considering Dem_ReportErrorStatusPreExtData for cloning; -fipa-cp-clone disabled.
Not considering Dem_SetEventStatus for cloning; -fipa-cp-clone disabled.

overall_size: 44, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dem_ReportErrorStatusPreExtData/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_SetEventStatus/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Sys_GetCoreID/7 (Sys_GetCoreID) @05a9da80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_ReportErrorStatusPreExtData/6 (694774119 (estimated locally),1.00 per call) Dem_SetEventStatus/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_ReportErrorStatusPreExtData/6 (Dem_ReportErrorStatusPreExtData) @05a9d620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_numEventErrors/4 (read)Dem_EventId/0 (write)Dem_EventStatus/1 (write)Dem_numEventErrors/4 (write)Dem_OverflowEvent/2 (write)Dem_EventId/0 (write)Dem_EventStatus/1 (write)Dem_OverflowEvent/2 (write)Dem_au8ExtendedData/3 (write)
  Referring: 
  Availability: available
  Function flags: count:694774119 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/7 (694774119 (estimated locally),1.00 per call) 
Dem_SetEventStatus/5 (Dem_SetEventStatus) @05a9d380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_numEventErrors/4 (read)Dem_EventId/0 (write)Dem_EventStatus/1 (write)Dem_numEventErrors/4 (write)Dem_OverflowEvent/2 (write)Dem_EventId/0 (write)Dem_EventStatus/1 (write)Dem_OverflowEvent/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Sys_GetCoreID/7 (1073741824 (estimated locally),1.00 per call) 
Dem_numEventErrors/4 (Dem_numEventErrors) @05a9b3f0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_SetEventStatus/5 (write)Dem_SetEventStatus/5 (read)Dem_ReportErrorStatusPreExtData/6 (read)Dem_ReportErrorStatusPreExtData/6 (write)
  Availability: available
  Varpool flags:
Dem_au8ExtendedData/3 (Dem_au8ExtendedData) @05a9b3a8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_ReportErrorStatusPreExtData/6 (write)
  Availability: available
  Varpool flags:
Dem_OverflowEvent/2 (Dem_OverflowEvent) @05a9b360
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_SetEventStatus/5 (write)Dem_SetEventStatus/5 (write)Dem_ReportErrorStatusPreExtData/6 (write)Dem_ReportErrorStatusPreExtData/6 (write)
  Availability: available
  Varpool flags:
Dem_EventStatus/1 (Dem_EventStatus) @05a9b318
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_SetEventStatus/5 (write)Dem_SetEventStatus/5 (write)Dem_ReportErrorStatusPreExtData/6 (write)Dem_ReportErrorStatusPreExtData/6 (write)
  Availability: available
  Varpool flags:
Dem_EventId/0 (Dem_EventId) @05a9b2d0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dem_SetEventStatus/5 (write)Dem_SetEventStatus/5 (write)Dem_ReportErrorStatusPreExtData/6 (write)Dem_ReportErrorStatusPreExtData/6 (write)
  Availability: available
  Varpool flags:

;; Function Dem_SetEventStatus (Dem_SetEventStatus, funcdef_no=0, decl_uid=5650, cgraph_uid=1, symbol_order=5)

Modification phase of node Dem_SetEventStatus/5
Dem_SetEventStatus (Dem_EventIdType EventId, Dem_EventStatusType EventStatus)
{
  uint32 u32CoreId;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_8 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_8
  # DEBUG BEGIN_STMT
  _2 = Dem_numEventErrors[u32CoreId_8];
  if (_2 <= 126)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Dem_EventId[u32CoreId_8][_2] = EventId_9(D);
  # DEBUG BEGIN_STMT
  Dem_EventStatus[u32CoreId_8][_2] = EventStatus_11(D);
  # DEBUG BEGIN_STMT
  _3 = _2 + 1;
  Dem_numEventErrors[u32CoreId_8] = _3;
  # DEBUG BEGIN_STMT
  Dem_OverflowEvent[u32CoreId_8] = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = _2 + 4294967295;
  Dem_EventId[u32CoreId_8][_4] = EventId_9(D);
  # DEBUG BEGIN_STMT
  Dem_EventStatus[u32CoreId_8][_4] = EventStatus_11(D);
  # DEBUG BEGIN_STMT
  Dem_OverflowEvent[u32CoreId_8] = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_ReportErrorStatusPreExtData (Dem_ReportErrorStatusPreExtData, funcdef_no=1, decl_uid=5655, cgraph_uid=2, symbol_order=6)

Modification phase of node Dem_ReportErrorStatusPreExtData/6
Dem_ReportErrorStatusPreExtData (Dem_EventIdType Dem_EventIdRaw, Dem_EventStatusType Dem_EventStatusRaw, const uint8 * const Dem_pui8_PreExtData, uint8 Dem_PreExtDataSize)
{
  uint32 u32CoreId;
  Std_ReturnType retVal;
  uint8 u8Counter;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  sizetype _5;
  const uint8 * _6;
  int _7;
  unsigned char _8;

  <bb 2> [local count: 694774119]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  _1 = Sys_GetCoreID ();
  u32CoreId_16 = (uint32) _1;
  # DEBUG u32CoreId => u32CoreId_16
  # DEBUG BEGIN_STMT
  _2 = Dem_numEventErrors[u32CoreId_16];
  if (_2 <= 126)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 347387059]:
  # DEBUG BEGIN_STMT
  Dem_EventId[u32CoreId_16][_2] = Dem_EventIdRaw_17(D);
  # DEBUG BEGIN_STMT
  Dem_EventStatus[u32CoreId_16][_2] = Dem_EventStatusRaw_19(D);
  # DEBUG BEGIN_STMT
  _3 = _2 + 1;
  Dem_numEventErrors[u32CoreId_16] = _3;
  # DEBUG BEGIN_STMT
  Dem_OverflowEvent[u32CoreId_16] = 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 347387059]:
  # DEBUG BEGIN_STMT
  _4 = _2 + 4294967295;
  Dem_EventId[u32CoreId_16][_4] = Dem_EventIdRaw_17(D);
  # DEBUG BEGIN_STMT
  Dem_EventStatus[u32CoreId_16][_4] = Dem_EventStatusRaw_19(D);
  # DEBUG BEGIN_STMT
  Dem_OverflowEvent[u32CoreId_16] = 1;

  <bb 5> [local count: 694774119]:
  # DEBUG BEGIN_STMT
  if (Dem_EventStatusRaw_19(D) == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 6> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  if (Dem_PreExtDataSize_26(D) <= 100)
    goto <bb 10>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 10> [local count: 118111600]:
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _5 = (sizetype) u8Counter_9;
  _6 = Dem_pui8_PreExtData_27(D) + _5;
  _7 = (int) u8Counter_9;
  _8 = *_6;
  Dem_au8ExtendedData[u32CoreId_16][_7] = _8;
  # DEBUG BEGIN_STMT
  u8Counter_29 = u8Counter_9 + 1;
  # DEBUG u8Counter => u8Counter_29

  <bb 8> [local count: 1073741824]:
  # u8Counter_9 = PHI <u8Counter_29(7), 0(10)>
  # DEBUG u8Counter => u8Counter_9
  # DEBUG BEGIN_STMT
  if (u8Counter_9 < Dem_PreExtDataSize_26(D))
    goto <bb 7>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 694774120]:
  # retVal_10 = PHI <0(5), 0(8), 1(6)>
  # DEBUG retVal => retVal_10
  # DEBUG BEGIN_STMT
  return retVal_10;

}

