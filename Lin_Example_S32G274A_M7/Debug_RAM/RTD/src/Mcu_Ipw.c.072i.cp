
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_CM7_EnableSleepOnExit/18:
  Jump functions of caller  Power_Ip_CM7_DisableSleepOnExit/17:
  Jump functions of caller  Power_Ip_GetResetRawValue/16:
  Jump functions of caller  Power_Ip_GetResetReason/15:
  Jump functions of caller  Power_Ip_SetMode/14:
  Jump functions of caller  Clock_Ip_GetPllStatus/13:
  Jump functions of caller  Clock_Ip_DistributePll/12:
  Jump functions of caller  Clock_Ip_InitClock/11:
  Jump functions of caller  Power_Ip_Init/10:
  Jump functions of caller  Clock_Ip_InstallNotificationsCallback/9:
  Jump functions of caller  Mcu_Ipw_SleepOnExit/8:
  Jump functions of caller  ClockNotificationsCallback/7:
  Jump functions of caller  Mcu_Ipw_GetResetRawValue/6:
  Jump functions of caller  Mcu_Ipw_GetResetReason/5:
  Jump functions of caller  Mcu_Ipw_SetMode/4:
  Jump functions of caller  Mcu_Ipw_GetPllStatus/3:
  Jump functions of caller  Mcu_Ipw_DistributePllClock/2:
  Jump functions of caller  Mcu_Ipw_InitClock/1:
  Jump functions of caller  Mcu_Ipw_Init/0:

 Propagating constants:

Not considering Mcu_Ipw_SleepOnExit for cloning; -fipa-cp-clone disabled.
Not considering ClockNotificationsCallback for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_GetResetRawValue for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_GetResetReason for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_SetMode for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_GetPllStatus for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_DistributePllClock for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_InitClock for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Ipw_Init for cloning; -fipa-cp-clone disabled.

overall_size: 52, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: Mcu_Ipw_SleepOnExit/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ClockNotificationsCallback/7:
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
  Node: Mcu_Ipw_GetResetRawValue/6:
  Node: Mcu_Ipw_GetResetReason/5:
  Node: Mcu_Ipw_SetMode/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_Ipw_GetPllStatus/3:
  Node: Mcu_Ipw_DistributePllClock/2:
  Node: Mcu_Ipw_InitClock/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_Ipw_Init/0:
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

Power_Ip_CM7_EnableSleepOnExit/18 (Power_Ip_CM7_EnableSleepOnExit) @061c7ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_SleepOnExit/8 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Power_Ip_CM7_DisableSleepOnExit/17 (Power_Ip_CM7_DisableSleepOnExit) @061c7e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_SleepOnExit/8 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Power_Ip_GetResetRawValue/16 (Power_Ip_GetResetRawValue) @061c7b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_GetResetRawValue/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_GetResetReason/15 (Power_Ip_GetResetReason) @061c79a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_GetResetReason/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_SetMode/14 (Power_Ip_SetMode) @061c77e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_SetMode/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_GetPllStatus/13 (Clock_Ip_GetPllStatus) @061c7620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_GetPllStatus/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_DistributePll/12 (Clock_Ip_DistributePll) @061c7460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_DistributePllClock/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_InitClock/11 (Clock_Ip_InitClock) @061c72a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_InitClock/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_Init/10 (Power_Ip_Init) @061c70e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_Init/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_InstallNotificationsCallback/9 (Clock_Ip_InstallNotificationsCallback) @061c7000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Ipw_Init/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Ipw_SleepOnExit/8 (Mcu_Ipw_SleepOnExit) @061c32a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_CM7_EnableSleepOnExit/18 (536870913 (estimated locally),0.50 per call) Power_Ip_CM7_DisableSleepOnExit/17 (536870913 (estimated locally),0.50 per call) 
ClockNotificationsCallback/7 (ClockNotificationsCallback) @061c3ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: 
  Referring: Mcu_Ipw_Init/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Mcu_Ipw_GetResetRawValue/6 (Mcu_Ipw_GetResetRawValue) @061c3c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_GetResetRawValue/16 (1073741824 (estimated locally),1.00 per call) 
Mcu_Ipw_GetResetReason/5 (Mcu_Ipw_GetResetReason) @061c39a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_GetResetReason/15 (1073741824 (estimated locally),1.00 per call) 
Mcu_Ipw_SetMode/4 (Mcu_Ipw_SetMode) @061c3700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_SetMode/14 (1073741824 (estimated locally),1.00 per call) 
Mcu_Ipw_GetPllStatus/3 (Mcu_Ipw_GetPllStatus) @061c3460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_GetPllStatus/13 (1073741824 (estimated locally),1.00 per call) 
Mcu_Ipw_DistributePllClock/2 (Mcu_Ipw_DistributePllClock) @061c31c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_DistributePll/12 (1073741824 (estimated locally),1.00 per call) 
Mcu_Ipw_InitClock/1 (Mcu_Ipw_InitClock) @05fb1d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_InitClock/11 (1073741824 (estimated locally),1.00 per call) 
Mcu_Ipw_Init/0 (Mcu_Ipw_Init) @05fb1ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ClockNotificationsCallback/7 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_Init/10 (1073741824 (estimated locally),1.00 per call) Clock_Ip_InstallNotificationsCallback/9 (1073741824 (estimated locally),1.00 per call) 

