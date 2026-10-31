/* sub_08000CA6  (original: 0x08000CA6-0x08000CE8 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();
extern int sub_0803D5B8();
extern undefined4 * volatile DAT_03001008;
extern undefined volatile _0804DEEC;


void sub_08000CA6(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = sub_080001C6(param_1[iVar2]);
  if ((DAT_03001008 == (undefined4 *)0x0) &&
     (DAT_03001008 = (undefined4 *)sub_0803D5B8(0x28), DAT_03001008 != (undefined4 *)0x0)) {
    *DAT_03001008 = &_0804DEEC;
    DAT_03001008[1] = 0;
  }
  piVar1 = DAT_03001008 + 1;
  iVar3 = *piVar1;
  *piVar1 = iVar3 + 1;
  piVar1[iVar3 + 1] = iVar2;
  return;
}

