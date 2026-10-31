/* sub_0802CD84  (original: 0x0802CD84-0x0802CDE0 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EDF8();
extern int sub_08000158();


void sub_0802CD84(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x58);
    iVar1 = sub_08000158(0xaf);
    if (iVar3 == iVar1) {
      uVar2 = sub_08000158(0xb0);
      sub_0800EDF8(param_2,uVar2);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x58);
      iVar1 = sub_08000158(0xb2);
      if (iVar3 == iVar1) {
        uVar2 = sub_08000158(0x101);
        sub_0800EDF8(param_2,uVar2);
      }
      else {
        iVar3 = *(int *)(param_2 + 0x58);
        iVar1 = sub_08000158(0xac);
        if (iVar3 == iVar1) {
          uVar2 = sub_08000158(0x56);
          sub_0800EDF8(param_2,uVar2);
        }
      }
    }
  }
  return;
}

