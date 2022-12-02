
IPA constant propagation start:
Determining dynamic type for call: IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  Starting walk at: IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  instance pointer: pfNewHandler_3(D)  Outer instance pointer: pfNewHandler_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  Starting walk at: IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  instance pointer: pfOldHandler_4(D)  Outer instance pointer: pfOldHandler_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: IntCtrl_Ip_InstallHandlerPrivileged (_8, _9, 0B);
  Starting walk at: IntCtrl_Ip_InstallHandlerPrivileged (_8, _9, 0B);
  instance pointer: _9  Outer instance pointer: _9 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:IntCtrl_Ip_SetTargetCoresPrivileged (_4, _5);
  Function call may change dynamic type:IntCtrl_Ip_InstallHandlerPrivileged (_8, _9, 0B);
  Function call may change dynamic type:IntCtrl_Ip_SetTargetCoresPrivileged (_4, _5);
Determining dynamic type for call: IntCtrl_Ip_InstallHandlerPrivileged (_8, _9, 0B);
  Starting walk at: IntCtrl_Ip_InstallHandlerPrivileged (_8, _9, 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:IntCtrl_Ip_SetTargetCoresPrivileged (_4, _5);
  Function call may change dynamic type:IntCtrl_Ip_InstallHandlerPrivileged (_8, _9, 0B);
  Function call may change dynamic type:IntCtrl_Ip_SetTargetCoresPrivileged (_4, _5);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  IntCtrl_Ip_GenerateDirectedCpuInterrupt/22:
    callsite  IntCtrl_Ip_GenerateDirectedCpuInterrupt/22 -> IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_GetDirectedCpuInterrupt/21:
    callsite  IntCtrl_Ip_GetDirectedCpuInterrupt/21 -> IntCtrl_Ip_GetDirectedCpuInterruptPrivileged/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_ClearDirectedCpuInterrupt/20:
    callsite  IntCtrl_Ip_ClearDirectedCpuInterrupt/20 -> IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_SetTargetCores/19:
    callsite  IntCtrl_Ip_SetTargetCores/19 -> IntCtrl_Ip_SetTargetCoresPrivileged/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_ClearPending/18:
    callsite  IntCtrl_Ip_ClearPending/18 -> IntCtrl_Ip_ClearPendingPrivileged/6 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_GetPriority/17:
  Jump functions of caller  IntCtrl_Ip_SetPriority/16:
  Jump functions of caller  IntCtrl_Ip_DisableIrq/15:
    callsite  IntCtrl_Ip_DisableIrq/15 -> IntCtrl_Ip_DisableIrqPrivileged/3 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_EnableIrq/14:
    callsite  IntCtrl_Ip_EnableIrq/14 -> IntCtrl_Ip_EnableIrqPrivileged/2 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_InstallHandler/13:
    callsite  IntCtrl_Ip_InstallHandler/13 -> IntCtrl_Ip_InstallHandlerPrivileged/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_ConfigIrqRouting/12:
    callsite  IntCtrl_Ip_ConfigIrqRouting/12 -> IntCtrl_Ip_InstallHandlerPrivileged/1 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
    callsite  IntCtrl_Ip_ConfigIrqRouting/12 -> IntCtrl_Ip_SetTargetCoresPrivileged/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_Init/11:
    callsite  IntCtrl_Ip_Init/11 -> IntCtrl_Ip_DisableIrqPrivileged/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
    callsite  IntCtrl_Ip_Init/11 -> IntCtrl_Ip_EnableIrqPrivileged/2 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
    callsite  IntCtrl_Ip_Init/11 -> IntCtrl_Ip_ClearPendingPrivileged/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged/10:
  Jump functions of caller  IntCtrl_Ip_GetDirectedCpuInterruptPrivileged/9:
  Jump functions of caller  IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged/8:
  Jump functions of caller  IntCtrl_Ip_SetTargetCoresPrivileged/7:
    callsite  IntCtrl_Ip_SetTargetCoresPrivileged/7 -> DevAssert/0 : 
       param 0: PASS THROUGH: 1, op le_expr 15
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  IntCtrl_Ip_ClearPendingPrivileged/6:
  Jump functions of caller  IntCtrl_Ip_GetPriorityPrivileged/5:
  Jump functions of caller  IntCtrl_Ip_SetPriorityPrivileged/4:
  Jump functions of caller  IntCtrl_Ip_DisableIrqPrivileged/3:
  Jump functions of caller  IntCtrl_Ip_EnableIrqPrivileged/2:
  Jump functions of caller  IntCtrl_Ip_InstallHandlerPrivileged/1:
  Jump functions of caller  DevAssert/0:

 Propagating constants:

Not considering IntCtrl_Ip_GenerateDirectedCpuInterrupt for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_GetDirectedCpuInterrupt for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_ClearDirectedCpuInterrupt for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_SetTargetCores for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_ClearPending for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_GetPriority for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_SetPriority for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_DisableIrq for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_EnableIrq for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_InstallHandler for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_ConfigIrqRouting for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_Init for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_GetDirectedCpuInterruptPrivileged for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_SetTargetCoresPrivileged for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_ClearPendingPrivileged for cloning; -fipa-cp-clone disabled.
Function IntCtrl_Ip_GetPriorityPrivileged/5 is not versionable, reason: not a tree_versionable_function.
Function IntCtrl_Ip_SetPriorityPrivileged/4 is not versionable, reason: not a tree_versionable_function.
Not considering IntCtrl_Ip_DisableIrqPrivileged for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_EnableIrqPrivileged for cloning; -fipa-cp-clone disabled.
Not considering IntCtrl_Ip_InstallHandlerPrivileged for cloning; -fipa-cp-clone disabled.

overall_size: 204, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: IntCtrl_Ip_GenerateDirectedCpuInterrupt/22:
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
  Node: IntCtrl_Ip_GetDirectedCpuInterrupt/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_ClearDirectedCpuInterrupt/20:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_SetTargetCores/19:
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
  Node: IntCtrl_Ip_ClearPending/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_GetPriority/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_SetPriority/16:
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
  Node: IntCtrl_Ip_DisableIrq/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_EnableIrq/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_InstallHandler/13:
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
  Node: IntCtrl_Ip_ConfigIrqRouting/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_Init/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged/10:
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
  Node: IntCtrl_Ip_GetDirectedCpuInterruptPrivileged/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_SetTargetCoresPrivileged/7:
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
  Node: IntCtrl_Ip_ClearPendingPrivileged/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_GetPriorityPrivileged/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_SetPriorityPrivileged/4:
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
  Node: IntCtrl_Ip_DisableIrqPrivileged/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_EnableIrqPrivileged/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: IntCtrl_Ip_InstallHandlerPrivileged/1:
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
  Node: DevAssert/0:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

IntCtrl_Ip_GenerateDirectedCpuInterrupt/22 (IntCtrl_Ip_GenerateDirectedCpuInterrupt) @05151460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged/10 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_GetDirectedCpuInterrupt/21 (IntCtrl_Ip_GetDirectedCpuInterrupt) @051511c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_GetDirectedCpuInterruptPrivileged/9 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_ClearDirectedCpuInterrupt/20 (IntCtrl_Ip_ClearDirectedCpuInterrupt) @0514dee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged/8 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_SetTargetCores/19 (IntCtrl_Ip_SetTargetCores) @0514d9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_SetTargetCoresPrivileged/7 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_ClearPending/18 (IntCtrl_Ip_ClearPending) @0514d460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_ClearPendingPrivileged/6 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_GetPriority/17 (IntCtrl_Ip_GetPriority) @0514de00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: IntCtrl_Ip_GetPriorityPrivileged/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_SetPriority/16 (IntCtrl_Ip_SetPriority) @0514db60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: IntCtrl_Ip_SetPriorityPrivileged/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_DisableIrq/15 (IntCtrl_Ip_DisableIrq) @0514d8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_DisableIrqPrivileged/3 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_EnableIrq/14 (IntCtrl_Ip_EnableIrq) @0514d620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_EnableIrqPrivileged/2 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_InstallHandler/13 (IntCtrl_Ip_InstallHandler) @0514d380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_InstallHandlerPrivileged/1 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_ConfigIrqRouting/12 (IntCtrl_Ip_ConfigIrqRouting) @0514d000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_InstallHandlerPrivileged/1 (955630223 (estimated locally),8.09 per call) IntCtrl_Ip_SetTargetCoresPrivileged/7 (955630223 (estimated locally),8.09 per call) 
IntCtrl_Ip_Init/11 (IntCtrl_Ip_Init) @050f0b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: IntCtrl_Ip_DisableIrqPrivileged/3 (477815111 (estimated locally),4.05 per call) IntCtrl_Ip_EnableIrqPrivileged/2 (477815111 (estimated locally),4.05 per call) IntCtrl_Ip_ClearPendingPrivileged/6 (955630223 (estimated locally),8.09 per call) 
IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged/10 (IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged) @050f0620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:394758024 (estimated locally) body optimize_size
  Called by: IntCtrl_Ip_GenerateDirectedCpuInterrupt/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_GetDirectedCpuInterruptPrivileged/9 (IntCtrl_Ip_GetDirectedCpuInterruptPrivileged) @050f00e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: IntCtrl_Ip_GetDirectedCpuInterrupt/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged/8 (IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged) @050f0d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: IntCtrl_Ip_ClearDirectedCpuInterrupt/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_SetTargetCoresPrivileged/7 (IntCtrl_Ip_SetTargetCoresPrivileged) @050f0a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: IntCtrl_Ip_ConfigIrqRouting/12 (955630223 (estimated locally),8.09 per call) IntCtrl_Ip_SetTargetCores/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_ClearPendingPrivileged/6 (IntCtrl_Ip_ClearPendingPrivileged) @050f07e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: IntCtrl_Ip_Init/11 (955630223 (estimated locally),8.09 per call) IntCtrl_Ip_ClearPending/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_GetPriorityPrivileged/5 (IntCtrl_Ip_GetPriorityPrivileged) @050f0540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: IntCtrl_Ip_GetPriority/17 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_SetPriorityPrivileged/4 (IntCtrl_Ip_SetPriorityPrivileged) @050f02a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: IntCtrl_Ip_SetPriority/16 (1073741824 (estimated locally),1.00 per call) 
IntCtrl_Ip_DisableIrqPrivileged/3 (IntCtrl_Ip_DisableIrqPrivileged) @050f0000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: IntCtrl_Ip_Init/11 (477815111 (estimated locally),4.05 per call) IntCtrl_Ip_DisableIrq/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_EnableIrqPrivileged/2 (IntCtrl_Ip_EnableIrqPrivileged) @050edb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: IntCtrl_Ip_Init/11 (477815111 (estimated locally),4.05 per call) IntCtrl_Ip_EnableIrq/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
IntCtrl_Ip_InstallHandlerPrivileged/1 (IntCtrl_Ip_InstallHandlerPrivileged) @050edd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: IntCtrl_Ip_ConfigIrqRouting/12 (955630223 (estimated locally),8.09 per call) IntCtrl_Ip_InstallHandler/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
DevAssert/0 (DevAssert) @05123d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:214748 (estimated locally) body local optimize_size
  Called by: IntCtrl_Ip_SetTargetCoresPrivileged/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 

;; Function IntCtrl_Ip_InstallHandlerPrivileged (IntCtrl_Ip_InstallHandlerPrivileged, funcdef_no=1, decl_uid=5947, cgraph_uid=2, symbol_order=1)

Modification phase of node IntCtrl_Ip_InstallHandlerPrivileged/1
IntCtrl_Ip_InstallHandlerPrivileged (IRQn_Type eIrqNumber, void (*IntCtrl_Ip_IrqHandlerType) (void) pfNewHandler, void (*IntCtrl_Ip_IrqHandlerType) (void) * const pfOldHandler)
{
  void (*IntCtrl_Ip_IrqHandlerType) (void) * pVectorRam;
  long unsigned int _1;
  sizetype eIrqNumber.0_2;
  sizetype _3;
  sizetype _4;
  void (*IntCtrl_Ip_IrqHandlerType) (void) * _5;
  void (*<T4ed>) (void) _6;
  sizetype eIrqNumber.1_7;
  sizetype _8;
  sizetype _9;
  void (*IntCtrl_Ip_IrqHandlerType) (void) * _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct S32_SCB_Type *)3758153728B].VTOR;
  pVectorRam_13 = (void (*IntCtrl_Ip_IrqHandlerType) (void) *) _1;
  # DEBUG pVectorRam => pVectorRam_13
  # DEBUG BEGIN_STMT
  if (pfOldHandler_14(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  eIrqNumber.0_2 = (sizetype) eIrqNumber_15(D);
  _3 = eIrqNumber.0_2 + 16;
  _4 = _3 * 4;
  _5 = pVectorRam_13 + _4;
  _6 = *_5;
  *pfOldHandler_14(D) = _6;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  eIrqNumber.1_7 = (sizetype) eIrqNumber_15(D);
  _8 = eIrqNumber.1_7 + 16;
  _9 = _8 * 4;
  _10 = pVectorRam_13 + _9;
  *_10 = pfNewHandler_17(D);
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" ISB");
  # DEBUG BEGIN_STMT
  __asm__ __volatile__(" DSB");
  return;

}



