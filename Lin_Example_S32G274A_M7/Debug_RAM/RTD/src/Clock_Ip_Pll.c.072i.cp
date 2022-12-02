
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_TimeoutExpired/15:
  Jump functions of caller  Clock_Ip_StartTimeout/14:
  Jump functions of caller  Clock_Ip_EnablePlldigRdivMfiMfnSdmen/10:
  Jump functions of caller  Clock_Ip_CompletePlldigRdivMfiMfnSdmen/9:
  Jump functions of caller  Clock_Ip_SetPlldigRdivMfiMfnSdmen/8:
  Jump functions of caller  Clock_Ip_ResetPlldigRdivMfiMfnSdmen/7:
  Jump functions of caller  Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/6:
  Jump functions of caller  Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/5:
  Jump functions of caller  Clock_Ip_SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/4:
  Jump functions of caller  Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/3:
  Jump functions of caller  Clock_Ip_CallbackPllEmptyDisable/2:
  Jump functions of caller  Clock_Ip_CallbackPllEmptyComplete/1:
  Jump functions of caller  Clock_Ip_CallbackPllEmpty/0:

 Propagating constants:

Function Clock_Ip_EnablePlldigRdivMfiMfnSdmen/10 is not versionable, reason: not a tree_versionable_function.
Function Clock_Ip_CompletePlldigRdivMfiMfnSdmen/9 is not versionable, reason: not a tree_versionable_function.
Not considering Clock_Ip_SetPlldigRdivMfiMfnSdmen for cloning; -fipa-cp-clone disabled.
Function Clock_Ip_ResetPlldigRdivMfiMfnSdmen/7 is not versionable, reason: not a tree_versionable_function.
Not considering Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CallbackPllEmptyDisable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CallbackPllEmptyComplete for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CallbackPllEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 145, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_EnablePlldigRdivMfiMfnSdmen/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CompletePlldigRdivMfiMfnSdmen/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetPlldigRdivMfiMfnSdmen/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ResetPlldigRdivMfiMfnSdmen/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CallbackPllEmptyDisable/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CallbackPllEmptyComplete/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CallbackPllEmpty/0:
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

Clock_Ip_TimeoutExpired/15 (Clock_Ip_TimeoutExpired) @05e5e460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/5 (1073741824 (estimated locally),3.88 per call) 
  Calls: 
Clock_Ip_StartTimeout/14 (Clock_Ip_StartTimeout) @05e5e380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/5 (114863532 (estimated locally),0.41 per call) 
  Calls: 
Clock_Ip_pxPll/13 (Clock_Ip_pxPll) @05e5f048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/3 (read)Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/5 (read)Clock_Ip_SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/4 (read)Clock_Ip_SetPlldigRdivMfiMfnSdmen/8 (read)Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/6 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8ClockFeatures/12 (Clock_Ip_au8ClockFeatures) @05e5f000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/5 (read)Clock_Ip_SetPlldigRdivMfiMfnSdmen/8 (read)Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/6 (read)Clock_Ip_SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/4 (read)Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/3 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axPllCallbacks/11 (Clock_Ip_axPllCallbacks) @05ea1c60
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_CallbackPllEmpty/0 (addr)Clock_Ip_CallbackPllEmpty/0 (addr)Clock_Ip_CallbackPllEmptyComplete/1 (addr)Clock_Ip_CallbackPllEmpty/0 (addr)Clock_Ip_CallbackPllEmptyDisable/2 (addr)Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/3 (addr)Clock_Ip_SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/4 (addr)Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/5 (addr)Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/6 (addr)Clock_Ip_CallbackPllEmptyDisable/2 (addr)Clock_Ip_ResetPlldigRdivMfiMfnSdmen/7 (addr)Clock_Ip_SetPlldigRdivMfiMfnSdmen/8 (addr)Clock_Ip_CompletePlldigRdivMfiMfnSdmen/9 (addr)Clock_Ip_EnablePlldigRdivMfiMfnSdmen/10 (addr)Clock_Ip_CallbackPllEmptyDisable/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_EnablePlldigRdivMfiMfnSdmen/10 (Clock_Ip_EnablePlldigRdivMfiMfnSdmen) @05e59380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/6 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_CompletePlldigRdivMfiMfnSdmen/9 (Clock_Ip_CompletePlldigRdivMfiMfnSdmen) @05e59ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/11 (addr)
  Availability: available
  Function flags: count:276913048 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/5 (276913048 (estimated locally),1.00 per call) 
