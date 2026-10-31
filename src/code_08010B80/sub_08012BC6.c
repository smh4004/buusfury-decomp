/* sub_08012BC6  (original: 0x08012BC6-0x08012C06 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08013504();
extern int __call_via_r2();
extern int sub_0801DFE0();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;


void sub_08012BC6(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if (*(int *)(param_1 + 8) == 0) {
    iVar3 = __call_via_r1(param_2,*(int *)(iVar3 + 0x84) + iVar3,iVar3,param_4,param_4);
    if ((int)((uint)*(ushort *)(iVar3 + 2) << 0x17) < 0) {
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if (((int)((uint)*(ushort *)(iVar3 + 4) << 0x1e) < 0) &&
         (iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2),
         *(short *)(iVar3 + 0x1a) != 0)) {
        uVar2 = sub_0801DFE0(0,param_2);
        *(undefined4 *)(param_1 + 8) = uVar2;
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
    }
    else {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  else {
    iVar3 = __call_via_r1(param_2,*(int *)(iVar3 + 0x80) + iVar3,iVar3,param_4,param_4);
    iVar1 = *(int *)(param_1 + 4) + ((uint)*(byte *)(iVar3 + 0x57) * 0x3277 >> 4);
    *(int *)(param_1 + 4) = iVar1;
    sub_08013504(iVar3,iVar1 >> 0x10);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff;
    if (*(short *)(iVar3 + 0x1a) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x44) = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(*param_2 + 0x84);
      iVar3 = __call_via_r1(param_2,iVar3 + *param_2,iVar3,0,param_4);
      if (((int)((uint)*(ushort *)(iVar3 + 2) << 0x1e) < 0) &&
         (iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2),
         (int)((uint)*(ushort *)(iVar3 + 2) << 0x17) < 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *(undefined4 *)(iVar1 + 0x44) = uVar2;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x40);
    if ((iVar3 == 0) && (*(int *)(*(int *)(param_1 + 8) + 0x44) == 0)) {
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar3 + 2) << 0x17) < 0) {
        sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
    else if (iVar3 < 0x18) {
      *(undefined1 *)((int)param_2 + 0x1b9) = 0x80;
      *(undefined1 *)(param_2 + 0x6e) = 0x80;
    }
    else {
      *(undefined1 *)((int)param_2 + 0x1b9) = 0;
      *(undefined1 *)(param_2 + 0x6e) = 0;
    }
  }
  return;
}

