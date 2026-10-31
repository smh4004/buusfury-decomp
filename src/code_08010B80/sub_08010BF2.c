/* sub_08010BF2  (original: 0x08010BF2-0x08010C9C in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0800E8E6();
extern int sub_08013C66();
extern int volatile DAT_03001c38;


undefined4 sub_08010BF2(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  
  sub_0800E8E6();
  if ((DAT_03001c38 == 0) && (*(int *)(param_2 + 0x18) != 0)) {
    iVar2 = __call_via_r1(param_1,*(int *)(*param_1 + 0x80) + *param_1);
    puVar6 = (ushort *)(iVar2 + 0x16);
    if (*puVar6 == 0) {
      uVar1 = 1;
    }
    else {
      piVar5 = param_1 + 0x8a;
      iVar3 = *piVar5 + *(int *)(param_2 + 0x18);
      *piVar5 = iVar3;
      iVar4 = iVar3 >> 10;
      if (iVar4 == 0) {
        uVar1 = 0;
      }
      else {
        *piVar5 = iVar3 + iVar4 * -0x400;
        if ((short)*puVar6 < iVar4) {
          do {
            *puVar6 = 0;
          } while (*puVar6 != 0);
        }
        else {
          iVar3 = ((uint)*puVar6 - iVar4) * 0x10000;
          do {
            *puVar6 = (ushort)((uint)iVar3 >> 0x10);
          } while ((int)(short)*puVar6 != iVar3 >> 0x10);
        }
        if ((int)((uint)*(byte *)(iVar2 + 0x13) << 0x1f) < 0) {
          sub_08013C66();
        }
        if (*puVar6 == 0) {
          iVar2 = *(int *)(*param_1 + 0x7c);
          __call_via_r1(param_1,iVar2 + *param_1,iVar2,0,param_4);
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