;; Function IntCtrl_Ip_EnableIrqPrivileged (IntCtrl_Ip_EnableIrqPrivileged, funcdef_no=2, decl_uid=5949, cgraph_uid=3, symbol_order=2)

Modification phase of node IntCtrl_Ip_EnableIrqPrivileged/2
IntCtrl_Ip_EnableIrqPrivileged (IRQn_Type eIrqNumber)
{
  long unsigned int eIrqNumber.2_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  eIrqNumber.2_1 = (long unsigned int) eIrqNumber_5(D);
  _2 = eIrqNumber.2_1 & 31;
  _3 = eIrqNumber.2_1 >> 5;
  _4 = 1 << _2;
  MEM[(struct S32_NVIC_Type *)3758153728B].ISER[_3] ={v} _4;
  return;

}



;; Function IntCtrl_Ip_DisableIrqPrivileged (IntCtrl_Ip_DisableIrqPrivileged, funcdef_no=3, decl_uid=5951, cgraph_uid=4, symbol_order=3)

Modification phase of node IntCtrl_Ip_DisableIrqPrivileged/3
IntCtrl_Ip_DisableIrqPrivileged (IRQn_Type eIrqNumber)
{
  long unsigned int eIrqNumber.4_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  eIrqNumber.4_1 = (long unsigned int) eIrqNumber_5(D);
  _2 = eIrqNumber.4_1 & 31;
  _3 = eIrqNumber.4_1 >> 5;
  _4 = 1 << _2;
  MEM[(struct S32_NVIC_Type *)3758153728B].ICER[_3] ={v} _4;
  return;

}



