
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

intRouteConfig/4 (intRouteConfig) @05e55ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ipwNonCoreConfig/2 (addr)
  Availability: not_available
  Varpool flags: read-only
intCtrlConfig/3 (intCtrlConfig) @05e55c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ipwConfig/1 (addr)
  Availability: not_available
  Varpool flags: read-only
ipwNonCoreConfig/2 (ipwNonCoreConfig) @05e55b40
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: intRouteConfig/4 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
ipwConfig/1 (ipwConfig) @05e55af8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: intCtrlConfig/3 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
