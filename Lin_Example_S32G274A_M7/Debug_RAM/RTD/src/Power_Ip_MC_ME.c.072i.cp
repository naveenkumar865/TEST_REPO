
IPA constant propagation start:
Determining dynamic type for call: Power_Ip_MC_ME_ConfigurePartitionOutputSafe (TempPartitionConfig_12);
  Starting walk at: Power_Ip_MC_ME_ConfigurePartitionOutputSafe (TempPartitionConfig_12);
  instance pointer: TempPartitionConfig_12  Outer instance pointer: &*_1[_2] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigurePartitionOutputSafe (TempPartitionConfig_12);
Determining dynamic type for call: Power_Ip_MC_ME_ConfigurePartitionOutputSafe (TempPartitionConfig_12);
  Starting walk at: Power_Ip_MC_ME_ConfigurePartitionOutputSafe (TempPartitionConfig_12);
  instance pointer: TempPartitionConfig_12  Outer instance pointer: &*_1[_2] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigurePartitionOutputSafe (TempPartitionConfig_12);
Determining dynamic type for call: Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);
  Starting walk at: Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);
  instance pointer: TempPartitionConfig_12  Outer instance pointer: &*_1[_2] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);
Determining dynamic type for call: Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);
  Starting walk at: Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);
  instance pointer: TempPartitionConfig_12  Outer instance pointer: &*_1[_2] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);
Determining dynamic type for call: Power_Ip_MC_ME_ConfigureCorePartition1 (_20, _21);
  Starting walk at: Power_Ip_MC_ME_ConfigureCorePartition1 (_20, _21);
  instance pointer: _20  Outer instance pointer: &*_17[_18] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCore (_13, _14);
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCOFB (_7, _8);
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCorePartition1 (_20, _21);
Determining dynamic type for call: Power_Ip_MC_ME_ConfigureCore (_13, _14);
  Starting walk at: Power_Ip_MC_ME_ConfigureCore (_13, _14);
  instance pointer: _13  Outer instance pointer: &*_10[_11] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCOFB (_7, _8);
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCorePartition1 (_20, _21);
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCore (_13, _14);
Determining dynamic type for call: Power_Ip_MC_ME_ConfigureCOFB (_7, _8);
  Starting walk at: Power_Ip_MC_ME_ConfigureCOFB (_7, _8);
  instance pointer: _7  Outer instance pointer: &*_4[_5] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCore (_13, _14);
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCorePartition1 (_20, _21);
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCOFB (_7, _8);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_MC_ME_ConfigurePartitionOutputSafe.part.0/21:
  Jump functions of caller  Power_Ip_MC_ME_ConfigurePartitionClock.part.0/20:
  Jump functions of caller  Power_Ip_ReportPowerErrors/19:
  Jump functions of caller  Power_Ip_TimeoutExpired/18:
  Jump functions of caller  Power_Ip_StartTimeout/17:
  Jump functions of caller  Power_Ip_MC_ME_SocTriggerResetEvent/16:
    callsite  Power_Ip_MC_ME_SocTriggerResetEvent/16 -> Power_Ip_MC_ME_TriggerModeUpdate/2 : 
  Jump functions of caller  Power_Ip_MC_ME_DisablePartitionOutputSafe/15:
    callsite  Power_Ip_MC_ME_DisablePartitionOutputSafe/15 -> Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_EnablePartitionOutputSafe/14:
    callsite  Power_Ip_MC_ME_EnablePartitionOutputSafe/14 -> Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_DisablePartitionClock/13:
    callsite  Power_Ip_MC_ME_DisablePartitionClock/13 -> Power_Ip_MC_ME_ConfigurePartitionClock/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_EnablePartitionClock/12:
    callsite  Power_Ip_MC_ME_EnablePartitionClock/12 -> Power_Ip_MC_ME_ConfigurePartitionClock/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_ConfigCoreCOFBClock/11:
    callsite  Power_Ip_MC_ME_ConfigCoreCOFBClock/11 -> Power_Ip_MC_ME_ConfigureCorePartition1/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Power_Ip_MC_ME_ConfigCoreCOFBClock/11 -> Power_Ip_MC_ME_ConfigureCore/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Power_Ip_MC_ME_ConfigCoreCOFBClock/11 -> Power_Ip_MC_ME_ConfigureCOFB/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_ConfigureCorePartition1/10:
    callsite  Power_Ip_MC_ME_ConfigureCorePartition1/10 -> Power_Ip_MC_ME_TriggerCoreUpdate/5 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_ConfigureCore/9:
    callsite  Power_Ip_MC_ME_ConfigureCore/9 -> Power_Ip_MC_ME_TriggerCoreUpdate/5 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_ConfigureCOFB/8:
    callsite  Power_Ip_MC_ME_ConfigureCOFB/8 -> Power_Ip_MC_ME_TriggerCofbUpdate/4 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7:
    callsite  Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 -> Power_Ip_MC_ME_ConfigurePartitionOutputSafe.part.0/21 : 
    callsite  Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 -> Power_Ip_MC_ME_TriggerPartitionUpdate/3 : 
       param 0: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_ConfigurePartitionClock/6:
    callsite  Power_Ip_MC_ME_ConfigurePartitionClock/6 -> Power_Ip_MC_ME_ConfigurePartitionClock.part.0/20 : 
    callsite  Power_Ip_MC_ME_ConfigurePartitionClock/6 -> Power_Ip_MC_ME_TriggerPartitionUpdate/3 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_TriggerCoreUpdate/5:
    callsite  Power_Ip_MC_ME_TriggerCoreUpdate/5 -> Power_Ip_MC_ME_WriteControlKeys/1 : 
  Jump functions of caller  Power_Ip_MC_ME_TriggerCofbUpdate/4:
    callsite  Power_Ip_MC_ME_TriggerCofbUpdate/4 -> Power_Ip_MC_ME_WriteControlKeys/1 : 
  Jump functions of caller  Power_Ip_MC_ME_TriggerPartitionUpdate/3:
    callsite  Power_Ip_MC_ME_TriggerPartitionUpdate/3 -> Power_Ip_MC_ME_WriteControlKeys/1 : 
  Jump functions of caller  Power_Ip_MC_ME_TriggerModeUpdate/2:
    callsite  Power_Ip_MC_ME_TriggerModeUpdate/2 -> Power_Ip_MC_ME_WriteControlKeys/1 : 
  Jump functions of caller  Power_Ip_MC_ME_WriteControlKeys/1:

 Propagating constants:

Not considering Power_Ip_MC_ME_SocTriggerResetEvent for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_MC_ME_DisablePartitionOutputSafe for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_MC_ME_EnablePartitionOutputSafe for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_MC_ME_DisablePartitionClock for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_MC_ME_EnablePartitionClock for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_MC_ME_ConfigCoreCOFBClock for cloning; -fipa-cp-clone disabled.

overall_size: 397, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_MC_ME_ConfigurePartitionClock.part.0/20:
  Node: Power_Ip_MC_ME_SocTriggerResetEvent/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_MC_ME_DisablePartitionOutputSafe/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_MC_ME_EnablePartitionOutputSafe/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_MC_ME_DisablePartitionClock/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_MC_ME_EnablePartitionClock/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_MC_ME_ConfigCoreCOFBClock/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_MC_ME_ConfigureCorePartition1/10:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const struct Power_Ip_MC_ME_CoreConfigType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Power_Ip_MC_ME_ConfigureCore/9:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const struct Power_Ip_MC_ME_CoreConfigType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Power_Ip_MC_ME_ConfigureCOFB/8:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const struct Power_Ip_MC_ME_CofbConfigType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Power_Ip_MC_ME_ConfigurePartitionClock/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Power_Ip_MC_ME_TriggerCoreUpdate/5:
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
  Node: Power_Ip_MC_ME_TriggerCofbUpdate/4:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Power_Ip_MC_ME_TriggerPartitionUpdate/3:
    param [0]: 1 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
               4 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x4, mask = 0x5
         uint32 [1, 4]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Power_Ip_MC_ME_TriggerModeUpdate/2:
  Node: Power_Ip_MC_ME_WriteControlKeys/1:

IPA decision stage:

Propagated bits info for function Power_Ip_MC_ME_TriggerPartitionUpdate/3:
 param 0: value = 0x4, mask = 0x5

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Power_Ip_MC_ME_ConfigurePartitionOutputSafe.part.0/21 (Power_Ip_MC_ME_ConfigurePartitionOutputSafe.part.0) @060f40e0
  Type: function definition analyzed alias
  Visibility: prevailing_def_ironly artificial
  References: Power_Ip_MC_ME_ConfigurePartitionClock.part.0/20 (alias)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 local icf_merged split_part optimize_size
  Called by: Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 (37904965 (estimated locally),0.11 per call) 
  Calls: 
Power_Ip_MC_ME_ConfigurePartitionClock.part.0/20 (Power_Ip_MC_ME_ConfigurePartitionClock.part.0) @06017a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: Power_Ip_MC_ME_ConfigurePartitionOutputSafe.part.0/21 (alias)
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local icf_merged split_part optimize_size
  Called by: Power_Ip_MC_ME_ConfigurePartitionClock/6 (37904965 (estimated locally),0.11 per call) 
  Calls: Power_Ip_ReportPowerErrors/19 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_ReportPowerErrors/19 (Power_Ip_ReportPowerErrors) @05f20700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_MC_ME_ConfigurePartitionClock.part.0/20 (1073741824 (estimated locally),1.00 per call) Power_Ip_MC_ME_ConfigureCorePartition1/10 (37904965 (estimated locally),0.18 per call) Power_Ip_MC_ME_ConfigureCore/9 (25017277 (estimated locally),0.07 per call) Power_Ip_MC_ME_ConfigureCore/9 (37904965 (estimated locally),0.11 per call) Power_Ip_MC_ME_ConfigureCOFB/8 (37904965 (estimated locally),0.16 per call) 
  Calls: 
Power_Ip_TimeoutExpired/18 (Power_Ip_TimeoutExpired) @05f20620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 (1073741824 (estimated locally),3.08 per call) Power_Ip_MC_ME_ConfigurePartitionClock/6 (1073741824 (estimated locally),3.08 per call) Power_Ip_MC_ME_ConfigureCorePartition1/10 (1073741824 (estimated locally),5.21 per call) Power_Ip_MC_ME_ConfigureCore/9 (708669603 (estimated locally),2.04 per call) Power_Ip_MC_ME_ConfigureCore/9 (1073741824 (estimated locally),3.08 per call) Power_Ip_MC_ME_ConfigureCOFB/8 (1073741824 (estimated locally),4.57 per call) 
  Calls: 