;; Function ClockNotificationsCallback (ClockNotificationsCallback, funcdef_no=7, decl_uid=7057, cgraph_uid=8, symbol_order=7)

Modification phase of node ClockNotificationsCallback/7
ClockNotificationsCallback (Clock_Ip_NotificationType Notification, Clock_Ip_NameType ClockName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Mcu_Ipw_Init (Mcu_Ipw_Init, funcdef_no=0, decl_uid=6585, cgraph_uid=1, symbol_order=0)

Modification phase of node Mcu_Ipw_Init/0
Mcu_Ipw_Init (const struct Power_Ip_HwIPsConfigType * HwIPsConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_InstallNotificationsCallback (ClockNotificationsCallback);
  # DEBUG BEGIN_STMT
  Power_Ip_Init (HwIPsConfigPtr_3(D));
  return;

}



;; Function Mcu_Ipw_InitClock (Mcu_Ipw_InitClock, funcdef_no=1, decl_uid=6589, cgraph_uid=2, symbol_order=1)

Modification phase of node Mcu_Ipw_InitClock/1
Mcu_Ipw_InitClock (const struct Mcu_ClockConfigType * ClockConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_InitClock (ClockConfigPtr_2(D));
  return;

}



;; Function Mcu_Ipw_DistributePllClock (Mcu_Ipw_DistributePllClock, funcdef_no=2, decl_uid=6591, cgraph_uid=3, symbol_order=2)

Modification phase of node Mcu_Ipw_DistributePllClock/2
Mcu_Ipw_DistributePllClock ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_DistributePll ();
  return;

}



;; Function Mcu_Ipw_GetPllStatus (Mcu_Ipw_GetPllStatus, funcdef_no=3, decl_uid=6593, cgraph_uid=4, symbol_order=3)

Modification phase of node Mcu_Ipw_GetPllStatus/3
Mcu_Ipw_GetPllStatus ()
{
  Mcu_PllStatusType PllStatus;
  <unnamed type> _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_GetPllStatus ();
  switch (_1) <default: <L2> [33.33%], case 0: <L6> [33.33%], case 1: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 204
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L2>:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 90
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
  # PllStatus_2 = PHI <51(2), 204(3), 90(4)>
<L6>:
  # DEBUG PllStatus => PllStatus_2
  # DEBUG BEGIN_STMT
  return PllStatus_2;

}



;; Function Mcu_Ipw_SetMode (Mcu_Ipw_SetMode, funcdef_no=4, decl_uid=6587, cgraph_uid=5, symbol_order=4)

Modification phase of node Mcu_Ipw_SetMode/4
Mcu_Ipw_SetMode (const struct Mcu_ModeConfigType * ModeConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_SetMode (ModeConfigPtr_2(D));
  return;

}



;; Function Mcu_Ipw_GetResetReason (Mcu_Ipw_GetResetReason, funcdef_no=5, decl_uid=6595, cgraph_uid=6, symbol_order=5)

Modification phase of node Mcu_Ipw_GetResetReason/5
Mcu_Ipw_GetResetReason ()
{
  Power_Ip_ResetType ResetReason;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ResetReason => 28
  # DEBUG BEGIN_STMT
  ResetReason_3 = Power_Ip_GetResetReason ();
  # DEBUG ResetReason => ResetReason_3
  # DEBUG BEGIN_STMT
  return ResetReason_3;

}



;; Function Mcu_Ipw_GetResetRawValue (Mcu_Ipw_GetResetRawValue, funcdef_no=6, decl_uid=6597, cgraph_uid=7, symbol_order=6)

Modification phase of node Mcu_Ipw_GetResetRawValue/6
Mcu_Ipw_GetResetRawValue ()
{
  Power_Ip_RawResetType ResetReason;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ResetReason_3 = Power_Ip_GetResetRawValue ();
  # DEBUG ResetReason => ResetReason_3
  # DEBUG BEGIN_STMT
  return ResetReason_3;

}



;; Function Mcu_Ipw_SleepOnExit (Mcu_Ipw_SleepOnExit, funcdef_no=8, decl_uid=6599, cgraph_uid=9, symbol_order=8)

Modification phase of node Mcu_Ipw_SleepOnExit/8
Mcu_Ipw_SleepOnExit (Mcu_SleepOnExitType SleepOnExit)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (SleepOnExit_2(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Power_Ip_CM7_DisableSleepOnExit ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Power_Ip_CM7_EnableSleepOnExit ();

  <bb 5> [local count: 1073741824]:
  return;

}