;; Function IntCtrl_Ip_SetPriorityPrivileged (IntCtrl_Ip_SetPriorityPrivileged, funcdef_no=24, decl_uid=5954, cgraph_uid=5, symbol_order=4)

Modification phase of node IntCtrl_Ip_SetPriorityPrivileged/4
IntCtrl_Ip_SetPriorityPrivileged (IRQn_Type eIrqNumber, uint8 u8Priority)
{
  <bb 2> [local count: 1073741824]:
  IntCtrl_Ip_SetPriority (eIrqNumber_2(D), u8Priority_3(D)); [tail call]
  return;

}



;; Function IntCtrl_Ip_GetPriorityPrivileged (IntCtrl_Ip_GetPriorityPrivileged, funcdef_no=26, decl_uid=5956, cgraph_uid=6, symbol_order=5)

Modification phase of node IntCtrl_Ip_GetPriorityPrivileged/5
IntCtrl_Ip_GetPriorityPrivileged (IRQn_Type eIrqNumber)
{
  uint8 retval.37;

  <bb 2> [local count: 1073741824]:
  retval.37_4 = IntCtrl_Ip_GetPriority (eIrqNumber_2(D)); [tail call]
  return retval.37_4;

}



;; Function IntCtrl_Ip_ClearPendingPrivileged (IntCtrl_Ip_ClearPendingPrivileged, funcdef_no=6, decl_uid=5958, cgraph_uid=7, symbol_order=6)

