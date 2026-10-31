/* sub_08017A14  (original: 0x08017A14-0x08017AE6 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049144();
extern int sub_0804912C();
extern int sub_0803DA10();
extern int sub_0804915C();
extern int sub_08049168();
extern int Wfz_LoadContainer();
extern undefined volatile DAT_06007800;
extern undefined volatile DAT_0600f800;
extern undefined2 volatile REG_BG2VOFS;
extern undefined2 volatile REG_BG2HOFS;
extern undefined2 volatile REG_BG3VOFS;
extern undefined2 volatile REG_BG3HOFS;
extern undefined volatile gUnknown_086F9EC8;
extern undefined volatile gUnknown_086FA398;
extern undefined1 volatile REG_BLDALPHA;
extern undefined2 volatile REG_BLDCNT;
extern undefined1 volatile DAT_04000053;
extern undefined2 volatile REG_DISPCNT;
extern undefined2 volatile REG_BG3CNT;
extern undefined2 volatile REG_BG2CNT;


void sub_08017A14(int param_1)

{
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_24 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0xc))
  sub_0804912C(0x6000000,0,0x18000);
  sub_08049168(0x6007800,2,0x800);
  uStack_20 = 5;
  uStack_1c = 0x1e;
  uStack_18 = 0x10;
  uStack_24 = 0;
  sub_0803DA10(&uStack_24,&DAT_06007800,2);
  Wfz_LoadContainer(&gUnknown_086F9EC8,*(undefined4 *)(param_1 + 0x2c));
  uStack_20 = 0x28;
  uStack_1c = 0xf0;
  uStack_18 = 0x80;
  uStack_24 = 0;
  sub_0804915C(param_1 + 8,0x6000080,(int)&uStack_24);
  sub_08049168(0x600f800,0x202,0x800);
  uStack_20 = 5;
  uStack_1c = 0x1e;
  uStack_24 = 0;
  uStack_18 = 0x10;
  sub_0803DA10(&uStack_24,&DAT_0600f800,0x202);
  Wfz_LoadContainer(&gUnknown_086FA398,*(undefined4 *)(param_1 + 0x2c));
  uStack_20 = 0x28;
  uStack_1c = 0xf0;
  uStack_18 = 0x80;
  uStack_24 = 0;
  sub_0804915C(param_1 + 8,0x6008080,(int)&uStack_24);
  REG_BG3CNT = 0xf83;
  REG_BG2CNT = 0x1f83;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_DISPCNT = 0xc00;
  REG_BLDCNT = 0x844;
  DAT_04000053 = 0x10;
  REG_BLDALPHA = 0;
  sub_08049144(0x5000000,0x805652c,0x200);
  return;
}

