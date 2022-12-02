
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Mcu_Ipw_SleepOnExit/22:
  Jump functions of caller  Mcu_Ipw_GetResetRawValue/21:
  Jump functions of caller  Mcu_Ipw_GetResetReason/20:
  Jump functions of caller  Mcu_Ipw_GetPllStatus/19:
  Jump functions of caller  Mcu_Ipw_DistributePllClock/18:
  Jump functions of caller  SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/17:
  Jump functions of caller  Mcu_Ipw_SetMode/16:
  Jump functions of caller  SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/15:
  Jump functions of caller  Mcu_Ipw_InitClock/14:
  Jump functions of caller  Mcu_Ipw_Init/13:
  Jump functions of caller  Mcu_SleepOnExit/11:
  Jump functions of caller  Mcu_GetResetRawValue/10:
  Jump functions of caller  Mcu_GetResetReason/9:
  Jump functions of caller  Mcu_GetPllStatus/8:
  Jump functions of caller  Mcu_DistributePllClock/7:
  Jump functions of caller  Mcu_SetMode/6:
  Jump functions of caller  Mcu_InitClock/5:
  Jump functions of caller  Mcu_InitRamSection/4:
  Jump functions of caller  Mcu_Init/3:

 Propagating constants:

Not considering Mcu_SleepOnExit for cloning; -fipa-cp-clone disabled.
Not considering Mcu_GetResetRawValue for cloning; -fipa-cp-clone disabled.
Not considering Mcu_GetResetReason for cloning; -fipa-cp-clone disabled.
Not considering Mcu_GetPllStatus for cloning; -fipa-cp-clone disabled.
Not considering Mcu_DistributePllClock for cloning; -fipa-cp-clone disabled.
Not considering Mcu_SetMode for cloning; -fipa-cp-clone disabled.
Not considering Mcu_InitClock for cloning; -fipa-cp-clone disabled.
Not considering Mcu_InitRamSection for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Init for cloning; -fipa-cp-clone disabled.

overall_size: 66, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 21, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Mcu_SleepOnExit/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_GetResetRawValue/10:
  Node: Mcu_GetResetReason/9:
  Node: Mcu_GetPllStatus/8:
  Node: Mcu_DistributePllClock/7:
  Node: Mcu_SetMode/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_InitClock/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_InitRamSection/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_Init/3:
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

Mcu_Ipw_SleepOnExit/22 (Mcu_Ipw_SleepOnExit) @061348c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_SleepOnExit/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Ipw_GetResetRawValue/21 (Mcu_Ipw_GetResetRawValue) @06134700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_GetResetRawValue/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Ipw_GetResetReason/20 (Mcu_Ipw_GetResetReason) @06134540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_GetResetReason/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Ipw_GetPllStatus/19 (Mcu_Ipw_GetPllStatus) @06134380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_GetPllStatus/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Ipw_DistributePllClock/18 (Mcu_Ipw_DistributePllClock) @061341c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_DistributePllClock/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/17 (SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00) @06134000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_SetMode/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Ipw_SetMode/16 (Mcu_Ipw_SetMode) @0612e540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_SetMode/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/15 (SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00) @0612e2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_SetMode/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Ipw_InitClock/14 (Mcu_Ipw_InitClock) @0612eee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_InitClock/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Ipw_Init/13 (Mcu_Ipw_Init) @0612ec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Init/3 (118111601 (estimated locally),1.00 per call) 
  Calls: 
Mcu_PreCompileConfig/12 (Mcu_PreCompileConfig) @06130798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Mcu_Init/3 (addr)Mcu_Init/3 (read)Mcu_Init/3 (read)Mcu_Init/3 (read)Mcu_Init/3 (read)Mcu_Init/3 (read)
  Availability: not_available
  Varpool flags: read-only
