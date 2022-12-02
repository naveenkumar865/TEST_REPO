
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_ReportClockErrors/10:
  Jump functions of caller  Clock_Ip_TimeoutExpired/9:
  Jump functions of caller  Clock_Ip_StartTimeout/8:
  Jump functions of caller  Clock_Ip_CompleteDfsMfiMfn/4:
  Jump functions of caller  Clock_Ip_SetDfsMfiMfn/3:
  Jump functions of caller  Clock_Ip_ResetDfsMfiMfn/2:
  Jump functions of caller  Clock_Ip_CallbackFracDivEmptyComplete/1:
  Jump functions of caller  Clock_Ip_CallbackFracDivEmpty/0:

 Propagating constants:

Not considering Clock_Ip_CompleteDfsMfiMfn for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetDfsMfiMfn for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ResetDfsMfiMfn for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CallbackFracDivEmptyComplete for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CallbackFracDivEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 74, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_CompleteDfsMfiMfn/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetDfsMfiMfn/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ResetDfsMfiMfn/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CallbackFracDivEmptyComplete/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CallbackFracDivEmpty/0:
    param [0]: BOTTOM
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

Clock_Ip_ReportClockErrors/10 (Clock_Ip_ReportClockErrors) @05fe7c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompleteDfsMfiMfn/4 (54870309 (estimated locally),0.16 per call) 
  Calls: 
Clock_Ip_TimeoutExpired/9 (Clock_Ip_TimeoutExpired) @05fe7b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompleteDfsMfiMfn/4 (1073741824 (estimated locally),3.08 per call) 
  Calls: 
Clock_Ip_StartTimeout/8 (Clock_Ip_StartTimeout) @05fe7a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompleteDfsMfiMfn/4 (114863532 (estimated locally),0.33 per call) 
  Calls: 
