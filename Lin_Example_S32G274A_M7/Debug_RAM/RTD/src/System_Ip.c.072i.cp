
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  System_Ip_GetPlatformRevision/8:
  Jump functions of caller  System_Ip_ClearWriteAbortFlag/7:
  Jump functions of caller  System_Ip_ConfigIrq/6:
    callsite  System_Ip_ConfigIrq/6 -> System_Ip_ConfigIrqPrivileged/2 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  System_Ip_SetAhbSlavePriority/5:
    callsite  System_Ip_SetAhbSlavePriority/5 -> System_Ip_SetAhbSlavePriorityPrivileged/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0x1
         Unknown VR
  Jump functions of caller  System_Ip_ConfigIrqPrivileged/2:
  Jump functions of caller  System_Ip_SetAhbSlavePriorityPrivileged/1:

 Propagating constants:

Not considering System_Ip_GetPlatformRevision for cloning; -fipa-cp-clone disabled.
Not considering System_Ip_ClearWriteAbortFlag for cloning; -fipa-cp-clone disabled.
Not considering System_Ip_ConfigIrq for cloning; -fipa-cp-clone disabled.
Not considering System_Ip_SetAhbSlavePriority for cloning; -fipa-cp-clone disabled.

overall_size: 43, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: System_Ip_GetPlatformRevision/8:
  Node: System_Ip_ClearWriteAbortFlag/7:
  Node: System_Ip_ConfigIrq/6:
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
  Node: System_Ip_SetAhbSlavePriority/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: System_Ip_ConfigIrqPrivileged/2:
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
  Node: System_Ip_SetAhbSlavePriorityPrivileged/1:
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

System_Ip_GetPlatformRevision/8 (System_Ip_GetPlatformRevision) @05aaf7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
System_Ip_ClearWriteAbortFlag/7 (System_Ip_ClearWriteAbortFlag) @05aaf2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
System_Ip_ConfigIrq/6 (System_Ip_ConfigIrq) @05aafee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: System_Ip_ConfigIrqPrivileged/2 (1073741824 (estimated locally),1.00 per call) 
System_Ip_SetAhbSlavePriority/5 (System_Ip_SetAhbSlavePriority) @05aafc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: System_Ip_SetAhbSlavePriorityPrivileged/1 (1073741824 (estimated locally),1.00 per call) 
System_Ip_ConfigIrqPrivileged/2 (System_Ip_ConfigIrqPrivileged) @05aaf460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: System_Ip_ConfigIrq/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
System_Ip_SetAhbSlavePriorityPrivileged/1 (System_Ip_SetAhbSlavePriorityPrivileged) @05aaf1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: System_Ip_SetAhbSlavePriority/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 

;; Function System_Ip_SetAhbSlavePriority (System_Ip_SetAhbSlavePriority, funcdef_no=5, decl_uid=5649, cgraph_uid=6, symbol_order=5)

Modification phase of node System_Ip_SetAhbSlavePriority/5
System_Ip_SetAhbSlavePriority (boolean bPriority)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  System_Ip_SetAhbSlavePriorityPrivileged (bPriority_2(D));
  return;

}



;; Function System_Ip_ConfigIrq (System_Ip_ConfigIrq, funcdef_no=6, decl_uid=5652, cgraph_uid=7, symbol_order=6)

Modification phase of node System_Ip_ConfigIrq/6
System_Ip_ConfigIrq (System_Ip_IrqType eIrq, boolean bEnable)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  System_Ip_ConfigIrqPrivileged (eIrq_2(D), bEnable_3(D));
  return;

}



;; Function System_Ip_ClearWriteAbortFlag (System_Ip_ClearWriteAbortFlag, funcdef_no=7, decl_uid=5654, cgraph_uid=8, symbol_order=7)

Modification phase of node System_Ip_ClearWriteAbortFlag/7
System_Ip_ClearWriteAbortFlag ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY System_Ip_ClearWriteAbortFlagPrivileged
  # DEBUG BEGIN_STMT
  MEM[(struct MCM_Type *)3758620672B].ISCR ={v} 32;
  return;

}



;; Function System_Ip_GetPlatformRevision (System_Ip_GetPlatformRevision, funcdef_no=8, decl_uid=5656, cgraph_uid=9, symbol_order=8)

Modification phase of node System_Ip_GetPlatformRevision/8
System_Ip_GetPlatformRevision ()
{
  short unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY System_Ip_GetPlatformRevisionPrivileged
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct MCM_Type *)3758620672B].PLREV;
  _3 = (long unsigned int) _2;
  return _3;

}