Power_Ip_StartTimeout/17 (Power_Ip_StartTimeout) @05f20540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 (114863532 (estimated locally),0.33 per call) Power_Ip_MC_ME_ConfigurePartitionClock/6 (114863532 (estimated locally),0.33 per call) Power_Ip_MC_ME_ConfigureCorePartition1/10 (114863532 (estimated locally),0.56 per call) Power_Ip_MC_ME_ConfigureCore/9 (75809931 (estimated locally),0.22 per call) Power_Ip_MC_ME_ConfigureCore/9 (114863532 (estimated locally),0.33 per call) Power_Ip_MC_ME_ConfigureCOFB/8 (114863532 (estimated locally),0.49 per call) 
  Calls: 
Power_Ip_MC_ME_SocTriggerResetEvent/16 (Power_Ip_MC_ME_SocTriggerResetEvent) @05f0ed20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_pxMC_ME/0 (read)Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_ME_TriggerModeUpdate/2 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_DisablePartitionOutputSafe/15 (Power_Ip_MC_ME_DisablePartitionOutputSafe) @05f0e2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748364 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 (70866960 (estimated locally),0.33 per call) 
Power_Ip_MC_ME_EnablePartitionOutputSafe/14 (Power_Ip_MC_ME_EnablePartitionOutputSafe) @05f0eee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748364 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 (70866960 (estimated locally),0.33 per call) 
Power_Ip_MC_ME_DisablePartitionClock/13 (Power_Ip_MC_ME_DisablePartitionClock) @05f0ec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748364 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_ME_ConfigurePartitionClock/6 (70866960 (estimated locally),0.33 per call) 
Power_Ip_MC_ME_EnablePartitionClock/12 (Power_Ip_MC_ME_EnablePartitionClock) @05f0e9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:214748364 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_ME_ConfigurePartitionClock/6 (70866960 (estimated locally),0.33 per call) 
Power_Ip_MC_ME_ConfigCoreCOFBClock/11 (Power_Ip_MC_ME_ConfigCoreCOFBClock) @05f0e700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:109362598 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_ME_ConfigureCorePartition1/10 (50457275 (estimated locally),0.46 per call) Power_Ip_MC_ME_ConfigureCore/9 (315357970 (estimated locally),2.88 per call) Power_Ip_MC_ME_ConfigureCOFB/8 (315357974 (estimated locally),2.88 per call) 
Power_Ip_MC_ME_ConfigureCorePartition1/10 (Power_Ip_MC_ME_ConfigureCorePartition1) @05f0e460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:205922431 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_ConfigCoreCOFBClock/11 (50457275 (estimated locally),0.46 per call) 
  Calls: Power_Ip_ReportPowerErrors/19 (37904965 (estimated locally),0.18 per call) Power_Ip_TimeoutExpired/18 (1073741824 (estimated locally),5.21 per call) Power_Ip_StartTimeout/17 (114863532 (estimated locally),0.56 per call) Power_Ip_MC_ME_TriggerCoreUpdate/5 (114863532 (estimated locally),0.56 per call) 
Power_Ip_MC_ME_ConfigureCore/9 (Power_Ip_MC_ME_ConfigureCore) @05f0e1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)Power_Ip_pxMC_ME/0 (read)Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:348071309 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_ConfigCoreCOFBClock/11 (315357970 (estimated locally),2.88 per call) 
  Calls: Power_Ip_ReportPowerErrors/19 (25017277 (estimated locally),0.07 per call) Power_Ip_TimeoutExpired/18 (708669603 (estimated locally),2.04 per call) Power_Ip_StartTimeout/17 (75809931 (estimated locally),0.22 per call) Power_Ip_MC_ME_TriggerCoreUpdate/5 (75809931 (estimated locally),0.22 per call) Power_Ip_ReportPowerErrors/19 (37904965 (estimated locally),0.11 per call) Power_Ip_TimeoutExpired/18 (1073741824 (estimated locally),3.08 per call) Power_Ip_StartTimeout/17 (114863532 (estimated locally),0.33 per call) 
