/* sub_0800BE90  (original: 0x0800BE90-0x0800BF34 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; BLOCKED: passes every snapshot (also one taken in the decomp ROM), but linking it changes the area-name sprite in game (decomp_long.txt s21/s22); suspected: a callee reads uninitialised stack left by this frame.
 */
#include "ghidra_types.h"
extern int sub_0804915C();
extern int sub_0803F58C();
extern int sub_0803DADA();
extern int Wfz_LoadContainer();
extern int sub_0803F540();
extern undefined volatile DAT_06010000;
extern undefined volatile gUnknown_0806E050;
extern undefined volatile gUIStringPtrs;
extern undefined volatile gUnknown_0807248C;


void sub_0800BE90(int param_1)

{
  int iVar1;
  unsigned int __frame[22];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_58 ((int *)((char *)__frame + 0x0))
#define local_48 ((undefined1 *)((char *)__frame + 0x10))
#define local_46 (*(undefined1 *)((char *)__frame + 0x12))
#define local_45 (*(undefined1 *)((char *)__frame + 0x13))
#define local_44 (*(undefined4 *)((char *)__frame + 0x14))
#define local_40 (*(undefined4 *)((char *)__frame + 0x18))
#define local_3c (*(undefined * *)((char *)__frame + 0x1c))
#define local_28 (*(undefined4 *)((char *)__frame + 0x30))
#define local_24 (*(undefined4 *)((char *)__frame + 0x34))
  sub_0803F540(local_48,0xf0);
  Wfz_LoadContainer(&gUnknown_0807248C,local_24);
  local_3c = &gUnknown_0806E050;
  local_44 = 0x78;
  local_40 = 0xb;
  local_45 = 2;
  local_46 = 1;
  local_28 = 0x803f5a5;
  local_48[0] = 1;
  sub_0803DADA(local_48,*(undefined4 *)(&gUIStringPtrs + *(int *)(param_1 + 0x14) * 4));
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0x20;
  local_58[3] = 0x10;
  iVar1 = 0;
  do {
    sub_0804915C((int)local_48,
                 (int)(&DAT_06010000 + iVar1 * 0x200 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 (int)local_58);
    iVar1 = iVar1 + 1;
    local_58[0] = local_58[0] + 0x20;
    local_58[2] = local_58[2] + 0x20;
  } while (iVar1 < 7);
  local_58[2] = 0xf0;
  sub_0804915C((int)local_48,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010e00,(int)local_58);
  sub_0803F58C(local_48,0);
  return;
}

