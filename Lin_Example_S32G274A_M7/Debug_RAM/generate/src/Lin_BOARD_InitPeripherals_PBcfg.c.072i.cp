
IPA constant propagation start:

IPA structures before propagation:

Jump functions:

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

Lin_Ipw_pHwConfigPB_0_BOARD_INITPERIPHERALS/3 (Lin_Ipw_pHwConfigPB_0_BOARD_INITPERIPHERALS) @05b26510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Lin_LinChannel_0_BOARD_INITPERIPHERALS_UnAllocatedPar/0 (addr)
  Availability: not_available
  Varpool flags: read-only
Lin_PBCfgVariantPredefined/2 (Lin_PBCfgVariantPredefined) @05b263f0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Lin_Config/1 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Lin_Config/1 (Lin_Config) @05b26360
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Lin_LinChannel_0_BOARD_INITPERIPHERALS_UnAllocatedPar/0 (addr)
  Referring: Lin_PBCfgVariantPredefined/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Lin_LinChannel_0_BOARD_INITPERIPHERALS_UnAllocatedPar/0 (Lin_LinChannel_0_BOARD_INITPERIPHERALS_UnAllocatedPar) @05b262d0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Lin_Ipw_pHwConfigPB_0_BOARD_INITPERIPHERALS/3 (addr)
  Referring: Lin_Config/1 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
