
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Linflexd_Lin_Ip_CheckWakeup/0:

 Propagating constants:

Not considering Linflexd_Lin_Ip_CheckWakeup for cloning; -fipa-cp-clone disabled.

overall_size: 8, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Linflexd_Lin_Ip_CheckWakeup/0:
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

Linflexd_Lin_Ip_apxBases/1 (Linflexd_Lin_Ip_apxBases) @05bae4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Linflexd_Lin_Ip_CheckWakeup/0 (read)
  Availability: not_available
  Varpool flags: read-only
Linflexd_Lin_Ip_CheckWakeup/0 (Linflexd_Lin_Ip_CheckWakeup) @05badd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Linflexd_Lin_Ip_apxBases/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Linflexd_Lin_Ip_CheckWakeup (Linflexd_Lin_Ip_CheckWakeup, funcdef_no=0, decl_uid=5745, cgraph_uid=1, symbol_order=0)

Modification phase of node Linflexd_Lin_Ip_CheckWakeup/0
Linflexd_Lin_Ip_CheckWakeup (const uint32 Instance)
{
  boolean RetVal;
  const struct LINFLEXD_Type * Base;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  Base_6 = Linflexd_Lin_Ip_apxBases[Instance_5(D)];
  # DEBUG Base => Base_6
  # DEBUG BEGIN_STMT
  _1 ={v} Base_6->LINSR;
  _2 = _1 & 32;
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 4> [local count: 1073741824]:
  # RetVal_3 = PHI <0(2), 1(3)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  return RetVal_3;

}