Power_Ip_MC_ME_ConfigureCOFB/8 (Power_Ip_MC_ME_ConfigureCOFB) @05f04ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:234990859 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_ConfigCoreCOFBClock/11 (315357974 (estimated locally),2.88 per call) 
  Calls: Power_Ip_ReportPowerErrors/19 (37904965 (estimated locally),0.16 per call) Power_Ip_TimeoutExpired/18 (1073741824 (estimated locally),4.57 per call) Power_Ip_StartTimeout/17 (114863532 (estimated locally),0.49 per call) Power_Ip_MC_ME_TriggerCofbUpdate/4 (234990859 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 (Power_Ip_MC_ME_ConfigurePartitionOutputSafe) @05f049a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:348071309 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_DisablePartitionOutputSafe/15 (70866960 (estimated locally),0.33 per call) Power_Ip_MC_ME_EnablePartitionOutputSafe/14 (70866960 (estimated locally),0.33 per call) 
  Calls: Power_Ip_MC_ME_ConfigurePartitionOutputSafe.part.0/21 (37904965 (estimated locally),0.11 per call) Power_Ip_TimeoutExpired/18 (1073741824 (estimated locally),3.08 per call) Power_Ip_StartTimeout/17 (114863532 (estimated locally),0.33 per call) Power_Ip_MC_ME_TriggerPartitionUpdate/3 (114863532 (estimated locally),0.33 per call) 
Power_Ip_MC_ME_ConfigurePartitionClock/6 (Power_Ip_MC_ME_ConfigurePartitionClock) @05f04380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:348071309 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_DisablePartitionClock/13 (70866960 (estimated locally),0.33 per call) Power_Ip_MC_ME_EnablePartitionClock/12 (70866960 (estimated locally),0.33 per call) 
  Calls: Power_Ip_MC_ME_ConfigurePartitionClock.part.0/20 (37904965 (estimated locally),0.11 per call) Power_Ip_TimeoutExpired/18 (1073741824 (estimated locally),3.08 per call) Power_Ip_StartTimeout/17 (114863532 (estimated locally),0.33 per call) Power_Ip_MC_ME_TriggerPartitionUpdate/3 (114863532 (estimated locally),0.33 per call) 
Power_Ip_MC_ME_TriggerCoreUpdate/5 (Power_Ip_MC_ME_TriggerCoreUpdate) @05f04e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_ConfigureCorePartition1/10 (114863532 (estimated locally),0.56 per call) Power_Ip_MC_ME_ConfigureCore/9 (75809931 (estimated locally),0.22 per call) 
  Calls: Power_Ip_MC_ME_WriteControlKeys/1 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_TriggerCofbUpdate/4 (Power_Ip_MC_ME_TriggerCofbUpdate) @05f04b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_ConfigureCOFB/8 (234990859 (estimated locally),1.00 per call) 
  Calls: Power_Ip_MC_ME_WriteControlKeys/1 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_TriggerPartitionUpdate/3 (Power_Ip_MC_ME_TriggerPartitionUpdate) @05f048c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 (114863532 (estimated locally),0.33 per call) Power_Ip_MC_ME_ConfigurePartitionClock/6 (114863532 (estimated locally),0.33 per call) 
  Calls: Power_Ip_MC_ME_WriteControlKeys/1 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_TriggerModeUpdate/2 (Power_Ip_MC_ME_TriggerModeUpdate) @05f04620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_SocTriggerResetEvent/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: Power_Ip_MC_ME_WriteControlKeys/1 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_WriteControlKeys/1 (Power_Ip_MC_ME_WriteControlKeys) @05f042a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_TriggerCoreUpdate/5 (1073741824 (estimated locally),1.00 per call) Power_Ip_MC_ME_TriggerCofbUpdate/4 (1073741824 (estimated locally),1.00 per call) Power_Ip_MC_ME_TriggerPartitionUpdate/3 (1073741824 (estimated locally),1.00 per call) Power_Ip_MC_ME_TriggerModeUpdate/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_pxMC_ME/0 (Power_Ip_pxMC_ME) @05e33ea0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Power_Ip_MC_ME_ConfigureCorePartition1/10 (read)Power_Ip_MC_ME_TriggerCofbUpdate/4 (read)Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 (read)Power_Ip_MC_ME_TriggerModeUpdate/2 (read)Power_Ip_MC_ME_ConfigurePartitionClock/6 (read)Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7 (read)Power_Ip_MC_ME_ConfigurePartitionClock/6 (read)Power_Ip_MC_ME_ConfigureCore/9 (read)Power_Ip_MC_ME_TriggerCoreUpdate/5 (read)Power_Ip_MC_ME_ConfigureCorePartition1/10 (read)Power_Ip_MC_ME_TriggerPartitionUpdate/3 (read)Power_Ip_MC_ME_ConfigureCOFB/8 (read)Power_Ip_MC_ME_ConfigureCOFB/8 (read)Power_Ip_MC_ME_WriteControlKeys/1 (read)Power_Ip_MC_ME_ConfigureCore/9 (read)Power_Ip_MC_ME_ConfigureCore/9 (read)Power_Ip_MC_ME_SocTriggerResetEvent/16 (read)Power_Ip_MC_ME_SocTriggerResetEvent/16 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Power_Ip_MC_ME_WriteControlKeys (Power_Ip_MC_ME_WriteControlKeys, funcdef_no=0, decl_uid=6193, cgraph_uid=1, symbol_order=1)

Modification phase of node Power_Ip_MC_ME_WriteControlKeys/1
Power_Ip_MC_ME_WriteControlKeys ()
{
  struct Power_Ip_MC_ME_Type * Power_Ip_pxMC_ME.5_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.5_1 = Power_Ip_pxMC_ME;
  Power_Ip_pxMC_ME.5_1->CTL_KEY ={v} 23280;
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.5_1->CTL_KEY ={v} 42255;
  return;

}



;; Function Power_Ip_MC_ME_ConfigurePartitionOutputSafe (Power_Ip_MC_ME_ConfigurePartitionOutputSafe, funcdef_no=6, decl_uid=6207, cgraph_uid=7, symbol_order=7)

Modification phase of node Power_Ip_MC_ME_ConfigurePartitionOutputSafe/7
Power_Ip_MC_ME_ConfigurePartitionOutputSafe (const struct Power_Ip_MC_ME_PartitionConfigType * PartitionConfigPtr)
{
  uint8 PartitionIndex;
  boolean TimeoutOccurred;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  uint32 PartitionStatus;
  uint32 PartitionTriggerMask;
  uint32 PartitionConfig;
  uint32 TempValue;
  long unsigned int _1;
  struct Power_Ip_MC_ME_Type * Power_Ip_pxMC_ME.24_2;
  int _3;
  long unsigned int _4;
  long unsigned int TimeoutTicks.26_7;
  struct Power_Ip_MC_ME_Type * Power_Ip_pxMC_ME.27_8;
  long unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  # DEBUG TempValue => 0
  # DEBUG BEGIN_STMT
  PartitionConfig_15 = PartitionConfigPtr_14(D)->PartitionPconfRegValue;
  # DEBUG PartitionConfig => PartitionConfig_15
  # DEBUG BEGIN_STMT
  PartitionTriggerMask_16 = PartitionConfigPtr_14(D)->PartitionTriggerMask;
  # DEBUG PartitionTriggerMask => PartitionTriggerMask_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  PartitionIndex_17 = PartitionConfigPtr_14(D)->PartitionIndex;
  # DEBUG PartitionIndex => PartitionIndex_17
  # DEBUG BEGIN_STMT
  _1 = PartitionTriggerMask_16 & 4;
  if (_1 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.24_2 = Power_Ip_pxMC_ME;
  _3 = (int) PartitionIndex_17;
  TempValue_18 ={v} Power_Ip_pxMC_ME.24_2->McMePrtnArray[_3].PRTN_PCONF;
  # DEBUG TempValue => TempValue_18
  # DEBUG BEGIN_STMT
  TempValue_19 = TempValue_18 & 4294967291;
  # DEBUG TempValue => TempValue_19
  # DEBUG BEGIN_STMT
  _4 = PartitionConfig_15 & 4;
  TempValue_20 = _4 | TempValue_19;
  # DEBUG TempValue => TempValue_20
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.24_2->McMePrtnArray[_3].PRTN_PCONF ={v} TempValue_20;
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_TriggerPartitionUpdate (4, PartitionIndex_17);
  # DEBUG BEGIN_STMT
  Power_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks.26_7 = TimeoutTicks;
  TimeoutOccurred_25 = Power_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.26_7);
  # DEBUG TimeoutOccurred => TimeoutOccurred_25
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.27_8 = Power_Ip_pxMC_ME;
  PartitionStatus_26 ={v} Power_Ip_pxMC_ME.27_8->McMePrtnArray[_3].PRTN_STAT;
  # DEBUG PartitionStatus => PartitionStatus_26
  # DEBUG BEGIN_STMT
  _9 = PartitionConfig_15 ^ PartitionStatus_26;
  _10 = _9 & 4;
  if (_10 != 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (TimeoutOccurred_25 != 0)
    goto <bb 6>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 9> [local count: 958878294]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_5 = PHI <TimeoutOccurred_25(4), TimeoutOccurred_25(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_5 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 37904965]:
  # DEBUG D#4 => PartitionConfigPtr_14(D)
  Power_Ip_MC_ME_ConfigurePartitionOutputSafe.part.0 ();

  <bb 8> [local count: 348071309]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Power_Ip_MC_ME_ConfigurePartitionClock (Power_Ip_MC_ME_ConfigurePartitionClock, funcdef_no=5, decl_uid=6205, cgraph_uid=6, symbol_order=6)

Modification phase of node Power_Ip_MC_ME_ConfigurePartitionClock/6
Power_Ip_MC_ME_ConfigurePartitionClock (const struct Power_Ip_MC_ME_PartitionConfigType * PartitionConfigPtr)
{
  uint8 PartitionIndex;
  boolean TimeoutOccurred;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  uint32 PartitionStatus;
  uint32 PartitionTriggerMask;
  uint32 PartitionConfig;
  uint32 TempValue;
  long unsigned int _1;
  struct Power_Ip_MC_ME_Type * Power_Ip_pxMC_ME.18_2;
  int _3;
  long unsigned int _4;
  long unsigned int TimeoutTicks.20_7;
  struct Power_Ip_MC_ME_Type * Power_Ip_pxMC_ME.21_8;
  long unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  # DEBUG TempValue => 0
  # DEBUG BEGIN_STMT
  PartitionConfig_15 = PartitionConfigPtr_14(D)->PartitionPconfRegValue;
  # DEBUG PartitionConfig => PartitionConfig_15
  # DEBUG BEGIN_STMT
  PartitionTriggerMask_16 = PartitionConfigPtr_14(D)->PartitionTriggerMask;
  # DEBUG PartitionTriggerMask => PartitionTriggerMask_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  PartitionIndex_17 = PartitionConfigPtr_14(D)->PartitionIndex;
  # DEBUG PartitionIndex => PartitionIndex_17
  # DEBUG BEGIN_STMT
  _1 = PartitionTriggerMask_16 & 1;
  if (_1 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.18_2 = Power_Ip_pxMC_ME;
  _3 = (int) PartitionIndex_17;
  TempValue_18 ={v} Power_Ip_pxMC_ME.18_2->McMePrtnArray[_3].PRTN_PCONF;
  # DEBUG TempValue => TempValue_18
  # DEBUG BEGIN_STMT
  TempValue_19 = TempValue_18 & 4294967294;
  # DEBUG TempValue => TempValue_19
  # DEBUG BEGIN_STMT
  _4 = PartitionConfig_15 & 1;
  TempValue_20 = _4 | TempValue_19;
  # DEBUG TempValue => TempValue_20
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.18_2->McMePrtnArray[_3].PRTN_PCONF ={v} TempValue_20;
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_TriggerPartitionUpdate (1, PartitionIndex_17);
  # DEBUG BEGIN_STMT
  Power_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks.20_7 = TimeoutTicks;
  TimeoutOccurred_25 = Power_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.20_7);
  # DEBUG TimeoutOccurred => TimeoutOccurred_25
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.21_8 = Power_Ip_pxMC_ME;
  PartitionStatus_26 ={v} Power_Ip_pxMC_ME.21_8->McMePrtnArray[_3].PRTN_STAT;
  # DEBUG PartitionStatus => PartitionStatus_26
  # DEBUG BEGIN_STMT
  _9 = PartitionConfig_15 ^ PartitionStatus_26;
  _10 = _9 & 1;
  if (_10 != 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (TimeoutOccurred_25 != 0)
    goto <bb 6>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 9> [local count: 958878294]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_5 = PHI <TimeoutOccurred_25(4), TimeoutOccurred_25(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_5 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 37904965]:
  # DEBUG D#2 => PartitionConfigPtr_14(D)
  Power_Ip_MC_ME_ConfigurePartitionClock.part.0 ();

  <bb 8> [local count: 348071309]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Power_Ip_MC_ME_ConfigCoreCOFBClock (Power_Ip_MC_ME_ConfigCoreCOFBClock, funcdef_no=10, decl_uid=6170, cgraph_uid=11, symbol_order=11)

Modification phase of node Power_Ip_MC_ME_ConfigCoreCOFBClock/11
Power_Ip_MC_ME_ConfigCoreCOFBClock (const struct Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr)
{
  uint8 CoreIndex;
  uint8 CofbIndex;
  uint8 PartitionIndex;
  const struct Power_Ip_MC_ME_PartitionConfigType[4] * _1;
  int _2;
  _Bool _3;
  const struct Power_Ip_MC_ME_CofbConfigType[<unknown>] * _4;
  int _5;
  _Bool _6;
  const struct Power_Ip_MC_ME_CofbConfigType * _7;
  unsigned char _8;
  unsigned char _9;
  const struct Power_Ip_MC_ME_CoreConfigType[<unknown>] * _10;
  int _11;
  _Bool _12;
  const struct Power_Ip_MC_ME_CoreConfigType * _13;
  unsigned char _14;
  unsigned char _15;
  unsigned char _16;
  const struct Power_Ip_MC_ME_CoreConfigType[<unknown>] * _17;
  int _18;
  _Bool _19;
  const struct Power_Ip_MC_ME_CoreConfigType * _20;
  unsigned char _21;
  unsigned char _22;

  <bb 2> [local count: 109362598]:
  # DEBUG BEGIN_STMT
  # DEBUG TempPartitionConfig => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PartitionIndex => 0
  goto <bb 18>; [100.00%]

  <bb 3> [local count: 437450378]:
  # DEBUG BEGIN_STMT
  _1 = ModeConfigPtr_36(D)->ArrayPartitionConfigPtr;
  _2 = (int) PartitionIndex_23;
  # DEBUG D#6 => &*_1[_2]
  # DEBUG TempPartitionConfig => D#6
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionUnderMcuControl;
  if (_3 != 0)
    goto <bb 22>; [27.00%]
  else
    goto <bb 17>; [73.00%]

  <bb 22> [local count: 118111602]:
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].ArrayPartitionCofbConfigPtr;
  _5 = (int) CofbIndex_24;
  _6 = *_4[_5].CofbUnderMcuControl;
  if (_6 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 315357974]:
  # DEBUG BEGIN_STMT
  _7 = &*_4[_5];
  _8 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionIndex;
  Power_Ip_MC_ME_ConfigureCOFB (_7, _8);

  <bb 6> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  CofbIndex_42 = CofbIndex_24 + 1;
  # DEBUG CofbIndex => CofbIndex_42

  <bb 7> [local count: 1073741824]:
  # CofbIndex_24 = PHI <CofbIndex_42(6), 0(22)>
  # DEBUG CofbIndex => CofbIndex_24
  # DEBUG BEGIN_STMT
  _9 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].NumberOfCofbs;
  if (_9 > CofbIndex_24)
    goto <bb 4>; [89.00%]
  else
    goto <bb 21>; [11.00%]

  <bb 21> [local count: 118111601]:
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 955630212]:
  # DEBUG BEGIN_STMT
  _10 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].ArrayPartitionCoreConfigPtr;
  _11 = (int) CoreIndex_25;
  _12 = *_10[_11].CoreUnderMcuControl;
  if (_12 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 315357970]:
  # DEBUG BEGIN_STMT
  _13 = &*_10[_11];
  _14 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionIndex;
  Power_Ip_MC_ME_ConfigureCore (_13, _14);

  <bb 10> [local count: 955630212]:
  # DEBUG BEGIN_STMT
  CoreIndex_40 = CoreIndex_25 + 1;
  # DEBUG CoreIndex => CoreIndex_40

  <bb 11> [local count: 1073741811]:
  # CoreIndex_25 = PHI <CoreIndex_40(10), 0(21)>
  # DEBUG CoreIndex => CoreIndex_25
  # DEBUG BEGIN_STMT
  _15 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].NumberOfCores;
  if (_15 > CoreIndex_25)
    goto <bb 8>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 12> [local count: 118111599]:
  # DEBUG BEGIN_STMT
  _16 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionIndex;
  if (_16 == 1)
    goto <bb 20>; [16.00%]
  else
    goto <bb 17>; [84.00%]

  <bb 20> [local count: 18897856]:
  goto <bb 16>; [100.00%]

  <bb 13> [local count: 152900832]:
  # DEBUG BEGIN_STMT
  _17 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].ArrayPartitionCoreConfigPtr;
  _18 = (int) CoreIndex_26;
  _19 = *_17[_18].CoreUnderMcuControl;
  if (_19 != 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 14> [local count: 50457275]:
  # DEBUG BEGIN_STMT
  _20 = &*_17[_18];
  _21 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionIndex;
  Power_Ip_MC_ME_ConfigureCorePartition1 (_20, _21);

  <bb 15> [local count: 152900832]:
  # DEBUG BEGIN_STMT
  CoreIndex_38 = CoreIndex_26 + 1;
  # DEBUG CoreIndex => CoreIndex_38

  <bb 16> [local count: 171798688]:
  # CoreIndex_26 = PHI <CoreIndex_38(15), 0(20)>
  # DEBUG CoreIndex => CoreIndex_26
  # DEBUG BEGIN_STMT
  _22 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].NumberOfCores;
  if (_22 > CoreIndex_26)
    goto <bb 13>; [89.00%]
  else
    goto <bb 17>; [11.00%]

  <bb 17> [local count: 437450375]:
  # DEBUG BEGIN_STMT
  PartitionIndex_43 = PartitionIndex_23 + 1;
  # DEBUG PartitionIndex => PartitionIndex_43

  <bb 18> [local count: 546812973]:
  # PartitionIndex_23 = PHI <0(2), PartitionIndex_43(17)>
  # DEBUG PartitionIndex => PartitionIndex_23
  # DEBUG BEGIN_STMT
  if (PartitionIndex_23 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 19>; [20.00%]

  <bb 19> [local count: 109362594]:
  return;

}



