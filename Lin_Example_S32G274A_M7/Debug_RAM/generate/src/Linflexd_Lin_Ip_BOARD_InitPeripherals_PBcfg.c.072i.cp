
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Lin_Ipw_Callback/1:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Linflexd_Lin_Ip_axStateStructure/2 (Linflexd_Lin_Ip_axStateStructure) @05aae750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Linflexd_Lin_Ip_pHwConfigPB_0_BOARD_INITPERIPHERALS/0 (addr)
  Availability: not_available
  Varpool flags:
Lin_Ipw_Callback/1 (Lin_Ipw_Callback) @05aa6700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Linflexd_Lin_Ip_pHwConfigPB_0_BOARD_INITPERIPHERALS/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Linflexd_Lin_Ip_pHwConfigPB_0_BOARD_INITPERIPHERALS/0 (Linflexd_Lin_Ip_pHwConfigPB_0_BOARD_INITPERIPHERALS) @05aae630
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Lin_Ipw_Callback/1 (addr)Linflexd_Lin_Ip_axStateStructure/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