Modification phase of node IntCtrl_Ip_ClearPendingPrivileged/6
IntCtrl_Ip_ClearPendingPrivileged (IRQn_Type eIrqNumber)
{
  long unsigned int eIrqNumber.8_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  eIrqNumber.8_1 = (long unsigned int) eIrqNumber_5(D);
  _2 = eIrqNumber.8_1 & 31;
  _3 = eIrqNumber.8_1 >> 5;
  _4 = 1 << _2;
  MEM[(struct S32_NVIC_Type *)3758153728B].ICPR[_3] ={v} _4;
  return;

}



;; Function IntCtrl_Ip_SetTargetCoresPrivileged (IntCtrl_Ip_SetTargetCoresPrivileged, funcdef_no=7, decl_uid=5961, cgraph_uid=8, symbol_order=7)

Modification phase of node IntCtrl_Ip_SetTargetCoresPrivileged/7
IntCtrl_Ip_SetTargetCoresPrivileged (IRQn_Type eIrqNumber, uint8 u8TargetCores)
{
  _Bool _1;
  unsigned char _2;
  short unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = u8TargetCores_4(D) <= 15;
  DevAssert (_1);
  # DEBUG BEGIN_STMT
  _2 = u8TargetCores_4(D) & 15;
  _3 = (short unsigned int) _2;
  MEM[(struct MSCM_Type *)1075412992B].IRSPRC[eIrqNumber_7(D)] ={v} _3;
  return;

}