;; Function Power_Ip_MC_ME_EnablePartitionClock (Power_Ip_MC_ME_EnablePartitionClock, funcdef_no=11, decl_uid=6172, cgraph_uid=12, symbol_order=12)

Modification phase of node Power_Ip_MC_ME_EnablePartitionClock/12
Power_Ip_MC_ME_EnablePartitionClock (const struct Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr)
{
  uint8 PartitionIndex;
  const struct Power_Ip_MC_ME_PartitionConfigType * TempPartitionConfig;
  const struct Power_Ip_MC_ME_PartitionConfigType[4] * _1;
  int _2;
  _Bool _3;
  _Bool _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  # DEBUG TempPartitionConfig => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PartitionIndex => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = ModeConfigPtr_11(D)->ArrayPartitionConfigPtr;
  _2 = (int) PartitionIndex_7;
  TempPartitionConfig_12 = &*_1[_2];
  # DEBUG TempPartitionConfig => TempPartitionConfig_12
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionUnderMcuControl;
  if (_3 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 429496729]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionPowerUnderMcuControl;
  if (_4 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 214748365]:
  # DEBUG BEGIN_STMT
  _5 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionPconfRegValue;
  _6 = _5 & 1;
  if (_6 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 70866960]:
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);

  <bb 7> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  PartitionIndex_14 = PartitionIndex_7 + 1;
  # DEBUG PartitionIndex => PartitionIndex_14

  <bb 8> [local count: 1073741824]:
  # PartitionIndex_7 = PHI <0(2), PartitionIndex_14(7)>
  # DEBUG PartitionIndex => PartitionIndex_7
  # DEBUG BEGIN_STMT
  if (PartitionIndex_7 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 9>; [20.00%]

  <bb 9> [local count: 214748365]:
  return;

}



