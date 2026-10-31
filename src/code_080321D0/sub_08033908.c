/* sub_08033908  (original: 0x08033908-0x0803396E in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EDF8();
extern int sub_08000158();
extern int sub_0800F954();


void sub_08033908(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x58);
  iVar1 = sub_08000158(0x114);
  if (iVar3 == iVar1) {
    uVar2 = sub_08000158(0x112);
    sub_0800EDF8(param_2,uVar2);
  }
  else {
    iVar3 = *(int *)(param_2 + 0x58);
    iVar1 = sub_08000158(0xcb);
    if (iVar3 == iVar1) {
      uVar2 = sub_08000158(0xca);
      sub_0800EDF8(param_2,uVar2);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x58);
      iVar1 = sub_08000158(0x121);
      if (iVar3 == iVar1) {
        uVar2 = sub_08000158(0x120);
        sub_0800EDF8(param_2,uVar2);
      }
    }
  }
  sub_0800F954(param_2);
  return;
}

