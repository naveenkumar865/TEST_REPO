
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Linflexd_Lin_Ip_Error_IRQHandler/4:
  Jump functions of caller  Linflexd_Lin_Ip_TxRx_IRQHandler/3:
  Jump functions of caller  LIN_LINFLEXD2_IRQHandler/2:
  Jump functions of caller  LIN_LINFLEXD1_IRQHandler/1:
  Jump functions of caller  LIN_LINFLEXD0_IRQHandler/0:

 Propagating constants:

Not considering LIN_LINFLEXD2_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering LIN_LINFLEXD1_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering LIN_LINFLEXD0_IRQHandler for cloning; -fipa-cp-clone disabled.

overall_size: 21, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: LIN_LINFLEXD2_IRQHandler/2:
  Node: LIN_LINFLEXD1_IRQHandler/1:
  Node: LIN_LINFLEXD0_IRQHandler/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Linflexd_Lin_Ip_Error_IRQHandler/4 (Linflexd_Lin_Ip_Error_IRQHandler) @05b8ed20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LIN_LINFLEXD2_IRQHandler/2 (1073741824 (estimated locally),1.00 per call) LIN_LINFLEXD1_IRQHandler/1 (1073741824 (estimated locally),1.00 per call) LIN_LINFLEXD0_IRQHandler/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Linflexd_Lin_Ip_TxRx_IRQHandler/3 (Linflexd_Lin_Ip_TxRx_IRQHandler) @05b8ec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LIN_LINFLEXD2_IRQHandler/2 (1073741824 (estimated locally),1.00 per call) LIN_LINFLEXD1_IRQHandler/1 (1073741824 (estimated locally),1.00 per call) LIN_LINFLEXD0_IRQHandler/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
LIN_LINFLEXD2_IRQHandler/2 (LIN_LINFLEXD2_IRQHandler) @05b8e7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Linflexd_Lin_Ip_Error_IRQHandler/4 (1073741824 (estimated locally),1.00 per call) Linflexd_Lin_Ip_TxRx_IRQHandler/3 (1073741824 (estimated locally),1.00 per call) 
LIN_LINFLEXD1_IRQHandler/1 (LIN_LINFLEXD1_IRQHandler) @05b8e540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Linflexd_Lin_Ip_Error_IRQHandler/4 (1073741824 (estimated locally),1.00 per call) Linflexd_Lin_Ip_TxRx_IRQHandler/3 (1073741824 (estimated locally),1.00 per call) 
LIN_LINFLEXD0_IRQHandler/0 (LIN_LINFLEXD0_IRQHandler) @05b8e2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Linflexd_Lin_Ip_Error_IRQHandler/4 (1073741824 (estimated locally),1.00 per call) Linflexd_Lin_Ip_TxRx_IRQHandler/3 (1073741824 (estimated locally),1.00 per call) 

;; Function LIN_LINFLEXD0_IRQHandler (LIN_LINFLEXD0_IRQHandler, funcdef_no=0, decl_uid=5770, cgraph_uid=1, symbol_order=0)

Modification phase of node LIN_LINFLEXD0_IRQHandler/0
LIN_LINFLEXD0_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Linflexd_Lin_Ip_TxRx_IRQHandler (0);
  # DEBUG BEGIN_STMT
  Linflexd_Lin_Ip_Error_IRQHandler (0);
  return;

}



;; Function LIN_LINFLEXD1_IRQHandler (LIN_LINFLEXD1_IRQHandler, funcdef_no=1, decl_uid=5772, cgraph_uid=2, symbol_order=1)

Modification phase of node LIN_LINFLEXD1_IRQHandler/1
LIN_LINFLEXD1_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Linflexd_Lin_Ip_TxRx_IRQHandler (1);
  # DEBUG BEGIN_STMT
  Linflexd_Lin_Ip_Error_IRQHandler (1);
  return;

}



;; Function LIN_LINFLEXD2_IRQHandler (LIN_LINFLEXD2_IRQHandler, funcdef_no=2, decl_uid=5774, cgraph_uid=3, symbol_order=2)

Modification phase of node LIN_LINFLEXD2_IRQHandler/2
LIN_LINFLEXD2_IRQHandler ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Linflexd_Lin_Ip_TxRx_IRQHandler (2);
  # DEBUG BEGIN_STMT
  Linflexd_Lin_Ip_Error_IRQHandler (2);
  return;

}


