/* sub_0803125C  (original: 0x0803125C-0x08031388 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FACC();
extern int __call_via_r3();
extern int sub_0800FE78();
extern int sub_0800FDFA();
extern int sub_0803E378();
extern undefined volatile gUnknown_083192A8;
extern undefined volatile gUnknown_086B8098;
extern int * volatile DAT_03001b94;
extern undefined volatile DAT_03003e5c;


void sub_0803125C(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[32];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_80 (*(int *)((char *)__frame + 0x0))
#define local_7c (*(int *)((char *)__frame + 0x4))
#define local_78 (*(int *)((char *)__frame + 0x8))
#define local_74 (*(int *)((char *)__frame + 0xc))
#define auStack_70 ((undefined1 *)((char *)__frame + 0x10))
#define local_6c (*(int *)((char *)__frame + 0x14))
#define local_68 (*(int *)((char *)__frame + 0x18))
#define local_64 (*(int *)((char *)__frame + 0x1c))
#define local_60 (*(int *)((char *)__frame + 0x20))
#define uStack_5c (*(undefined1 *)((char *)__frame + 0x24))
#define uStack_58 (*(undefined4 *)((char *)__frame + 0x28))
#define puStack_54 (*(undefined * *)((char *)__frame + 0x2c))
#define iStack_50 (*(int *)((char *)__frame + 0x30))
#define local_44 (*(int *)((char *)__frame + 0x3c))
#define local_40 (*(int *)((char *)__frame + 0x40))
#define local_3c (*(int *)((char *)__frame + 0x44))
#define local_38 (*(int *)((char *)__frame + 0x48))
#define local_34 (*(int *)((char *)__frame + 0x4c))
#define local_30 (*(int *)((char *)__frame + 0x50))
#define local_2c (*(int *)((char *)__frame + 0x54))
#define local_28 (*(int *)((char *)__frame + 0x58))
#define local_24 (*(int *)((char *)__frame + 0x5c))
#define local_20 (*(int *)((char *)__frame + 0x60))
#define local_1c (*(int *)((char *)__frame + 0x64))
#define local_18 (*(int *)((char *)__frame + 0x68))
  piVar1 = DAT_03001b94;
  if (DAT_03001b94 != (int *)0x0) {
    sub_0800FE78(&local_24,DAT_03001b94);
    sub_0800FE78(&local_34,param_2);
    local_44 = local_34 + local_2c >> 1;
    local_68 = local_30 + local_28 >> 1;
    local_74 = local_20 + local_18 >> 1;
    local_78 = local_24 + local_1c >> 1;
    local_80 = local_78 - local_44;
    iVar4 = local_74 - local_68;
    iVar2 = local_80;
    if (local_80 < 0) {
      iVar2 = -local_80;
    }
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = -iVar4;
    }
    local_7c = iVar4;
    local_3c = local_44;
    local_38 = local_68;
    if (iVar3 < iVar2) {
      local_60 = local_28 + 3;
      if (local_80 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 2;
        local_6c = local_34 + -4;
        local_64 = local_44;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 3;
        local_6c = local_44;
        local_64 = local_2c + 3;
      }
    }
    else {
      local_40 = local_68;
      sub_0800FDFA(&local_80,param_2);
      local_6c = local_80;
      local_64 = local_78;
      if (iVar4 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 1;
        local_68 = local_30;
        local_60 = local_7c;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 0;
        local_68 = local_30;
        local_60 = local_28 + -6;
      }
    }
    uStack_5c = *(undefined1 *)(param_2 + 0x10);
    puStack_54 = &gUnknown_086B8098;
    uStack_58 = 0x400;
    auStack_70[0] = 0;
    iVar2 = *piVar1;
    iStack_50 = param_2;
    local_40 = param_2;
    iVar2 = __call_via_r3(piVar1,0,auStack_70,*(int *)(iVar2 + 0x24) + iVar2);
    if (iVar2 != 0) {
      iVar2 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
    }
  }
  return;
}

