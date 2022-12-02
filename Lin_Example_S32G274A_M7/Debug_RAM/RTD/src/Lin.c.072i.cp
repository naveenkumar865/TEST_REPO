
IPA constant propagation start:
Determining dynamic type for call: TempReturn_6 = Lin_ChkParamFuncSendFrame (Channel_4(D), PduInfoPtr_5(D));
  Starting walk at: TempReturn_6 = Lin_ChkParamFuncSendFrame (Channel_4(D), PduInfoPtr_5(D));
  instance pointer: PduInfoPtr_5(D)  Outer instance pointer: PduInfoPtr_5(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Lin_CommonCheckingChannel.isra.0.part.0/25:
  Jump functions of caller  Lin_CommonCheckingChannel.isra.0/24:
    callsite  Lin_CommonCheckingChannel.isra.0/24 -> Lin_CommonCheckingChannel.isra.0.part.0/25 : 
  Jump functions of caller  Lin_Ipw_WakeUpInternal/23:
  Jump functions of caller  Lin_Ipw_WakeUp/22:
  Jump functions of caller  Lin_Ipw_SendFrame/21:
  Jump functions of caller  Lin_Ipw_GoToSleepInternal/20:
  Jump functions of caller  Lin_Ipw_GoToSleep/19:
  Jump functions of caller  Lin_Ipw_HardwareGetStatus/18:
  Jump functions of caller  Lin_Ipw_CheckWakeup/17:
  Jump functions of caller  Lin_Ipw_InitChannel/16:
  Jump functions of caller  Lin_WakeupInternal/14:
    callsite  Lin_WakeupInternal/14 -> Lin_CommonCheckingChannel.isra.0/24 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Lin_Wakeup/13:
    callsite  Lin_Wakeup/13 -> Lin_CommonCheckingChannel.isra.0/24 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Lin_SendFrame/12:
    callsite  Lin_SendFrame/12 -> Lin_ChkParamFuncSendFrame/6 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Lin_GoToSleepInternal/11:
    callsite  Lin_GoToSleepInternal/11 -> Lin_CommonCheckingChannel.isra.0/24 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Lin_GoToSleep/10:
    callsite  Lin_GoToSleep/10 -> Lin_CommonCheckingChannel.isra.0/24 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Lin_GetStatus/9:
    callsite  Lin_GetStatus/9 -> Lin_CommonCheckingChannel.isra.0/24 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Lin_CheckWakeup/8:
    callsite  Lin_CheckWakeup/8 -> Lin_CommonCheckingChannel.isra.0/24 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Lin_Init/7:
    callsite  Lin_Init/7 -> Lin_InitImplementation/4 : 
  Jump functions of caller  Lin_ChkParamFuncSendFrame/6:
    callsite  Lin_ChkParamFuncSendFrame/6 -> Lin_CommonCheckingChannel.isra.0/24 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Lin_InitImplementation/4:

 Propagating constants:

Not considering Lin_WakeupInternal for cloning; -fipa-cp-clone disabled.
Not considering Lin_Wakeup for cloning; -fipa-cp-clone disabled.
Not considering Lin_SendFrame for cloning; -fipa-cp-clone disabled.
Not considering Lin_GoToSleepInternal for cloning; -fipa-cp-clone disabled.
Not considering Lin_GoToSleep for cloning; -fipa-cp-clone disabled.
Not considering Lin_GetStatus for cloning; -fipa-cp-clone disabled.
Not considering Lin_CheckWakeup for cloning; -fipa-cp-clone disabled.
Not considering Lin_Init for cloning; -fipa-cp-clone disabled.

overall_size: 179, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Lin_CommonCheckingChannel.isra.0.part.0/25:
  Node: Lin_CommonCheckingChannel.isra.0/24:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Lin_WakeupInternal/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Lin_Wakeup/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Lin_SendFrame/12:
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
  Node: Lin_GoToSleepInternal/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Lin_GoToSleep/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Lin_GetStatus/9:
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
  Node: Lin_CheckWakeup/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Lin_Init/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Lin_ChkParamFuncSendFrame/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Lin_InitImplementation/4:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Lin_CommonCheckingChannel.isra.0.part.0/25 (Lin_CommonCheckingChannel.isra.0.part.0) @05f367e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Lin_apChannelConfigPtr/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Lin_CommonCheckingChannel.isra.0/24 (182536110 (estimated locally),0.17 per call) 
  Calls: 
Lin_CommonCheckingChannel.isra.0/24 (Lin_CommonCheckingChannel.isra.0) @05d16e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Lin_au8LinDrvStatus/2 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Lin_WakeupInternal/14 (1073741824 (estimated locally),1.00 per call) Lin_Wakeup/13 (1073741824 (estimated locally),1.00 per call) Lin_GoToSleepInternal/11 (1073741824 (estimated locally),1.00 per call) Lin_GoToSleep/10 (1073741823 (estimated locally),1.00 per call) Lin_GetStatus/9 (1073741823 (estimated locally),1.00 per call) Lin_CheckWakeup/8 (1073741824 (estimated locally),1.00 per call) Lin_ChkParamFuncSendFrame/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: Lin_CommonCheckingChannel.isra.0.part.0/25 (182536110 (estimated locally),0.17 per call) 
Lin_Ipw_WakeUpInternal/23 (Lin_Ipw_WakeUpInternal) @05ce4a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lin_WakeupInternal/14 (143434728 (estimated locally),0.13 per call) 
  Calls: 
Lin_Ipw_WakeUp/22 (Lin_Ipw_WakeUp) @05ce48c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lin_Wakeup/13 (143434728 (estimated locally),0.13 per call) 
  Calls: 
Lin_Ipw_SendFrame/21 (Lin_Ipw_SendFrame) @05ce4620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lin_SendFrame/12 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Lin_Ipw_GoToSleepInternal/20 (Lin_Ipw_GoToSleepInternal) @05ce4460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lin_GoToSleepInternal/11 (346397703 (estimated locally),0.32 per call) 
  Calls: 
Lin_Ipw_GoToSleep/19 (Lin_Ipw_GoToSleep) @05ce42a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lin_GoToSleep/10 (346397702 (estimated locally),0.32 per call) 
  Calls: 
Lin_Ipw_HardwareGetStatus/18 (Lin_Ipw_HardwareGetStatus) @05ce40e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lin_GetStatus/9 (124017180 (estimated locally),0.12 per call) 
  Calls: 
Lin_Ipw_CheckWakeup/17 (Lin_Ipw_CheckWakeup) @05c05540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lin_CheckWakeup/8 (180710749 (estimated locally),0.17 per call) 
  Calls: 
Lin_Ipw_InitChannel/16 (Lin_Ipw_InitChannel) @05c05ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Lin_InitImplementation/4 (37391180 (estimated locally),0.63 per call) 
  Calls: 
Lin_PBCfgVariantPredefined/15 (Lin_PBCfgVariantPredefined) @05cde2d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Lin_Init/7 (read)
  Availability: not_available
  Varpool flags: read-only
Lin_WakeupInternal/14 (Lin_WakeupInternal) @05c059a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Lin_au8LinChStatus/3 (read)Lin_au8LinChStatus/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lin_Ipw_WakeUpInternal/23 (143434728 (estimated locally),0.13 per call) Lin_CommonCheckingChannel.isra.0/24 (1073741824 (estimated locally),1.00 per call) 
Lin_Wakeup/13 (Lin_Wakeup) @05c05700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Lin_au8LinChStatus/3 (read)Lin_au8LinChStatus/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lin_Ipw_WakeUp/22 (143434728 (estimated locally),0.13 per call) Lin_CommonCheckingChannel.isra.0/24 (1073741824 (estimated locally),1.00 per call) 
Lin_SendFrame/12 (Lin_SendFrame) @05c05460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lin_Ipw_SendFrame/21 (524845004 (estimated locally),0.49 per call) Lin_ChkParamFuncSendFrame/6 (1073741824 (estimated locally),1.00 per call) 
Lin_GoToSleepInternal/11 (Lin_GoToSleepInternal) @05c051c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Lin_au8LinChStatus/3 (read)Lin_au8LinChStatus/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lin_Ipw_GoToSleepInternal/20 (346397703 (estimated locally),0.32 per call) Lin_CommonCheckingChannel.isra.0/24 (1073741824 (estimated locally),1.00 per call) 
Lin_GoToSleep/10 (Lin_GoToSleep) @05bfae00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Lin_au8LinChStatus/3 (read)Lin_au8LinChStatus/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Lin_Ipw_GoToSleep/19 (346397702 (estimated locally),0.32 per call) Lin_CommonCheckingChannel.isra.0/24 (1073741823 (estimated locally),1.00 per call) 
Lin_GetStatus/9 (Lin_GetStatus) @05bfa8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Lin_au8LinChStatus/3 (read)Lin_au8LinChStatus/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Lin_Ipw_HardwareGetStatus/18 (124017180 (estimated locally),0.12 per call) Lin_CommonCheckingChannel.isra.0/24 (1073741823 (estimated locally),1.00 per call) 
Lin_CheckWakeup/8 (Lin_CheckWakeup) @05bfa380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Lin_au8LinChStatus/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lin_Ipw_CheckWakeup/17 (180710749 (estimated locally),0.17 per call) Lin_CommonCheckingChannel.isra.0/24 (1073741824 (estimated locally),1.00 per call) 
Lin_Init/7 (Lin_Init) @05bfad20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Lin_PBCfgVariantPredefined/15 (read)Lin_apConfigPtr/0 (write)Lin_au8LinDrvStatus/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Lin_InitImplementation/4 (74410308 (estimated locally),0.07 per call) 
Lin_ChkParamFuncSendFrame/6 (Lin_ChkParamFuncSendFrame) @05bfaa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Lin_au8LinChStatus/3 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Lin_SendFrame/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: Lin_CommonCheckingChannel.isra.0/24 (1073741824 (estimated locally),1.00 per call) 
Lin_InitImplementation/4 (Lin_InitImplementation) @05bfa540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Lin_apConfigPtr/0 (read)Lin_apChannelConfigPtr/1 (write)Lin_au8LinChStatus/3 (write)
  Referring: 
  Availability: local
  Function flags: count:59055799 (estimated locally) body local optimize_size
  Called by: Lin_Init/7 (74410308 (estimated locally),0.07 per call) 
  Calls: Lin_Ipw_InitChannel/16 (37391180 (estimated locally),0.63 per call) 
Lin_au8LinChStatus/3 (Lin_au8LinChStatus) @05b01630
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Lin_Wakeup/13 (write)Lin_ChkParamFuncSendFrame/6 (read)Lin_GoToSleepInternal/11 (read)Lin_InitImplementation/4 (write)Lin_Wakeup/13 (read)Lin_CheckWakeup/8 (read)Lin_GetStatus/9 (read)Lin_GetStatus/9 (write)Lin_GoToSleepInternal/11 (write)Lin_GoToSleep/10 (read)Lin_GoToSleep/10 (write)Lin_WakeupInternal/14 (read)Lin_WakeupInternal/14 (write)
  Availability: available
  Varpool flags:
Lin_au8LinDrvStatus/2 (Lin_au8LinDrvStatus) @05b015a0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Lin_CommonCheckingChannel.isra.0/24 (read)Lin_Init/7 (write)
  Availability: available
  Varpool flags: initialized
Lin_apChannelConfigPtr/1 (Lin_apChannelConfigPtr) @05b01510
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Lin_InitImplementation/4 (write)Lin_CommonCheckingChannel.isra.0.part.0/25 (read)
  Availability: available
  Varpool flags:
Lin_apConfigPtr/0 (Lin_apConfigPtr) @05b01480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Lin_InitImplementation/4 (read)Lin_Init/7 (write)
  Availability: available
  Varpool flags:

;; Function Lin_CommonCheckingChannel.isra.0 (Lin_CommonCheckingChannel.isra.0, funcdef_no=11, decl_uid=6061, cgraph_uid=20, symbol_order=24)

Modification phase of node Lin_CommonCheckingChannel.isra.0/24
Lin_CommonCheckingChannel.isra.0 (const uint8 Channel)
{
  Std_ReturnType TempReturn;
  unsigned char _1;

  <bb 2> [local count: 1073741823]:
  # DEBUG FunctionalId s=> FunctionalId
  # DEBUG BEGIN_STMT
  # DEBUG TempReturn => 1
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Lin_au8LinDrvStatus[0];
  if (_1 != 2)
    goto <bb 5>; [66.00%]
  else
    goto <bb 3>; [34.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  if (Channel_2(D) != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG D#2 => Channel_2(D)
  TempReturn_5 = Lin_CommonCheckingChannel.isra.0.part.0 ();

  <bb 5> [local count: 1073741824]:
  # TempReturn_3 = PHI <1(2), 1(3), TempReturn_5(4)>
  # DEBUG TempReturn => TempReturn_3
  # DEBUG BEGIN_STMT
  return TempReturn_3;

}



;; Function Lin_Init (Lin_Init, funcdef_no=3, decl_uid=5852, cgraph_uid=4, symbol_order=7)

Modification phase of node Lin_Init/7
Lin_Init (const struct Lin_ConfigType * Config)
{
  const struct Lin_ConfigType * _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  if (Config_4(D) != 0B)
    goto <bb 6>; [70.00%]
  else
    goto <bb 3>; [30.00%]

  <bb 3> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  _1 = Lin_PBCfgVariantPredefined[0];
  if (_1 == 0B)
    goto <bb 6>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 4> [local count: 225485783]:
  _2 = _1->PartitionCoreId;
  if (_2 != 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 5>; [33.00%]

  <bb 5> [local count: 74410308]:
  # DEBUG BEGIN_STMT
  Lin_apConfigPtr[0] = _1;
  # DEBUG BEGIN_STMT
  Lin_InitImplementation ();
  # DEBUG BEGIN_STMT
  Lin_au8LinDrvStatus[0] = 2;

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function Lin_CheckWakeup (Lin_CheckWakeup, funcdef_no=4, decl_uid=5850, cgraph_uid=5, symbol_order=8)

Modification phase of node Lin_CheckWakeup/8
Lin_CheckWakeup (uint8 Channel)
{
  Std_ReturnType TempReturn;
  int _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 10
  TempReturn_8 = Lin_CommonCheckingChannel.isra.0 (Channel_7(D));
  # DEBUG TempReturn => TempReturn_8
  # DEBUG BEGIN_STMT
  if (TempReturn_8 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  # DEBUG TempReturn => 0
  # DEBUG BEGIN_STMT
  _1 = (int) Channel_7(D);
  _2 = Lin_au8LinChStatus[_1];
  _3 = _2 + 255;
  if (_3 <= 1)
    goto <bb 4>; [25.50%]
  else
    goto <bb 5>; [74.50%]

  <bb 4> [local count: 180710749]:
  # DEBUG BEGIN_STMT
  Lin_Ipw_CheckWakeup (Channel_7(D));
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073741824]:
  # TempReturn_4 = PHI <TempReturn_8(2), 0(3), 0(4)>
  # DEBUG TempReturn => TempReturn_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return TempReturn_4;

}



;; Function Lin_GetStatus (Lin_GetStatus, funcdef_no=5, decl_uid=5855, cgraph_uid=6, symbol_order=9)

Modification phase of node Lin_GetStatus/9
Lin_GetStatus (uint8 Channel, uint8 * * Lin_SduPtr)
{
  uint8 Lin_ChannelState;
  Lin_StatusType TempReturn;
  Std_ReturnType CheckChannel;
  int _1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TempReturn => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 8
  CheckChannel_6 = Lin_CommonCheckingChannel.isra.0 (Channel_5(D));
  # DEBUG CheckChannel => CheckChannel_6
  # DEBUG BEGIN_STMT
  if (CheckChannel_6 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  if (Lin_SduPtr_7(D) == 0B)
    goto <bb 8>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 4> [local count: 496068722]:
  # DEBUG BEGIN_STMT
  _1 = (int) Channel_5(D);
  Lin_ChannelState_8 = Lin_au8LinChStatus[_1];
  # DEBUG Lin_ChannelState => Lin_ChannelState_8
  # DEBUG BEGIN_STMT
  switch (Lin_ChannelState_8) <default: <L7> [25.00%], case 1: <L5> [25.00%], case 2: <L12> [25.00%], case 3: <L6> [25.00%]>

  <bb 5> [local count: 124017180]:
<L5>:
  # DEBUG BEGIN_STMT
  Lin_au8LinChStatus[_1] = 2;
  # DEBUG BEGIN_STMT
  # DEBUG TempReturn => 10
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 124017180]:
<L6>:
  # DEBUG BEGIN_STMT
  TempReturn_10 = Lin_Ipw_HardwareGetStatus (Channel_5(D), Lin_SduPtr_7(D));
  # DEBUG TempReturn => TempReturn_10
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 124017180]:
<L7>:
  # DEBUG BEGIN_STMT
  # DEBUG TempReturn => 0
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741824]:
  # TempReturn_2 = PHI <0(2), 0(3), 10(4), 10(5), TempReturn_10(6), 0(7)>
<L12>:
  # DEBUG TempReturn => TempReturn_2
  # DEBUG BEGIN_STMT
  return TempReturn_2;

}



;; Function Lin_GoToSleep (Lin_GoToSleep, funcdef_no=6, decl_uid=5860, cgraph_uid=7, symbol_order=10)

Modification phase of node Lin_GoToSleep/10
Lin_GoToSleep (uint8 Channel)
{
  Std_ReturnType TempReturn;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 6
  TempReturn_8 = Lin_CommonCheckingChannel.isra.0 (Channel_7(D));
  # DEBUG TempReturn => TempReturn_8
  # DEBUG BEGIN_STMT
  if (TempReturn_8 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  _1 = (int) Channel_7(D);
  _2 = Lin_au8LinChStatus[_1];
  if (_2 == 2)
    goto <bb 5>; [51.12%]
  else
    goto <bb 4>; [48.88%]

  <bb 4> [local count: 346397702]:
  # DEBUG BEGIN_STMT
  TempReturn_10 = Lin_Ipw_GoToSleep (Channel_7(D));
  # DEBUG TempReturn => TempReturn_10
  # DEBUG BEGIN_STMT
  TempReturn_3 = MIN_EXPR <1, TempReturn_10>;
  # DEBUG TempReturn => TempReturn_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Lin_au8LinChStatus[_1] = 1;

  <bb 5> [local count: 1073741824]:
  # TempReturn_4 = PHI <TempReturn_8(2), TempReturn_8(3), TempReturn_3(4)>
  # DEBUG TempReturn => TempReturn_4
  # DEBUG BEGIN_STMT
  return TempReturn_4;

}



;; Function Lin_GoToSleepInternal (Lin_GoToSleepInternal, funcdef_no=7, decl_uid=5862, cgraph_uid=8, symbol_order=11)

Modification phase of node Lin_GoToSleepInternal/11
Lin_GoToSleepInternal (uint8 Channel)
{
  Std_ReturnType TempReturn;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 9
  TempReturn_7 = Lin_CommonCheckingChannel.isra.0 (Channel_6(D));
  # DEBUG TempReturn => TempReturn_7
  # DEBUG BEGIN_STMT
  if (TempReturn_7 == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _1 = (int) Channel_6(D);
  _2 = Lin_au8LinChStatus[_1];
  if (_2 == 2)
    goto <bb 6>; [51.12%]
  else
    goto <bb 4>; [48.88%]

  <bb 4> [local count: 346397703]:
  # DEBUG BEGIN_STMT
  TempReturn_9 = Lin_Ipw_GoToSleepInternal (Channel_6(D));
  # DEBUG TempReturn => TempReturn_9
  # DEBUG BEGIN_STMT
  if (TempReturn_9 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 173198851]:
  # DEBUG BEGIN_STMT
  Lin_au8LinChStatus[_1] = 2;

  <bb 6> [local count: 1073741824]:
  # TempReturn_3 = PHI <TempReturn_7(2), TempReturn_7(3), 1(4), 0(5)>
  # DEBUG TempReturn => TempReturn_3
  # DEBUG BEGIN_STMT
  return TempReturn_3;

}



;; Function Lin_SendFrame (Lin_SendFrame, funcdef_no=8, decl_uid=5858, cgraph_uid=9, symbol_order=12)

Modification phase of node Lin_SendFrame/12
Lin_SendFrame (uint8 Channel, const struct Lin_PduType * PduInfoPtr)
{
  Std_ReturnType TempReturn;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TempReturn_6 = Lin_ChkParamFuncSendFrame (Channel_4(D), PduInfoPtr_5(D));
  # DEBUG TempReturn => TempReturn_6
  # DEBUG BEGIN_STMT
  if (TempReturn_6 == 1)
    goto <bb 4>; [51.12%]
  else
    goto <bb 3>; [48.88%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  TempReturn_8 = Lin_Ipw_SendFrame (Channel_4(D), PduInfoPtr_5(D));
  # DEBUG TempReturn => TempReturn_8
  # DEBUG BEGIN_STMT
  _9 = MIN_EXPR <1, TempReturn_8>;

  <bb 4> [local count: 1073741824]:
  # TempReturn_1 = PHI <TempReturn_6(2), _9(3)>
  # DEBUG TempReturn => TempReturn_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return TempReturn_1;

}



;; Function Lin_Wakeup (Lin_Wakeup, funcdef_no=9, decl_uid=5864, cgraph_uid=10, symbol_order=13)

Modification phase of node Lin_Wakeup/13
Lin_Wakeup (uint8 Channel)
{
  Std_ReturnType TempReturn;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 7
  TempReturn_7 = Lin_CommonCheckingChannel.isra.0 (Channel_6(D));
  # DEBUG TempReturn => TempReturn_7
  # DEBUG BEGIN_STMT
  if (TempReturn_7 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _1 = (int) Channel_6(D);
  _2 = Lin_au8LinChStatus[_1];
  if (_2 != 2)
    goto <bb 5>; [79.76%]
  else
    goto <bb 4>; [20.24%]

  <bb 4> [local count: 143434728]:
  # DEBUG BEGIN_STMT
  Lin_Ipw_WakeUp (Channel_6(D));
  # DEBUG BEGIN_STMT
  Lin_au8LinChStatus[_1] = 3;
  # DEBUG BEGIN_STMT
  # DEBUG TempReturn => 0

  <bb 5> [local count: 1073741824]:
  # TempReturn_3 = PHI <TempReturn_7(2), 1(3), 0(4)>
  # DEBUG TempReturn => TempReturn_3
  # DEBUG BEGIN_STMT
  return TempReturn_3;

}



;; Function Lin_WakeupInternal (Lin_WakeupInternal, funcdef_no=10, decl_uid=5866, cgraph_uid=11, symbol_order=14)

Modification phase of node Lin_WakeupInternal/14
Lin_WakeupInternal (uint8 Channel)
{
  Std_ReturnType TempReturn;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 11
  TempReturn_7 = Lin_CommonCheckingChannel.isra.0 (Channel_6(D));
  # DEBUG TempReturn => TempReturn_7
  # DEBUG BEGIN_STMT
  if (TempReturn_7 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _1 = (int) Channel_6(D);
  _2 = Lin_au8LinChStatus[_1];
  if (_2 != 2)
    goto <bb 5>; [79.76%]
  else
    goto <bb 4>; [20.24%]

  <bb 4> [local count: 143434728]:
  # DEBUG BEGIN_STMT
  Lin_Ipw_WakeUpInternal (Channel_6(D));
  # DEBUG BEGIN_STMT
  Lin_au8LinChStatus[_1] = 3;
  # DEBUG BEGIN_STMT
  # DEBUG TempReturn => 0

  <bb 5> [local count: 1073741824]:
  # TempReturn_3 = PHI <TempReturn_7(2), 1(3), 0(4)>
  # DEBUG TempReturn => TempReturn_3
  # DEBUG BEGIN_STMT
  return TempReturn_3;

}