;; Function IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged (IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged, funcdef_no=8, decl_uid=5966, cgraph_uid=9, symbol_order=8)

Modification phase of node IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged/8
IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged (IRQn_Type eIrqNumber)
{
  uint32 irqId;
  uint32 currentCpu;
  long unsigned int _1;
  long unsigned int eIrqNumber.11_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MSCM_Type *)1075412992B].CPXNUM;
  currentCpu_4 = _1 & 255;
  # DEBUG currentCpu => currentCpu_4
  # DEBUG BEGIN_STMT
  eIrqNumber.11_2 = (long unsigned int) eIrqNumber_5(D);
  irqId_6 = eIrqNumber.11_2 + 4294967295;
  # DEBUG irqId => irqId_6
  # DEBUG BEGIN_STMT
  MEM[(volatile struct MSCM_IRCPnIRx_Type *)1075413504B].IRCPnIRx[currentCpu_4][irqId_6].IntStatusR ={v} 127;
  return;

}



;; Function IntCtrl_Ip_GetDirectedCpuInterruptPrivileged (IntCtrl_Ip_GetDirectedCpuInterruptPrivileged, funcdef_no=9, decl_uid=5968, cgraph_uid=10, symbol_order=9)

Modification phase of node IntCtrl_Ip_GetDirectedCpuInterruptPrivileged/9
IntCtrl_Ip_GetDirectedCpuInterruptPrivileged (IRQn_Type eIrqNumber)
{
  uint32 irqId;
  uint32 currentCpu;
  long unsigned int _1;
  long unsigned int eIrqNumber.12_2;
  long unsigned int _3;
  _Bool _4;
  uint32 _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MSCM_Type *)1075412992B].CPXNUM;
  currentCpu_6 = _1 & 255;
  # DEBUG currentCpu => currentCpu_6
  # DEBUG BEGIN_STMT
  eIrqNumber.12_2 = (long unsigned int) eIrqNumber_7(D);
  irqId_8 = eIrqNumber.12_2 + 4294967295;
  # DEBUG irqId => irqId_8
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(volatile struct MSCM_IRCPnIRx_Type *)1075413504B].IRCPnIRx[currentCpu_6][irqId_8].IntStatusR;
  _4 = _3 != 0;
  _9 = (uint32) _4;
  return _9;

}



;; Function IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged (IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged, funcdef_no=10, decl_uid=5964, cgraph_uid=11, symbol_order=10)

Modification phase of node IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged/10
IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged (IRQn_Type eIrqNumber, IntCtrl_Ip_IrqTargetType eCpuTarget)
{
  uint32 target;
  uint32 core;
  uint32 irqId;
  long unsigned int eIrqNumber.13_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 394758024]:
  # DEBUG BEGIN_STMT
  eIrqNumber.13_1 = (long unsigned int) eIrqNumber_10(D);
  irqId_11 = eIrqNumber.13_1 + 4294967295;
  # DEBUG irqId => irqId_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (eCpuTarget_12(D) == -1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 12> [local count: 134217728]:
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 939524097]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct MSCM_Type *)1075412992B].CPXNUM;
  _3 = _2 & 255;
  if (_3 != core_5)
    goto <bb 4>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 4> [local count: 620085904]:
  # DEBUG BEGIN_STMT
  MEM[(volatile struct MSCM_IRCPnIRx_Type *)1075413504B].IRCPnIRx[core_5][irqId_11].IGR ={v} 1;

  <bb 5> [local count: 939524097]:
  # DEBUG BEGIN_STMT
  core_18 = core_5 + 1;
  # DEBUG core => core_18

  <bb 6> [local count: 1073741824]:
  # core_5 = PHI <core_18(5), 0(12)>
  # DEBUG core => core_5
  # DEBUG BEGIN_STMT
  if (core_5 != 7)
    goto <bb 3>; [87.50%]
  else
    goto <bb 11>; [12.50%]

  <bb 7> [local count: 260540296]:
  # DEBUG BEGIN_STMT
  if (eCpuTarget_12(D) == -2)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 88583701]:
  # DEBUG BEGIN_STMT
  _4 ={v} MEM[(struct MSCM_Type *)1075412992B].CPXNUM;
  target_15 = _4 & 255;
  # DEBUG target => target_15
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 171956595]:
  # DEBUG BEGIN_STMT
  target_13 = (uint32) eCpuTarget_12(D);
  # DEBUG target => target_13

  <bb 10> [local count: 260540296]:
  # target_6 = PHI <target_15(8), target_13(9)>
  # DEBUG target => target_6
  # DEBUG BEGIN_STMT
  MEM[(volatile struct MSCM_IRCPnIRx_Type *)1075413504B].IRCPnIRx[target_6][irqId_11].IGR ={v} 1;

  <bb 11> [local count: 394758024]:
  return;

}



