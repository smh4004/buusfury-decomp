/* sub_08037C72  (original: 0x08037C72-0x08037D1E in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C70();
extern int sub_0803E378();
extern int sub_08019B4E();
extern int sub_0803FACC();
extern undefined volatile gUnknown_083192A8;
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_0876CBD8;
extern undefined volatile gUnknown_086B8100;


void sub_08037C72(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  unsigned int __frame[24];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_60 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_5c (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_58 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_54 (*(undefined4 *)((char *)__frame + 0xc))
#define uStack_50 (*(undefined4 *)((char *)__frame + 0x10))
#define uStack_4c (*(undefined1 *)((char *)__frame + 0x14))
#define uStack_48 (*(undefined4 *)((char *)__frame + 0x18))
#define puStack_44 (*(undefined * *)((char *)__frame + 0x1c))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0x20))
#define auStack_36 ((undefined1 *)((char *)__frame + 0x2a))
#define iStack_30 (*(int *)((char *)__frame + 0x30))
#define uStack_2c (*(undefined4 *)((char *)__frame + 0x34))
#define uStack_28 (*(undefined4 *)((char *)__frame + 0x38))
#define local_24 (*(undefined4 *)((char *)__frame + 0x3c))
#define local_20 (*(undefined4 *)((char *)__frame + 0x40))
#define local_1c (*(undefined4 *)((char *)__frame + 0x44))
#define local_18 (*(undefined4 *)((char *)__frame + 0x48))
  local_1c = 0xd0c0b0a;
  local_18 = 0x11100f0e;
  local_20 = 0xf10110a;
  local_24 = 0xb0c0d0e;
  if (*(char *)(param_2 + 0x10) == '\x03') {
    bVar1 = *(byte *)((int)&uStack_28 + *(byte *)(param_2 + 0x11) + 2);
  }
  else {
    bVar1 = *(byte *)((int)&local_20 + *(byte *)(param_2 + 0x11) + 2);
  }
  *(undefined **)(param_1 + 0x18) = &gUnknown_0876CBD8 + (uint)bVar1 * 0xc;
  sub_08019B4E(param_1);
  uStack_28 = 0x1010103;
  uStack_2c = 2;
  uStack_40 = *(undefined4 *)(param_1 + 0x1c);
  uStack_4c = auStack_36[bVar1];
  puStack_44 = &gUnknown_086B8100;
  uStack_48 = 0x2800;
  uStack_5c = *(undefined4 *)(param_1 + 0x28);
  uStack_58 = *(undefined4 *)(param_1 + 0x2c);
  uStack_54 = *(undefined4 *)(param_1 + 0x30);
  uStack_50 = *(undefined4 *)(param_1 + 0x34);
  auStack_60[0] = *(undefined1 *)(param_1 + 0x11);
  iStack_30 = param_1;
  iVar2 = sub_08011C70(&DAT_03001c4c,0,auStack_60);
  if (iVar2 != 0) {
    iVar2 = sub_0803FACC(2);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
  }
  return;
}

