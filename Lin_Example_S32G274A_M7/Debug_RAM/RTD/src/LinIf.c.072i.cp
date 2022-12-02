
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  LinIf_LinErrorIndication/5:
  Jump functions of caller  LinIf_TxConfirmation/4:
  Jump functions of caller  LinIf_RxIndication/3:
  Jump functions of caller  LinIf_HeaderIndication/2:
  Jump functions of caller  LinIf_CheckWakeup/1:
  Jump functions of caller  LinIf_WakeupConfirmation/0:

 Propagating constants:

Not considering LinIf_LinErrorIndication for cloning; -fipa-cp-clone disabled.
Not considering LinIf_TxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering LinIf_RxIndication for cloning; -fipa-cp-clone disabled.
Not considering LinIf_HeaderIndication for cloning; -fipa-cp-clone disabled.
Not considering LinIf_CheckWakeup for cloning; -fipa-cp-clone disabled.
Not considering LinIf_WakeupConfirmation for cloning; -fipa-cp-clone disabled.

overall_size: 18, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: LinIf_LinErrorIndication/5:
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
  Node: LinIf_TxConfirmation/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: LinIf_RxIndication/3:
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
  Node: LinIf_HeaderIndication/2:
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
  Node: LinIf_CheckWakeup/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: LinIf_WakeupConfirmation/0:
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

LinIf_LinErrorIndication/5 (LinIf_LinErrorIndication) @04fb57e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
LinIf_TxConfirmation/4 (LinIf_TxConfirmation) @04fb52a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
LinIf_RxIndication/3 (LinIf_RxIndication) @04fb5ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
LinIf_HeaderIndication/2 (LinIf_HeaderIndication) @04fb5c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
LinIf_CheckWakeup/1 (LinIf_CheckWakeup) @04fb59a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
LinIf_WakeupConfirmation/0 (LinIf_WakeupConfirmation) @04fb5700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function LinIf_WakeupConfirmation (LinIf_WakeupConfirmation, funcdef_no=0, decl_uid=5817, cgraph_uid=1, symbol_order=0)

Modification phase of node LinIf_WakeupConfirmation/0
LinIf_WakeupConfirmation (EcuM_WakeupSourceType WakeupSource)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function LinIf_CheckWakeup (LinIf_CheckWakeup, funcdef_no=1, decl_uid=5815, cgraph_uid=2, symbol_order=1)

Modification phase of node LinIf_CheckWakeup/1
LinIf_CheckWakeup (EcuM_WakeupSourceType WakeupSource)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function LinIf_HeaderIndication (LinIf_HeaderIndication, funcdef_no=2, decl_uid=5820, cgraph_uid=3, symbol_order=2)

Modification phase of node LinIf_HeaderIndication/2
LinIf_HeaderIndication (NetworkHandleType Channel, struct Lin_PduType * PduPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function LinIf_RxIndication (LinIf_RxIndication, funcdef_no=3, decl_uid=5823, cgraph_uid=4, symbol_order=3)

Modification phase of node LinIf_RxIndication/3
LinIf_RxIndication (NetworkHandleType Channel, uint8 * Lin_SduPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function LinIf_TxConfirmation (LinIf_TxConfirmation, funcdef_no=4, decl_uid=5825, cgraph_uid=5, symbol_order=4)

Modification phase of node LinIf_TxConfirmation/4
LinIf_TxConfirmation (NetworkHandleType Channel)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function LinIf_LinErrorIndication (LinIf_LinErrorIndication, funcdef_no=5, decl_uid=5828, cgraph_uid=6, symbol_order=5)

Modification phase of node LinIf_LinErrorIndication/5
LinIf_LinErrorIndication (NetworkHandleType Channel, Lin_SlaveErrorType ErrorStatus)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}