;; Function IntCtrl_Ip_Init (IntCtrl_Ip_Init, funcdef_no=11, decl_uid=5915, cgraph_uid=12, symbol_order=11)

Modification phase of node IntCtrl_Ip_Init/11
IntCtrl_Ip_Init (const struct IntCtrl_Ip_CtrlConfigType * pIntCtrlCtrlConfig)
{
  uint32 irqIdx;
  const struct IntCtrl_Ip_IrqConfigType * _1;
  long unsigned int _2;
  const struct IntCtrl_Ip_IrqConfigType * _3;
  <unnamed type> _4;
  const struct IntCtrl_Ip_IrqConfigType * _5;
  const struct IntCtrl_Ip_IrqConfigType * _6;
  <unnamed type> _7;
  unsigned char _8;
  _Bool _9;
  long unsigned int _10;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int eIrqNumber.6_19;
  unsigned char _20;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG irqIdx => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = pIntCtrlCtrlConfig_15(D)->aIrqConfig;
  _2 = irqIdx_11 * 8;
  _3 = _1 + _2;
  _4 = _3->eIrqNumber;
  # DEBUG eIrqNumber => _4
  # DEBUG INLINE_ENTRY IntCtrl_Ip_ClearPending
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_ClearPendingPrivileged (_4);
  # DEBUG eIrqNumber => NULL
  # DEBUG BEGIN_STMT
  _5 = pIntCtrlCtrlConfig_15(D)->aIrqConfig;
  _6 = _5 + _2;
  _7 = _6->eIrqNumber;
  _8 = _6->u8IrqPriority;
  # DEBUG eIrqNumber => _7
  # DEBUG u8Priority => _8
  # DEBUG INLINE_ENTRY IntCtrl_Ip_SetPriority
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => _7
  # DEBUG u8Priority => _8
  # DEBUG INLINE_ENTRY IntCtrl_Ip_SetPriorityPrivileged
  # DEBUG BEGIN_STMT
  # DEBUG shift => 4
  # DEBUG BEGIN_STMT
  _17 = (long unsigned int) _8;
  _18 = _17 << 4;
  eIrqNumber.6_19 = (long unsigned int) _7;
  _20 = (unsigned char) _18;
  MEM[(struct S32_NVIC_Type *)3758153728B].IP[eIrqNumber.6_19] ={v} _20;
  # DEBUG eIrqNumber => NULL
  # DEBUG u8Priority => NULL
  # DEBUG eIrqNumber => NULL
  # DEBUG u8Priority => NULL
  # DEBUG BEGIN_STMT
  _9 = _6->bIrqEnabled;
  if (_9 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => _7
  # DEBUG INLINE_ENTRY IntCtrl_Ip_EnableIrq
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrqPrivileged (_7);
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => _7
  # DEBUG INLINE_ENTRY IntCtrl_Ip_DisableIrq
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_DisableIrqPrivileged (_7);

  <bb 6> [local count: 955630223]:
  # DEBUG eIrqNumber => NULL
  # DEBUG eIrqNumber => NULL
  # DEBUG BEGIN_STMT
  irqIdx_16 = irqIdx_11 + 1;
  # DEBUG irqIdx => irqIdx_16

  <bb 7> [local count: 1073741824]:
  # irqIdx_11 = PHI <0(2), irqIdx_16(6)>
  # DEBUG irqIdx => irqIdx_11
  # DEBUG BEGIN_STMT
  _10 = pIntCtrlCtrlConfig_15(D)->u32ConfigIrqCount;
  if (_10 > irqIdx_11)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function IntCtrl_Ip_ConfigIrqRouting (IntCtrl_Ip_ConfigIrqRouting, funcdef_no=12, decl_uid=5917, cgraph_uid=13, symbol_order=12)

Modification phase of node IntCtrl_Ip_ConfigIrqRouting/12
IntCtrl_Ip_ConfigIrqRouting (const struct IntCtrl_Ip_GlobalRouteConfigType * routeConfig)
{
  uint32 irqIdx;
  const struct IntCtrl_Ip_IrqRouteConfigType * _1;
  long unsigned int _2;
  const struct IntCtrl_Ip_IrqRouteConfigType * _3;
  <unnamed type> _4;
  unsigned char _5;
  const struct IntCtrl_Ip_IrqRouteConfigType * _6;
  const struct IntCtrl_Ip_IrqRouteConfigType * _7;
  <unnamed type> _8;
  void (*<T4ed>) (void) _9;
  long unsigned int _10;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG irqIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = routeConfig_14(D)->aIrqConfig;
  _2 = irqIdx_11 * 12;
  _3 = _1 + _2;
  _4 = _3->eIrqNumber;
  _5 = _3->u8TargetCores;
  # DEBUG eIrqNumber => _4
  # DEBUG u8TargetCores => _5
  # DEBUG INLINE_ENTRY IntCtrl_Ip_SetTargetCores
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_SetTargetCoresPrivileged (_4, _5);
  # DEBUG eIrqNumber => NULL
  # DEBUG u8TargetCores => NULL
  # DEBUG BEGIN_STMT
  _6 = routeConfig_14(D)->aIrqConfig;
  _7 = _6 + _2;
  _8 = _7->eIrqNumber;
  _9 = _7->pfHandler;
  # DEBUG eIrqNumber => _8
  # DEBUG pfNewHandler => _9
  # DEBUG pfOldHandler => 0B
  # DEBUG INLINE_ENTRY IntCtrl_Ip_InstallHandler
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandlerPrivileged (_8, _9, 0B);
  # DEBUG eIrqNumber => NULL
  # DEBUG pfNewHandler => NULL
  # DEBUG pfOldHandler => NULL
  # DEBUG BEGIN_STMT
  irqIdx_15 = irqIdx_11 + 1;
  # DEBUG irqIdx => irqIdx_15

  <bb 4> [local count: 1073741824]:
  # irqIdx_11 = PHI <0(2), irqIdx_15(3)>
  # DEBUG irqIdx => irqIdx_11
  # DEBUG BEGIN_STMT
  _10 = routeConfig_14(D)->u32ConfigIrqCount;
  if (_10 > irqIdx_11)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function IntCtrl_Ip_InstallHandler (IntCtrl_Ip_InstallHandler, funcdef_no=13, decl_uid=5921, cgraph_uid=14, symbol_order=13)

Modification phase of node IntCtrl_Ip_InstallHandler/13
IntCtrl_Ip_InstallHandler (IRQn_Type eIrqNumber, void (*IntCtrl_Ip_IrqHandlerType) (void) pfNewHandler, void (*IntCtrl_Ip_IrqHandlerType) (void) * const pfOldHandler)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_InstallHandlerPrivileged (eIrqNumber_2(D), pfNewHandler_3(D), pfOldHandler_4(D));
  return;

}



;; Function IntCtrl_Ip_EnableIrq (IntCtrl_Ip_EnableIrq, funcdef_no=14, decl_uid=5923, cgraph_uid=15, symbol_order=14)

Modification phase of node IntCtrl_Ip_EnableIrq/14
IntCtrl_Ip_EnableIrq (IRQn_Type eIrqNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_EnableIrqPrivileged (eIrqNumber_2(D));
  return;

}



;; Function IntCtrl_Ip_DisableIrq (IntCtrl_Ip_DisableIrq, funcdef_no=15, decl_uid=5925, cgraph_uid=16, symbol_order=15)

Modification phase of node IntCtrl_Ip_DisableIrq/15
IntCtrl_Ip_DisableIrq (IRQn_Type eIrqNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_DisableIrqPrivileged (eIrqNumber_2(D));
  return;

}



;; Function IntCtrl_Ip_SetPriority (IntCtrl_Ip_SetPriority, funcdef_no=16, decl_uid=5928, cgraph_uid=17, symbol_order=16)

Modification phase of node IntCtrl_Ip_SetPriority/16
IntCtrl_Ip_SetPriority (IRQn_Type eIrqNumber, uint8 u8Priority)
{
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int eIrqNumber.6_6;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => eIrqNumber_2(D)
  # DEBUG u8Priority => u8Priority_3(D)
  # DEBUG INLINE_ENTRY IntCtrl_Ip_SetPriorityPrivileged
  # DEBUG BEGIN_STMT
  # DEBUG shift => 4
  # DEBUG BEGIN_STMT
  _4 = (long unsigned int) u8Priority_3(D);
  _5 = _4 << 4;
  eIrqNumber.6_6 = (long unsigned int) eIrqNumber_2(D);
  _7 = (unsigned char) _5;
  MEM[(struct S32_NVIC_Type *)3758153728B].IP[eIrqNumber.6_6] ={v} _7;
  # DEBUG eIrqNumber => NULL
  # DEBUG u8Priority => NULL
  return;

}



;; Function IntCtrl_Ip_GetPriority (IntCtrl_Ip_GetPriority, funcdef_no=17, decl_uid=5930, cgraph_uid=18, symbol_order=17)

Modification phase of node IntCtrl_Ip_GetPriority/17
IntCtrl_Ip_GetPriority (IRQn_Type eIrqNumber)
{
  uint8 priority;
  long unsigned int eIrqNumber.7_3;
  unsigned char _4;
  int _5;
  int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => eIrqNumber_2(D)
  # DEBUG INLINE_ENTRY IntCtrl_Ip_GetPriorityPrivileged
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG shift => 4
  # DEBUG BEGIN_STMT
  eIrqNumber.7_3 = (long unsigned int) eIrqNumber_2(D);
  _4 ={v} MEM[(struct S32_NVIC_Type *)3758153728B].IP[eIrqNumber.7_3];
  _5 = (int) _4;
  _6 = _5 >> 4;
  priority_7 = (uint8) _6;
  # DEBUG priority => priority_7
  # DEBUG BEGIN_STMT
  # DEBUG eIrqNumber => NULL
  # DEBUG priority => NULL
  return priority_7;

}



;; Function IntCtrl_Ip_ClearPending (IntCtrl_Ip_ClearPending, funcdef_no=18, decl_uid=5932, cgraph_uid=19, symbol_order=18)

Modification phase of node IntCtrl_Ip_ClearPending/18
IntCtrl_Ip_ClearPending (IRQn_Type eIrqNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_ClearPendingPrivileged (eIrqNumber_2(D));
  return;

}



;; Function IntCtrl_Ip_SetTargetCores (IntCtrl_Ip_SetTargetCores, funcdef_no=19, decl_uid=5935, cgraph_uid=20, symbol_order=19)

Modification phase of node IntCtrl_Ip_SetTargetCores/19
IntCtrl_Ip_SetTargetCores (IRQn_Type eIrqNumber, uint8 u8TargetCores)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_SetTargetCoresPrivileged (eIrqNumber_2(D), u8TargetCores_3(D));
  return;

}



;; Function IntCtrl_Ip_ClearDirectedCpuInterrupt (IntCtrl_Ip_ClearDirectedCpuInterrupt, funcdef_no=20, decl_uid=5937, cgraph_uid=21, symbol_order=20)

Modification phase of node IntCtrl_Ip_ClearDirectedCpuInterrupt/20
IntCtrl_Ip_ClearDirectedCpuInterrupt (IRQn_Type eIrqNumber)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_ClearDirectedCpuInterruptPrivileged (eIrqNumber_2(D));
  return;

}



