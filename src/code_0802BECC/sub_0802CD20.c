/* sub_0802CD20  (original: 0x0802CD20-0x0802CD7C in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EDF8();
extern int sub_08000158();


void sub_0802CD20(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x58);
    iVar1 = sub_08000158(0xb0);
    if (iVar3 == iVar1) {
      uVar2 = sub_08000158(0xaf);
      sub_0800EDF8(param_2,uVar2);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x58);
      iVar1 = sub_08000158(0x101);
      if (iVar3 == iVar1) {
        uVar2 = sub_08000158(0xb2);
        sub_0800EDF8(param_2,uVar2);
      }
      else {
        iVar3 = *(int *)(param_2 + 0x58);
        iVar1 = sub_08000158(0x56);
        if (iVar3 == iVar1) {
          uVar2 = sub_08000158(0xac);
          sub_0800EDF8(param_2,uVar2);
        }
      }
    }
  }
  return;
}

