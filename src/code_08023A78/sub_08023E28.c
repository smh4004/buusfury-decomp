/* sub_08023E28  (original: 0x08023E28-0x08023EE6 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_08023DBA();
extern int __call_via_r3();


void sub_08023E28(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 4);
  iVar1 = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x3c) = iVar1;
  if (7 < iVar1) {
    if (iVar1 == 8) {
      __call_via_r3(piVar4,0xe,1,*(int *)(*piVar4 + 0x30) + *piVar4);
      sub_08023DBA(param_1,piVar4);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar1 < iVar2 / 2 + 8) {
        sub_08023DBA(param_1,piVar4);
      }
      else if (iVar1 < iVar2 + 8) {
        iVar3 = 2;
        if (*(int *)piVar4[0x14] == 4) {
          iVar3 = 2 - (((iVar1 - iVar2) + 8) * 0x10000000 >> 0x1f);
        }
        __call_via_r3(piVar4,0xe,iVar3,*(int *)(*piVar4 + 0x30) + *piVar4);
        sub_08023DBA(param_1,piVar4);
      }
      else if (iVar2 + 8 == iVar1) {
        __call_via_r3(piVar4,0xe,0,*(int *)(*piVar4 + 0x30) + *piVar4);
        iVar1 = *(int *)(param_1 + 0x24);
        piVar4[0x5e] = *(int *)(param_1 + 0x20);
        piVar4[0x5f] = iVar1;
      }
      else if (iVar2 + 0x10 <= iVar1) {
        iVar1 = *(int *)(*piVar4 + 0x40);
        __call_via_r1(piVar4,iVar1 + *piVar4,iVar1,param_4,param_4);
        __call_via_r2(piVar4,0,*(int *)(*piVar4 + 0x28) + *piVar4);
      }
    }
  }
  return;
}

