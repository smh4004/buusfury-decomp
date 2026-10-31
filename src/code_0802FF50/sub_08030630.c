/* sub_08030630  (original: 0x08030630-0x080307FA in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EE78();
extern int sub_0800ECDA();
extern int sub_0800FE78();
extern int __call_via_r2();
extern int sub_0800FDFA();
extern int sub_0804F900();
extern int volatile DAT_03001b94;
extern undefined4 volatile DAT_03001c34;


void sub_08030630(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  unsigned int __frame[20];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_50 (*(int *)((char *)__frame + 0x0))
#define local_4c (*(int *)((char *)__frame + 0x4))
#define auStack_48 ((undefined1 *)((char *)__frame + 0x8))
#define local_40 (*(int *)((char *)__frame + 0x10))
#define local_3c (*(int *)((char *)__frame + 0x14))
#define local_38 (*(int *)((char *)__frame + 0x18))
#define local_34 (*(int *)((char *)__frame + 0x1c))
#define iStack_30 (*(int *)((char *)__frame + 0x20))
#define iStack_2c (*(int *)((char *)__frame + 0x24))
#define local_28 (*(int *)((char *)__frame + 0x28))
#define local_24 (*(int *)((char *)__frame + 0x2c))
#define local_20 (*(int *)((char *)__frame + 0x30))
#define local_1c (*(int *)((char *)__frame + 0x34))
#define local_18 (*(int * *)((char *)__frame + 0x38))
  iVar3 = DAT_03001b94;
  if (DAT_03001b94 != 0) {
    piVar6 = (int *)(param_1 + 4);
    local_18 = (int *)(param_1 + 8);
    if (*(short *)((int)param_2 + 0x12) == 0) {
      sub_0800FDFA(auStack_48,DAT_03001b94);
      sub_0804F900(&local_38,auStack_48);
      sub_0800FDFA(&iStack_30,param_2);
      sub_0804F900(&local_20,&iStack_30);
      local_50 = local_38 - local_20;
      local_4c = local_34 - local_1c;
      iVar4 = 1;
      if (local_50 < 1) {
        iVar4 = -1;
      }
      iVar2 = 1;
      if (local_4c < 1) {
        iVar2 = -1;
      }
      *piVar6 = iVar4 << 8;
      *local_18 = iVar2 << 8;
      local_20 = 0x20;
      if (local_50 < 1) {
        local_20 = -0x20;
      }
      local_1c = 0x20;
      if (local_4c < 1) {
        local_1c = -0x20;
      }
      sub_0800FDFA(&local_50,iVar3);
      sub_0804F900(&local_40,&local_50);
      sub_0800FDFA(&local_38,param_2);
      sub_0804F900(&local_28,&local_38);
      iVar5 = 1;
      iVar2 = local_40 - (local_28 + local_20);
      iVar4 = local_3c - (local_24 + local_1c);
      iVar3 = 1;
      if (iVar2 < 1) {
        iVar3 = -1;
      }
      if (iVar4 < 1) {
        iVar5 = -1;
      }
      local_24 = iVar5 * 0x100;
      local_28 = iVar3 * 0x100;
      if ((iVar3 * 0x100 * *(int *)(param_1 + 4) >> 8 < 0) &&
         (iVar3 = local_24, local_24 * *(int *)(param_1 + 8) >> 8 < 0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)(param_1 + 0xc) = uVar1;
      *(undefined1 *)((int)param_2 + 0x11) = 0;
      if (*(char *)(param_1 + 0xc) == '\0') {
        *(undefined2 *)((int)param_2 + 0x12) = 0;
        sub_0800ECDA(param_2,0,iVar3,iVar5,iVar2,iVar4);
      }
      else if (*(char *)(param_1 + 0xc) == '\x01') {
        sub_0800ECDA(param_2,0xe,iVar3,iVar5,iVar2,iVar4);
      }
    }
    if (*(char *)(param_1 + 0xc) != '\0') {
      iStack_2c = (*local_18 << 9) >> 8;
      iStack_30 = (*piVar6 << 9) >> 8;
      piVar6 = &iStack_30;
    }
    local_38 = param_2[0x68] + *piVar6;
    local_34 = param_2[0x69] + piVar6[1];
    local_28 = local_38;
    local_24 = local_34;
    local_20 = local_38;
    local_1c = local_34;
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    iVar3 = __call_via_r2(param_2,&local_20,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar3 != 0) {
      param_2[0x68] = local_20;
      param_2[0x69] = local_1c;
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    sub_0800FE78(&local_40,param_2);
    sub_0800FE78(&iStack_30,DAT_03001c34);
    if ((((local_40 < local_28) && (iStack_30 < local_38)) && (local_3c < local_24)) &&
       (iStack_2c < local_34)) {
      sub_0800EE78(param_2);
    }
  }
  return;
}