;; Function Power_Ip_MC_ME_DisablePartitionClock (Power_Ip_MC_ME_DisablePartitionClock, funcdef_no=12, decl_uid=6174, cgraph_uid=13, symbol_order=13)

Modification phase of node Power_Ip_MC_ME_DisablePartitionClock/13
Power_Ip_MC_ME_DisablePartitionClock (const struct Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr)
{
  uint8 PartitionIndex;
  const struct Power_Ip_MC_ME_PartitionConfigType * TempPartitionConfig;
  const struct Power_Ip_MC_ME_PartitionConfigType[4] * _1;
  int _2;
  _Bool _3;
  _Bool _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  # DEBUG TempPartitionConfig => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PartitionIndex => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = ModeConfigPtr_11(D)->ArrayPartitionConfigPtr;
  _2 = (int) PartitionIndex_7;
  TempPartitionConfig_12 = &*_1[_2];
  # DEBUG TempPartitionConfig => TempPartitionConfig_12
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionUnderMcuControl;
  if (_3 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 429496729]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionPowerUnderMcuControl;
  if (_4 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 214748365]:
  # DEBUG BEGIN_STMT
  _5 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionPconfRegValue;
  _6 = _5 & 1;
  if (_6 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 70866960]:
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);

  <bb 7> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  PartitionIndex_14 = PartitionIndex_7 + 1;
  # DEBUG PartitionIndex => PartitionIndex_14

  <bb 8> [local count: 1073741824]:
  # PartitionIndex_7 = PHI <0(2), PartitionIndex_14(7)>
  # DEBUG PartitionIndex => PartitionIndex_7
  # DEBUG BEGIN_STMT
  if (PartitionIndex_7 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 9>; [20.00%]

  <bb 9> [local count: 214748365]:
  return;

}