Mcu_SleepOnExit/11 (Mcu_SleepOnExit) @0612e700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_SleepOnExit/22 (1073741824 (estimated locally),1.00 per call) 
Mcu_GetResetRawValue/10 (Mcu_GetResetRawValue) @0612e460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_GetResetRawValue/21 (1073741824 (estimated locally),1.00 per call) 
Mcu_GetResetReason/9 (Mcu_GetResetReason) @0612e1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_GetResetReason/20 (1073741824 (estimated locally),1.00 per call) 
Mcu_GetPllStatus/8 (Mcu_GetPllStatus) @05e8ed20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_GetPllStatus/19 (1073741824 (estimated locally),1.00 per call) 
Mcu_DistributePllClock/7 (Mcu_DistributePllClock) @05e8e7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_DistributePllClock/18 (1073741824 (estimated locally),1.00 per call) 
Mcu_SetMode/6 (Mcu_SetMode) @05e8eee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_pConfigPtr/2 (read)Mcu_au8ModeConfigIds/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/17 (1073741824 (estimated locally),1.00 per call) Mcu_Ipw_SetMode/16 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/15 (1073741824 (estimated locally),1.00 per call) 
Mcu_InitClock/5 (Mcu_InitClock) @05e8ec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_pConfigPtr/2 (read)Mcu_au8ClockConfigIds/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_InitClock/14 (1073741824 (estimated locally),1.00 per call) 
Mcu_InitRamSection/4 (Mcu_InitRamSection) @05e8e9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Mcu_Init/3 (Mcu_Init) @05e8e700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_pConfigPtr/2 (write)Mcu_PreCompileConfig/12 (addr)Mcu_PreCompileConfig/12 (read)Mcu_au8ModeConfigIds/1 (write)Mcu_PreCompileConfig/12 (read)Mcu_PreCompileConfig/12 (read)Mcu_au8ClockConfigIds/0 (write)Mcu_PreCompileConfig/12 (read)Mcu_PreCompileConfig/12 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_Init/13 (118111601 (estimated locally),1.00 per call) 
Mcu_pConfigPtr/2 (Mcu_pConfigPtr) @061263f0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Mcu_InitClock/5 (read)Mcu_Init/3 (write)Mcu_SetMode/6 (read)
  Availability: available
  Varpool flags:
Mcu_au8ModeConfigIds/1 (Mcu_au8ModeConfigIds) @06126318
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Mcu_Init/3 (write)Mcu_SetMode/6 (read)
  Availability: available
  Varpool flags:
Mcu_au8ClockConfigIds/0 (Mcu_au8ClockConfigIds) @06126288
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Mcu_Init/3 (write)Mcu_InitClock/5 (read)
  Availability: available
  Varpool flags:

;; Function Mcu_Init (Mcu_Init, funcdef_no=0, decl_uid=6595, cgraph_uid=1, symbol_order=3)

Modification phase of node Mcu_Init/3
Mcu_Init (const struct Mcu_ConfigType * ConfigPtr)
{
  uint32 NoConfigs;
  const struct Mcu_ModeConfigType[1] * _1;
  long unsigned int _2;
  unsigned char _3;
  long unsigned int _4;
  const struct Mcu_ClockConfigType[1] * _5;
  long unsigned int _6;
  unsigned char _7;
  long unsigned int _8;
  const struct Mcu_HwIPsConfigType * _9;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_pConfigPtr = &Mcu_PreCompileConfig;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG NoConfigs => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630220]:
  # DEBUG BEGIN_STMT
  _1 = Mcu_PreCompileConfig.ModeConfigArrayPtr;
  _2 = *_1[NoConfigs_10].ModeConfigId;
  _3 = (unsigned char) NoConfigs_10;
  Mcu_au8ModeConfigIds[_2] = _3;
  # DEBUG BEGIN_STMT
  NoConfigs_20 = NoConfigs_10 + 1;
  # DEBUG NoConfigs => NoConfigs_20

  <bb 4> [local count: 1073741821]:
  # NoConfigs_10 = PHI <0(2), NoConfigs_20(3)>
  # DEBUG NoConfigs => NoConfigs_10
  # DEBUG BEGIN_STMT
  _4 = Mcu_PreCompileConfig.NoModeConfigs;
  if (_4 > NoConfigs_10)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111600]:
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _5 = Mcu_PreCompileConfig.ClockConfigArrayPtr;
  _6 = *_5[NoConfigs_11].ClkConfigId;
  _7 = (unsigned char) NoConfigs_11;
  Mcu_au8ClockConfigIds[_6] = _7;
  # DEBUG BEGIN_STMT
  NoConfigs_18 = NoConfigs_11 + 1;
  # DEBUG NoConfigs => NoConfigs_18

  <bb 6> [local count: 1073741824]:
  # NoConfigs_11 = PHI <NoConfigs_18(5), 0(8)>
  # DEBUG NoConfigs => NoConfigs_11
  # DEBUG BEGIN_STMT
  _8 = Mcu_PreCompileConfig.NoClkConfigs;
  if (_8 > NoConfigs_11)
    goto <bb 5>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  _9 = Mcu_PreCompileConfig.HwIPsConfigPtr;
  Mcu_Ipw_Init (_9);
  return;

}



