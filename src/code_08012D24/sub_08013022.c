/* sub_08013022  (original: 0x08013022-0x080131BA in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_08012B5E();
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_0803D5B8();
extern int sub_08012A24();
extern int volatile DAT_03000f94;
extern undefined volatile _0804C744;


void sub_08013022(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_2 + 0x84);
  iVar4 = __call_via_r1(param_2,iVar4 + *param_2,iVar4,param_4,param_4);
  if ((((int)((uint)*(ushort *)(iVar4 + 2) << 0x17) < 0) && (7 < *(byte *)param_2[0x16])) &&
     (*(int *)((byte *)param_2[0x16] + 0x70) != 0)) {
    puVar2 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804C744;
      puVar2[2] = 0;
      puVar2[1] = 0;
    }
    sub_0800ECDA(param_2,7);
    sub_0800ED18(param_2,puVar2);
  }
  else {
    iVar4 = *(int *)(param_1 + 4) + 1;
    *(int *)(param_1 + 4) = iVar4;
    if (0x400 < iVar4) {
      if ((*(byte *)param_2[0x16] < 9) || (*(int *)((byte *)param_2[0x16] + 0x74) == 0)) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        __call_via_r2(param_2,8,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
    iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    iVar4 = DAT_03000f94;
    uVar1 = *(ushort *)(iVar3 + 4) & 0xf0;
    if ((*(ushort *)(iVar3 + 4) & 0xf0) != 0) {
      if ((((uint)(DAT_03000f94 - param_2[0x8d]) < 0x14) && ((uVar1 & ~-uVar1) == 0)) &&
         ((*(ushort *)(param_2 + 0x8c) & uVar1) != 0)) {
        __call_via_r2(param_2,2,*(int *)(*param_2 + 0x28) + *param_2);
        return;
      }
      *(ushort *)(param_2 + 0x8c) = uVar1;
      param_2[0x8d] = iVar4;
    }
    iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if (((uint)*(ushort *)(iVar4 + 2) << 0x18) >> 0x1c != 0) {
      iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar4 + 4) << 0x1a) < 0) {
        *(undefined1 *)(param_2 + 4) = 2;
      }
      iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar4 + 4) << 0x1b) < 0) {
        *(undefined1 *)(param_2 + 4) = 3;
      }
      iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar4 + 4) << 0x19) < 0) {
        *(undefined1 *)(param_2 + 4) = 1;
      }
      iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar4 + 4) << 0x18) < 0) {
        *(undefined1 *)(param_2 + 4) = 0;
      }
      __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
    }
    iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if ((*(ushort *)(iVar4 + 4) & 1) == 0) {
      iVar4 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar4 + 4) << 0x1e) < 0) {
        sub_08012B5E(param_2);
      }
    }
    else {
      sub_08012A24(param_2);
    }
  }
  return;
}

