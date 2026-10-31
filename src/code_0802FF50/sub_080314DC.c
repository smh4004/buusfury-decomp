/* sub_080314DC  (original: 0x080314DC-0x080315A4 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08000158();
extern int sub_0800EDF8();
extern undefined4 volatile DAT_03001b30;


undefined4 sub_080314DC(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((undefined4 *)param_2[5] == &DAT_03001b30) {
    uVar1 = 0;
  }
  else {
    iVar3 = param_2[0x16];
    iVar2 = sub_08000158(0xbc);
    if (iVar3 == iVar2) {
      uVar1 = sub_08000158(0xbb);
      sub_0800EDF8(param_2,uVar1);
    }
    else {
      iVar3 = param_2[0x16];
      iVar2 = sub_08000158(0xbb);
      if (iVar3 == iVar2) {
        uVar1 = sub_08000158(0xbc);
        sub_0800EDF8(param_2,uVar1);
      }
      else {
        iVar3 = param_2[0x16];
        iVar2 = sub_08000158(0xe7);
        if (iVar3 == iVar2) {
          uVar1 = sub_08000158(0xe6);
          sub_0800EDF8(param_2,uVar1);
        }
        else {
          iVar3 = param_2[0x16];
          iVar2 = sub_08000158(0xe6);
          if (iVar3 == iVar2) {
            uVar1 = sub_08000158(0xe7);
            sub_0800EDF8(param_2,uVar1);
          }
          else {
            iVar3 = param_2[0x16];
            iVar2 = sub_08000158(0x85);
            if (iVar3 == iVar2) {
              uVar1 = sub_08000158(0x86);
              sub_0800EDF8(param_2,uVar1);
            }
            else {
              iVar3 = param_2[0x16];
              iVar2 = sub_08000158(0x86);
              if (iVar3 == iVar2) {
                uVar1 = sub_08000158(0x85);
                sub_0800EDF8(param_2,uVar1);
              }
            }
          }
        }
      }
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    uVar1 = 1;
  }
  return uVar1;
}

