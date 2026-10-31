/* sub_08004E26  (original: 0x08004E26-0x08004EA6 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803F58C();
extern int Wfz_LoadContainer();
extern int sub_0804912C();
extern int sub_0803F540();
extern int sub_0803F9B8();
extern int sub_0803DA10();
extern int sub_08049144();
extern undefined1 volatile DAT_03003301;
extern undefined1 volatile DAT_04000053;
extern undefined volatile DAT_06000040;
extern undefined volatile DAT_0600f800;
extern undefined volatile gUnknown_08055620;
extern undefined2 volatile REG_BG3VOFS;
extern undefined2 volatile REG_BG3HOFS;
extern undefined2 volatile REG_DISPCNT;
extern undefined1 volatile REG_BLDALPHA;
extern undefined2 volatile REG_BLDCNT;
extern undefined2 volatile REG_BG3CNT;


void sub_08004E26(void)

{
  unsigned int __frame[19];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_4c (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_48 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_44 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0xc))
#define auStack_3c ((undefined1 *)((char *)__frame + 0x10))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x34))
  sub_0804912C(0x6000000,0,0x18000);
  sub_0803F540(auStack_3c,0xf0,0xa0);
  Wfz_LoadContainer(&gUnknown_08055620,uStack_18);
  sub_0803F9B8(auStack_3c,&DAT_06000040);
  uStack_44 = 0x1e;
  uStack_40 = 0x14;
  uStack_4c = 0;
  uStack_48 = 0;
  sub_0803DA10(&uStack_4c,&DAT_0600f800,1);
  REG_BG3CNT = 0x1f83;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_DISPCNT = 0x800;
  REG_BLDCNT = 0x2048;
  DAT_04000053 = 0;
  REG_BLDALPHA = 0;
  sub_08049144(0x5000000,0x805652c,0x200);
  DAT_03003301 = 0;
  sub_0803F58C(auStack_3c,0);
  return;
}

