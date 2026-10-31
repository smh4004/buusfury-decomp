/* sub_0803D8A0  (original: 0x0803D8A0-0x0803D8F2 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0803D7FA();
extern int __call_via_r1();
extern int volatile DAT_03000f98;
extern undefined volatile DAT_03000f9c;
extern undefined4 volatile _03000F90;
extern undefined4 volatile DAT_0300348c;


undefined4 sub_0803D8A0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_03000f98 * 4;
  DAT_03000f98 = DAT_03000f98 + 1;
  *(int **)(&DAT_03000f9c + iVar2) = _03000F90;
  _03000F90 = &DAT_0300348c;
  __call_via_r1(param_1,*(int *)(*param_1 + 4) + *param_1);
  _03000F90 = param_1;
  uVar3 = sub_0803D7FA();
  piVar1 = _03000F90;
  if (DAT_03000f98 != 0) {
    _03000F90 = &DAT_0300348c;
    iVar2 = *piVar1;
    __call_via_r1(piVar1,*(int *)(iVar2 + 8) + iVar2);
    DAT_03000f98 = DAT_03000f98 + -1;
    _03000F90 = *(int **)(&DAT_03000f9c + DAT_03000f98 * 4);
  }
  return uVar3;
}