Clock_Ip_SetPlldigRdivMfiMfnSdmen/8 (Clock_Ip_SetPlldigRdivMfiMfnSdmen) @05e59c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/12 (read)Clock_Ip_pxPll/13 (read)
  Referring: Clock_Ip_axPllCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ResetPlldigRdivMfiMfnSdmen/7 (Clock_Ip_ResetPlldigRdivMfiMfnSdmen) @05e59540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/3 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/6 (Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize) @05e592a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/12 (read)Clock_Ip_pxPll/13 (read)
  Referring: Clock_Ip_axPllCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Clock_Ip_EnablePlldigRdivMfiMfnSdmen/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/5 (Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize) @05e59000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/12 (read)Clock_Ip_pxPll/13 (read)
  Referring: Clock_Ip_axPllCallbacks/11 (addr)
  Availability: available
  Function flags: count:276913048 (estimated locally) body icf_merged optimize_size
  Called by: Clock_Ip_CompletePlldigRdivMfiMfnSdmen/9 (276913048 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_TimeoutExpired/15 (1073741824 (estimated locally),3.88 per call) Clock_Ip_StartTimeout/14 (114863532 (estimated locally),0.41 per call) 
Clock_Ip_SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/4 (Clock_Ip_SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize) @05ea4620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/12 (read)Clock_Ip_pxPll/13 (read)
  Referring: Clock_Ip_axPllCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/3 (Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize) @05ea47e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/12 (read)Clock_Ip_pxPll/13 (read)
  Referring: Clock_Ip_axPllCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Clock_Ip_ResetPlldigRdivMfiMfnSdmen/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_CallbackPllEmptyDisable/2 (Clock_Ip_CallbackPllEmptyDisable) @05ea4540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/11 (addr)Clock_Ip_axPllCallbacks/11 (addr)Clock_Ip_axPllCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackPllEmptyComplete/1 (Clock_Ip_CallbackPllEmptyComplete) @05ea42a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackPllEmpty/0 (Clock_Ip_CallbackPllEmpty) @05ea4000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/11 (addr)Clock_Ip_axPllCallbacks/11 (addr)Clock_Ip_axPllCallbacks/11 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_CallbackPllEmpty (Clock_Ip_CallbackPllEmpty, funcdef_no=0, decl_uid=6550, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_CallbackPllEmpty/0
Clock_Ip_CallbackPllEmpty (const struct Clock_Ip_PllConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_CallbackPllEmptyComplete (Clock_Ip_CallbackPllEmptyComplete, funcdef_no=1, decl_uid=6552, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_CallbackPllEmptyComplete/1
Clock_Ip_CallbackPllEmptyComplete (Clock_Ip_NameType PllName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Clock_Ip_CallbackPllEmptyDisable (Clock_Ip_CallbackPllEmptyDisable, funcdef_no=2, decl_uid=6554, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_CallbackPllEmptyDisable/2
Clock_Ip_CallbackPllEmptyDisable (Clock_Ip_NameType PllName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize (Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize, funcdef_no=3, decl_uid=6556, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/3
Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize (const struct Clock_Ip_PllConfigType * Config)
{
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  struct PLLDIG_Type * _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_7(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_8 = (uint32) _2;
  # DEBUG Instance => Instance_8
  # DEBUG BEGIN_STMT
  _3 = Clock_Ip_pxPll[Instance_8];
  _4 ={v} _3->PLLCR;
  _5 = _4 | 2147483648;
  _3->PLLCR ={v} _5;
  return;

}



;; Function Clock_Ip_SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize (Clock_Ip_SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize, funcdef_no=4, decl_uid=6558, cgraph_uid=5, symbol_order=4)

Modification phase of node Clock_Ip_SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/4
Clock_Ip_SetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize (const struct Clock_Ip_PllConfigType * Config)
{
  uint32 Value;
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  short unsigned int _3;
  <unnamed type> _4;
  struct PLLDIG_Type * _5;
  long unsigned int _6;
  unsigned char _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;
  long unsigned int _12;
  short unsigned int _13;
  long unsigned int _14;
  unsigned char _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  unsigned char _19;
  unsigned char _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  short unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  short unsigned int _28;
  long unsigned int _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int iftmp.2_32;
  short unsigned int _45;
  short unsigned int _46;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_35(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_36 = (uint32) _2;
  # DEBUG Instance => Instance_36
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = Config_35(D)->Enable;
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = Config_35(D)->InputReference;
  _5 = Clock_Ip_pxPll[Instance_36];
  _6 = _4 & 1;
  _5->PLLCLKMUX ={v} _6;
  # DEBUG BEGIN_STMT
  _7 = Config_35(D)->Predivider;
  _8 = (long unsigned int) _7;
  _9 = _8 << 12;
  _10 = _9 & 28672;
  _11 = Config_35(D)->MulFactorDiv;
  _12 = (long unsigned int) _11;
  Value_38 = _10 | _12;
  # DEBUG Value => Value_38
  # DEBUG BEGIN_STMT
  _5->PLLDV ={v} Value_38;
  # DEBUG BEGIN_STMT
  Value_40 ={v} _5->PLLFD;
  # DEBUG Value => Value_40
  # DEBUG BEGIN_STMT
  Value_41 = Value_40 & 3221192704;
  # DEBUG Value => Value_41
  # DEBUG BEGIN_STMT
  _13 = Config_35(D)->NumeratorFracLoopDiv;
  _45 = _13 & 32767;
  _14 = (long unsigned int) _45;
  Value_42 = _14 | Value_41;
  # DEBUG Value => Value_42
  # DEBUG BEGIN_STMT
  _15 = Config_35(D)->SigmaDelta;
  _16 = (long unsigned int) _15;
  _17 = _16 << 30;
  _18 = _17 & 1073741824;
  Value_43 = _18 | Value_42;
  # DEBUG Value => Value_43
  # DEBUG BEGIN_STMT
  _5->PLLFD ={v} Value_43;
  # DEBUG BEGIN_STMT
  _19 = Config_35(D)->ModulationFrequency;
  if (_19 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435456]:

  <bb 5> [local count: 536870913]:
  # iftmp.2_32 = PHI <1073741824(3), 0(4)>
  _20 = Config_35(D)->ModulationType;
  _21 = (long unsigned int) _20;
  _22 = _21 << 29;
  _23 = _22 & 536870912;
  _24 = _23 | iftmp.2_32;
  _25 = Config_35(D)->IncrementStep;
  _46 = _25 & 2047;
  _26 = (long unsigned int) _46;
  _27 = _24 | _26;
  _28 = Config_35(D)->ModulationPeriod;
  _29 = (long unsigned int) _28;
  _30 = _29 << 16;
  _31 = _30 & 67043328;
  Value_47 = _27 | _31;
  # DEBUG Value => Value_47
  # DEBUG BEGIN_STMT
  _5->PLLFM ={v} Value_47;

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize (Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize, funcdef_no=6, decl_uid=6562, cgraph_uid=7, symbol_order=6)

Modification phase of node Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/6
Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize (const struct Clock_Ip_PllConfigType * Config)
{
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  short unsigned int _3;
  struct PLLDIG_Type * _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_9(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_10 = (uint32) _2;
  # DEBUG Instance => Instance_10
  # DEBUG BEGIN_STMT
  _3 = Config_9(D)->Enable;
  if (_3 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_pxPll[Instance_10];
  _5 ={v} _4->PLLCR;
  _6 = _5 & 2147483647;
  _4->PLLCR ={v} _6;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_ResetPlldigRdivMfiMfnSdmen (Clock_Ip_ResetPlldigRdivMfiMfnSdmen, funcdef_no=12, decl_uid=6564, cgraph_uid=8, symbol_order=7)

Modification phase of node Clock_Ip_ResetPlldigRdivMfiMfnSdmen/7
Clock_Ip_ResetPlldigRdivMfiMfnSdmen (const struct Clock_Ip_PllConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  Clock_Ip_ResetPlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize (Config_2(D)); [tail call]
  return;

}



;; Function Clock_Ip_SetPlldigRdivMfiMfnSdmen (Clock_Ip_SetPlldigRdivMfiMfnSdmen, funcdef_no=8, decl_uid=6566, cgraph_uid=9, symbol_order=8)

Modification phase of node Clock_Ip_SetPlldigRdivMfiMfnSdmen/8
Clock_Ip_SetPlldigRdivMfiMfnSdmen (const struct Clock_Ip_PllConfigType * Config)
{
  uint32 Value;
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  short unsigned int _3;
  <unnamed type> _4;
  struct PLLDIG_Type * _5;
  long unsigned int _6;
  unsigned char _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;
  long unsigned int _12;
  short unsigned int _13;
  long unsigned int _14;
  unsigned char _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  short unsigned int _31;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_21(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_22 = (uint32) _2;
  # DEBUG Instance => Instance_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = Config_21(D)->Enable;
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = Config_21(D)->InputReference;
  _5 = Clock_Ip_pxPll[Instance_22];
  _6 = _4 & 1;
  _5->PLLCLKMUX ={v} _6;
  # DEBUG BEGIN_STMT
  _7 = Config_21(D)->Predivider;
  _8 = (long unsigned int) _7;
  _9 = _8 << 12;
  _10 = _9 & 28672;
  _11 = Config_21(D)->MulFactorDiv;
  _12 = (long unsigned int) _11;
  Value_24 = _10 | _12;
  # DEBUG Value => Value_24
  # DEBUG BEGIN_STMT
  _5->PLLDV ={v} Value_24;
  # DEBUG BEGIN_STMT
  Value_26 ={v} _5->PLLFD;
  # DEBUG Value => Value_26
  # DEBUG BEGIN_STMT
  Value_27 = Value_26 & 3221192704;
  # DEBUG Value => Value_27
  # DEBUG BEGIN_STMT
  _13 = Config_21(D)->NumeratorFracLoopDiv;
  _31 = _13 & 32767;
  _14 = (long unsigned int) _31;
  Value_28 = _14 | Value_27;
  # DEBUG Value => Value_28
  # DEBUG BEGIN_STMT
  _15 = Config_21(D)->SigmaDelta;
  _16 = (long unsigned int) _15;
  _17 = _16 << 30;
  _18 = _17 & 1073741824;
  Value_29 = _18 | Value_28;
  # DEBUG Value => Value_29
  # DEBUG BEGIN_STMT
  _5->PLLFD ={v} Value_29;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_EnablePlldigRdivMfiMfnSdmen (Clock_Ip_EnablePlldigRdivMfiMfnSdmen, funcdef_no=16, decl_uid=6570, cgraph_uid=11, symbol_order=10)

Modification phase of node Clock_Ip_EnablePlldigRdivMfiMfnSdmen/10
Clock_Ip_EnablePlldigRdivMfiMfnSdmen (const struct Clock_Ip_PllConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  Clock_Ip_EnablePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize (Config_2(D)); [tail call]
  return;

}



;; Function Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize (Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize, funcdef_no=5, decl_uid=6560, cgraph_uid=6, symbol_order=5)

Modification phase of node Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize/5
Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize (Clock_Ip_NameType PllName)
{
  uint32 Instance;
  uint32 PllLockStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  Clock_Ip_PllStatusReturnType PllStatus;
  unsigned char _1;
  struct PLLDIG_Type * _2;
  long unsigned int _3;
  signed int _4;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int TimeoutTicks.1_8;

  <bb 2> [local count: 276913048]:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 2
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[PllName_13(D)][0];
  Instance_14 = (uint32) _1;
  # DEBUG Instance => Instance_14
  # DEBUG BEGIN_STMT
  _2 = Clock_Ip_pxPll[Instance_14];
  _3 ={v} _2->PLLCR;
  _4 = (signed int) _3;
  if (_4 >= 0)
    goto <bb 3>; [41.48%]
  else
    goto <bb 8>; [58.52%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 ={v} _2->PLLSR;
  _7 = _6 >> 2;
  PllLockStatus_16 = _7 & 1;
  # DEBUG PllLockStatus => PllLockStatus_16
  # DEBUG BEGIN_STMT
  TimeoutTicks.1_8 = TimeoutTicks;
  TimeoutOccurred_18 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.1_8);
  # DEBUG TimeoutOccurred => TimeoutOccurred_18
  # DEBUG BEGIN_STMT
  if (PllLockStatus_16 == 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686024]:
  if (TimeoutOccurred_18 != 0)
    goto <bb 6>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 9> [local count: 958878294]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_5 = PHI <TimeoutOccurred_18(4), TimeoutOccurred_18(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_5 != 0)
    goto <bb 7>; [65.00%]
  else
    goto <bb 8>; [35.00%]

  <bb 7> [local count: 74661296]:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 1

  <bb 8> [local count: 276913047]:
  # PllStatus_9 = PHI <1(7), 0(2), 2(6)>
  # DEBUG PllStatus => PllStatus_9
  # DEBUG BEGIN_STMT
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return PllStatus_9;

}



;; Function Clock_Ip_CompletePlldigRdivMfiMfnSdmen (Clock_Ip_CompletePlldigRdivMfiMfnSdmen, funcdef_no=14, decl_uid=6568, cgraph_uid=10, symbol_order=9)

Modification phase of node Clock_Ip_CompletePlldigRdivMfiMfnSdmen/9
Clock_Ip_CompletePlldigRdivMfiMfnSdmen (Clock_Ip_NameType PllName)
{
  Clock_Ip_PllStatusReturnType retval.14;

  <bb 2> [local count: 276913048]:
  retval.14_4 = Clock_Ip_CompletePlldigRdivMfiMfnSdmenSsscgbypSpreadctlStepnoStepsize (PllName_2(D)); [tail call]
  return retval.14_4;

}