;; Function Mcu_InitRamSection (Mcu_InitRamSection, funcdef_no=1, decl_uid=6597, cgraph_uid=2, symbol_order=4)

Modification phase of node Mcu_InitRamSection/4
Mcu_InitRamSection (Mcu_RamSectionType RamSection)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RamStatus => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Mcu_InitClock (Mcu_InitClock, funcdef_no=2, decl_uid=6599, cgraph_uid=3, symbol_order=5)

Modification phase of node Mcu_InitClock/5
Mcu_InitClock (Mcu_ClockType ClockSetting)
{
  const struct Mcu_ConfigType * Mcu_pConfigPtr.5_1;
  const struct Mcu_ClockConfigType[1] * _2;
  unsigned char _3;
  int _4;
  const struct Mcu_ClockConfigType * _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_pConfigPtr.5_1 = Mcu_pConfigPtr;
  _2 = Mcu_pConfigPtr.5_1->ClockConfigArrayPtr;
  _3 = Mcu_au8ClockConfigIds[ClockSetting_7(D)];
  _4 = (int) _3;
  _5 = &*_2[_4];
  Mcu_Ipw_InitClock (_5);
  # DEBUG BEGIN_STMT
  # DEBUG ClockStatus => 0
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Mcu_SetMode (Mcu_SetMode, funcdef_no=3, decl_uid=6601, cgraph_uid=4, symbol_order=6)

Modification phase of node Mcu_SetMode/6
Mcu_SetMode (Mcu_ModeType McuMode)
{
  const struct Mcu_ConfigType * Mcu_pConfigPtr.6_1;
  const struct Mcu_ModeConfigType[1] * _2;
  unsigned char _3;
  int _4;
  const struct Mcu_ModeConfigType * _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  Mcu_pConfigPtr.6_1 = Mcu_pConfigPtr;
  _2 = Mcu_pConfigPtr.6_1->ModeConfigArrayPtr;
  _3 = Mcu_au8ModeConfigIds[McuMode_8(D)];
  _4 = (int) _3;
  _5 = &*_2[_4];
  Mcu_Ipw_SetMode (_5);
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00 ();
  return;

}



;; Function Mcu_DistributePllClock (Mcu_DistributePllClock, funcdef_no=4, decl_uid=6603, cgraph_uid=5, symbol_order=7)

Modification phase of node Mcu_DistributePllClock/7
Mcu_DistributePllClock ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 1
  # DEBUG BEGIN_STMT
  Mcu_Ipw_DistributePllClock ();
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 0
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Mcu_GetPllStatus (Mcu_GetPllStatus, funcdef_no=5, decl_uid=6605, cgraph_uid=6, symbol_order=8)

Modification phase of node Mcu_GetPllStatus/8
Mcu_GetPllStatus ()
{
  Mcu_PllStatusType PllStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PllStatus_3 = Mcu_Ipw_GetPllStatus ();
  # DEBUG PllStatus => PllStatus_3
  # DEBUG BEGIN_STMT
  return PllStatus_3;

}



;; Function Mcu_GetResetReason (Mcu_GetResetReason, funcdef_no=6, decl_uid=6607, cgraph_uid=7, symbol_order=9)

Modification phase of node Mcu_GetResetReason/9
Mcu_GetResetReason ()
{
  Mcu_ResetType ResetReason;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ResetReason_3 = Mcu_Ipw_GetResetReason ();
  # DEBUG ResetReason => ResetReason_3
  # DEBUG BEGIN_STMT
  return ResetReason_3;

}



;; Function Mcu_GetResetRawValue (Mcu_GetResetRawValue, funcdef_no=7, decl_uid=6609, cgraph_uid=8, symbol_order=10)

Modification phase of node Mcu_GetResetRawValue/10
Mcu_GetResetRawValue ()
{
  Mcu_RawResetType RawResetValue;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RawResetValue_3 = Mcu_Ipw_GetResetRawValue ();
  # DEBUG RawResetValue => RawResetValue_3
  # DEBUG BEGIN_STMT
  return RawResetValue_3;

}



;; Function Mcu_SleepOnExit (Mcu_SleepOnExit, funcdef_no=8, decl_uid=6611, cgraph_uid=9, symbol_order=11)

Modification phase of node Mcu_SleepOnExit/11
Mcu_SleepOnExit (Mcu_SleepOnExitType SleepOnExit)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Mcu_Ipw_SleepOnExit (SleepOnExit_2(D));
  return;

}