;; Function Power_Ip_MC_ME_EnablePartitionOutputSafe (Power_Ip_MC_ME_EnablePartitionOutputSafe, funcdef_no=13, decl_uid=6176, cgraph_uid=14, symbol_order=14)

Modification phase of node Power_Ip_MC_ME_EnablePartitionOutputSafe/14
Power_Ip_MC_ME_EnablePartitionOutputSafe (const struct Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr)
{
  uint8 PartitionIndex;
  const struct Power_Ip_MC_ME_PartitionConfigType * TempPartitionConfig;
  const struct Power_Ip_MC_ME_PartitionConfigType[4] * _1;
  int _2;
  _Bool _3;
  _Bool _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  # DEBUG TempPartitionConfig => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PartitionIndex => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = ModeConfigPtr_11(D)->ArrayPartitionConfigPtr;
  _2 = (int) PartitionIndex_7;
  TempPartitionConfig_12 = &*_1[_2];
  # DEBUG TempPartitionConfig => TempPartitionConfig_12
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionUnderMcuControl;
  if (_3 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 429496729]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionPowerUnderMcuControl;
  if (_4 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 214748365]:
  # DEBUG BEGIN_STMT
  _5 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionPconfRegValue;
  _6 = _5 & 4;
  if (_6 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 70866960]:
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_ConfigurePartitionOutputSafe (TempPartitionConfig_12);

  <bb 7> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  PartitionIndex_14 = PartitionIndex_7 + 1;
  # DEBUG PartitionIndex => PartitionIndex_14

  <bb 8> [local count: 1073741824]:
  # PartitionIndex_7 = PHI <0(2), PartitionIndex_14(7)>
  # DEBUG PartitionIndex => PartitionIndex_7
  # DEBUG BEGIN_STMT
  if (PartitionIndex_7 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 9>; [20.00%]

  <bb 9> [local count: 214748365]:
  return;

}



;; Function Power_Ip_MC_ME_DisablePartitionOutputSafe (Power_Ip_MC_ME_DisablePartitionOutputSafe, funcdef_no=14, decl_uid=6178, cgraph_uid=15, symbol_order=15)

Modification phase of node Power_Ip_MC_ME_DisablePartitionOutputSafe/15
Power_Ip_MC_ME_DisablePartitionOutputSafe (const struct Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr)
{
  uint8 PartitionIndex;
  const struct Power_Ip_MC_ME_PartitionConfigType * TempPartitionConfig;
  const struct Power_Ip_MC_ME_PartitionConfigType[4] * _1;
  int _2;
  _Bool _3;
  _Bool _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  # DEBUG TempPartitionConfig => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PartitionIndex => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = ModeConfigPtr_11(D)->ArrayPartitionConfigPtr;
  _2 = (int) PartitionIndex_7;
  TempPartitionConfig_12 = &*_1[_2];
  # DEBUG TempPartitionConfig => TempPartitionConfig_12
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionUnderMcuControl;
  if (_3 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 429496729]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionPowerUnderMcuControl;
  if (_4 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 214748365]:
  # DEBUG BEGIN_STMT
  _5 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionPconfRegValue;
  _6 = _5 & 4;
  if (_6 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 70866960]:
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_ConfigurePartitionOutputSafe (TempPartitionConfig_12);

  <bb 7> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  PartitionIndex_14 = PartitionIndex_7 + 1;
  # DEBUG PartitionIndex => PartitionIndex_14

  <bb 8> [local count: 1073741824]:
  # PartitionIndex_7 = PHI <0(2), PartitionIndex_14(7)>
  # DEBUG PartitionIndex => PartitionIndex_7
  # DEBUG BEGIN_STMT
  if (PartitionIndex_7 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 9>; [20.00%]

  <bb 9> [local count: 214748365]:
  return;

}



;; Function Power_Ip_MC_ME_SocTriggerResetEvent (Power_Ip_MC_ME_SocTriggerResetEvent, funcdef_no=15, decl_uid=6180, cgraph_uid=16, symbol_order=16)

Modification phase of node Power_Ip_MC_ME_SocTriggerResetEvent/16
Power_Ip_MC_ME_SocTriggerResetEvent (Power_Ip_PowerModeType PowerMode)
{
  struct Power_Ip_MC_ME_Type * Power_Ip_pxMC_ME.28_1;
  struct Power_Ip_MC_ME_Type * Power_Ip_pxMC_ME.29_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (PowerMode_4(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.28_1 = Power_Ip_pxMC_ME;
  Power_Ip_pxMC_ME.28_1->MODE_CONF ={v} 1;
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (PowerMode_4(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.29_2 = Power_Ip_pxMC_ME;
  Power_Ip_pxMC_ME.29_2->MODE_CONF ={v} 2;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_TriggerModeUpdate ();
  return;

}