;; Function IntCtrl_Ip_GetDirectedCpuInterrupt (IntCtrl_Ip_GetDirectedCpuInterrupt, funcdef_no=21, decl_uid=5939, cgraph_uid=22, symbol_order=21)

Modification phase of node IntCtrl_Ip_GetDirectedCpuInterrupt/21
IntCtrl_Ip_GetDirectedCpuInterrupt (IRQn_Type eIrqNumber)
{
  long unsigned int _1;
  boolean _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = IntCtrl_Ip_GetDirectedCpuInterruptPrivileged (eIrqNumber_3(D));
  _5 = _1 != 0;
  return _5;

}



;; Function IntCtrl_Ip_GenerateDirectedCpuInterrupt (IntCtrl_Ip_GenerateDirectedCpuInterrupt, funcdef_no=22, decl_uid=5942, cgraph_uid=23, symbol_order=22)

Modification phase of node IntCtrl_Ip_GenerateDirectedCpuInterrupt/22
IntCtrl_Ip_GenerateDirectedCpuInterrupt (IRQn_Type eIrqNumber, IntCtrl_Ip_IrqTargetType eCpuTarget)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IntCtrl_Ip_GenerateDirectedCpuInterruptPrivileged (eIrqNumber_2(D), eCpuTarget_3(D));
  return;

}


