/* sub_0803C8FC  (original: 0x0803C8FC-0x0803C9F8 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FDFA();
extern int sub_0800FE78();
extern int sub_0803E378();
extern int sub_0803FACC();
extern int __call_via_r3();
extern undefined volatile gUnknown_083192A8;
extern undefined volatile gUnknown_086B8098;
extern int * volatile DAT_03001b94;
extern undefined volatile DAT_03003e5c;


void sub_0803C8FC(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  unsigned int __frame[28];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_70 ((undefined1 *)((char *)__frame + 0x0))
#define iStack_6c (*(int *)((char *)__frame + 0x4))
#define local_68 (*(int *)((char *)__frame + 0x8))
#define iStack_64 (*(int *)((char *)__frame + 0xc))
#define local_60 (*(int *)((char *)__frame + 0x10))
#define uStack_5c (*(undefined1 *)((char *)__frame + 0x14))
#define uStack_58 (*(undefined4 *)((char *)__frame + 0x18))
#define puStack_54 (*(undefined * *)((char *)__frame + 0x1c))
#define iStack_50 (*(int *)((char *)__frame + 0x20))
#define local_44 (*(int *)((char *)__frame + 0x2c))
#define local_40 (*(int *)((char *)__frame + 0x30))
#define iStack_3c (*(int *)((char *)__frame + 0x34))
#define iStack_38 (*(int *)((char *)__frame + 0x38))
#define iStack_34 (*(int *)((char *)__frame + 0x3c))
#define local_2c (*(int *)((char *)__frame + 0x44))
#define local_28 (*(int *)((char *)__frame + 0x48))
#define local_24 (*(int *)((char *)__frame + 0x4c))
#define local_20 (*(int *)((char *)__frame + 0x50))
#define local_1c (*(int *)((char *)__frame + 0x54))
#define local_18 (*(int *)((char *)__frame + 0x58))
  piVar2 = DAT_03001b94;
  if ((DAT_03001b94 != (int *)0x0) && (DAT_03001b94[0x73] != 0)) {
    sub_0800FE78(&local_24,param_2);
    local_44 = local_24 + local_1c >> 1;
    iVar3 = local_20 + local_18 >> 1;
    local_40 = iVar3;
    local_2c = local_44;
    local_28 = iVar3;
    sub_0800FDFA(&iStack_3c,param_2);
    cVar1 = *(char *)(param_2 + 0x10);
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      iStack_6c = iStack_3c;
      iStack_64 = iStack_34;
    }
    else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      local_60 = local_18 + 3;
      local_68 = iVar3;
    }
    cVar1 = *(char *)(param_2 + 0x10);
    if (cVar1 == '\0') {
      local_68 = local_20;
      local_60 = local_18 + -6;
    }
    else if (cVar1 == '\x01') {
      local_68 = local_20;
      local_60 = iStack_38;
    }
    else if (cVar1 == '\x02') {
      iStack_6c = local_24 + -4;
      iStack_64 = local_2c;
    }
    else if (cVar1 == '\x03') {
      iStack_6c = local_2c;
      iStack_64 = local_1c + 3;
    }
    uStack_5c = *(undefined1 *)(param_2 + 0x10);
    puStack_54 = &gUnknown_086B8098;
    uStack_58 = 0x400;
    auStack_70[0] = 0;
    iVar3 = *piVar2;
    iStack_50 = param_2;
    local_40 = param_2;
    iVar3 = __call_via_r3(piVar2,0,auStack_70,*(int *)(iVar3 + 0x24) + iVar3);
    if (iVar3 != 0) {
      iVar3 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar3 + 0x30) * 0xc,0x40,0);
    }
  }
  return;
}