Clock_Ip_apxDfs/7 (Clock_Ip_apxDfs) @05fe1e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_SetDfsMfiMfn/3 (read)Clock_Ip_ResetDfsMfiMfn/2 (read)Clock_Ip_CompleteDfsMfiMfn/4 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8ClockFeatures/6 (Clock_Ip_au8ClockFeatures) @05fe1e10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ResetDfsMfiMfn/2 (read)Clock_Ip_ResetDfsMfiMfn/2 (read)Clock_Ip_SetDfsMfiMfn/3 (read)Clock_Ip_SetDfsMfiMfn/3 (read)Clock_Ip_CompleteDfsMfiMfn/4 (read)Clock_Ip_CompleteDfsMfiMfn/4 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axFracDivCallbacks/5 (Clock_Ip_axFracDivCallbacks) @05fe17e0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_CallbackFracDivEmpty/0 (addr)Clock_Ip_CallbackFracDivEmpty/0 (addr)Clock_Ip_CallbackFracDivEmptyComplete/1 (addr)Clock_Ip_ResetDfsMfiMfn/2 (addr)Clock_Ip_SetDfsMfiMfn/3 (addr)Clock_Ip_CompleteDfsMfiMfn/4 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_CompleteDfsMfiMfn/4 (Clock_Ip_CompleteDfsMfiMfn) @05fe7460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/6 (read)Clock_Ip_au8ClockFeatures/6 (read)Clock_Ip_apxDfs/7 (read)
  Referring: Clock_Ip_axFracDivCallbacks/5 (addr)
  Availability: available
  Function flags: count:348071309 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ReportClockErrors/10 (54870309 (estimated locally),0.16 per call) Clock_Ip_TimeoutExpired/9 (1073741824 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/8 (114863532 (estimated locally),0.33 per call) 
Clock_Ip_SetDfsMfiMfn/3 (Clock_Ip_SetDfsMfiMfn) @05fe71c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/6 (read)Clock_Ip_au8ClockFeatures/6 (read)Clock_Ip_apxDfs/7 (read)
  Referring: Clock_Ip_axFracDivCallbacks/5 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ResetDfsMfiMfn/2 (Clock_Ip_ResetDfsMfiMfn) @05fe0c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/6 (read)Clock_Ip_au8ClockFeatures/6 (read)Clock_Ip_apxDfs/7 (read)
  Referring: Clock_Ip_axFracDivCallbacks/5 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackFracDivEmptyComplete/1 (Clock_Ip_CallbackFracDivEmptyComplete) @05fe0e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axFracDivCallbacks/5 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackFracDivEmpty/0 (Clock_Ip_CallbackFracDivEmpty) @05fe0b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axFracDivCallbacks/5 (addr)Clock_Ip_axFracDivCallbacks/5 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_CallbackFracDivEmpty (Clock_Ip_CallbackFracDivEmpty, funcdef_no=0, decl_uid=6550, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_CallbackFracDivEmpty/0
Clock_Ip_CallbackFracDivEmpty (const struct Clock_Ip_FracDivConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_CallbackFracDivEmptyComplete (Clock_Ip_CallbackFracDivEmptyComplete, funcdef_no=1, decl_uid=6552, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_CallbackFracDivEmptyComplete/1
Clock_Ip_CallbackFracDivEmptyComplete (Clock_Ip_NameType DfsName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Clock_Ip_ResetDfsMfiMfn (Clock_Ip_ResetDfsMfiMfn, funcdef_no=2, decl_uid=6554, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_ResetDfsMfiMfn/2
Clock_Ip_ResetDfsMfiMfn (const struct Clock_Ip_FracDivConfigType * Config)
{
  uint32 DividerIndex;
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  unsigned char _3;
  struct DFS_Type * _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_9(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_10 = (uint32) _2;
  # DEBUG Instance => Instance_10
  # DEBUG BEGIN_STMT
  _3 = Clock_Ip_au8ClockFeatures[_1][5];
  DividerIndex_11 = (uint32) _3;
  # DEBUG DividerIndex => DividerIndex_11
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_apxDfs[Instance_10];
  _5 ={v} _4->PORTRESET;
  _6 = 1 << DividerIndex_11;
  _7 = _5 | _6;
  _4->PORTRESET ={v} _7;
  return;

}



;; Function Clock_Ip_SetDfsMfiMfn (Clock_Ip_SetDfsMfiMfn, funcdef_no=3, decl_uid=6556, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_SetDfsMfiMfn/3
Clock_Ip_SetDfsMfiMfn (const struct Clock_Ip_FracDivConfigType * Config)
{
  uint32 Value;
  uint32 FractionalPart;
  uint32 IntegerPart;
  uint32 DividerIndex;
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  struct DFS_Type * _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_15(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_16 = (uint32) _2;
  # DEBUG Instance => Instance_16
  # DEBUG BEGIN_STMT
  _3 = Clock_Ip_au8ClockFeatures[_1][5];
  DividerIndex_17 = (uint32) _3;
  # DEBUG DividerIndex => DividerIndex_17
  # DEBUG BEGIN_STMT
  IntegerPart_18 = Config_15(D)->Value[0];
  # DEBUG IntegerPart => IntegerPart_18
  # DEBUG BEGIN_STMT
  FractionalPart_19 = Config_15(D)->Value[1];
  # DEBUG FractionalPart => FractionalPart_19
  # DEBUG BEGIN_STMT
  # DEBUG Value => 0
  # DEBUG BEGIN_STMT
  _4 = Config_15(D)->Enable;
  if (_4 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _5 = FractionalPart_19 & 63;
  # DEBUG Value => _5
  # DEBUG BEGIN_STMT
  _6 = IntegerPart_18 << 8;
  _7 = _6 & 65535;
  Value_20 = _5 | _7;
  # DEBUG Value => Value_20
  # DEBUG BEGIN_STMT
  _8 = Clock_Ip_apxDfs[Instance_16];
  _8->DVPORT[DividerIndex_17] ={v} Value_20;
  # DEBUG BEGIN_STMT
  _9 ={v} _8->PORTRESET;
  _10 = 1 << DividerIndex_17;
  _11 = ~_10;
  _12 = _9 & _11;
  _8->PORTRESET ={v} _12;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_CompleteDfsMfiMfn (Clock_Ip_CompleteDfsMfiMfn, funcdef_no=4, decl_uid=6558, cgraph_uid=5, symbol_order=4)

Modification phase of node Clock_Ip_CompleteDfsMfiMfn/4
Clock_Ip_CompleteDfsMfiMfn (Clock_Ip_NameType DfsName)
{
  uint32 DividerIndex;
  uint32 Instance;
  Clock_Ip_DfsStatusType Status;
  uint32 DfsPortStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  unsigned char _1;
  unsigned char _2;
  struct DFS_Type * _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int TimeoutTicks.0_11;

  <bb 2> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Status => 2
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[DfsName_16(D)][0];
  Instance_17 = (uint32) _1;
  # DEBUG Instance => Instance_17
  # DEBUG BEGIN_STMT
  _2 = Clock_Ip_au8ClockFeatures[DfsName_16(D)][5];
  DividerIndex_18 = (uint32) _2;
  # DEBUG DividerIndex => DividerIndex_18
  # DEBUG BEGIN_STMT
  _3 = Clock_Ip_apxDfs[Instance_17];
  _4 ={v} _3->PORTRESET;
  _5 = _4 >> DividerIndex_18;
  _6 = _5 & 1;
  if (_6 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 ={v} _3->PORTSR;
  _9 = 1 << DividerIndex_18;
  _10 = _8 & _9;
  DfsPortStatus_20 = _10 & 63;
  # DEBUG DfsPortStatus => DfsPortStatus_20
  # DEBUG BEGIN_STMT
  TimeoutTicks.0_11 = TimeoutTicks;
  TimeoutOccurred_22 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_11);
  # DEBUG TimeoutOccurred => TimeoutOccurred_22
  # DEBUG BEGIN_STMT
  if (DfsPortStatus_20 == 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (TimeoutOccurred_22 != 0)
    goto <bb 6>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 9> [local count: 958878292]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_7 = PHI <TimeoutOccurred_22(4), TimeoutOccurred_22(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_7 != 0)
    goto <bb 7>; [47.77%]
  else
    goto <bb 8>; [52.23%]

  <bb 7> [local count: 54870309]:
  # DEBUG BEGIN_STMT
  # DEBUG Status => 1
  # DEBUG BEGIN_STMT
  Clock_Ip_ReportClockErrors (1, DfsName_16(D));

  <bb 8> [local count: 348071309]:
  # Status_12 = PHI <1(7), 0(2), 2(6)>
  # DEBUG Status => Status_12
  # DEBUG BEGIN_STMT
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return Status_12;

}


