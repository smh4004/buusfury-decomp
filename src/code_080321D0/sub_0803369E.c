/* sub_0803369E  (original: 0x0803369E-0x0803377A in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08033664();
extern int sub_0803362A();
extern int sub_0803DA10();
extern int sub_0804912C();
extern int sub_08049144();
extern undefined2 volatile REG_BG0VOFS;
extern undefined2 volatile REG_BG0HOFS;
extern undefined volatile DAT_0600f000;
extern undefined2 volatile REG_BG1VOFS;
extern undefined volatile DAT_0600f800;
extern undefined2 volatile REG_BG1HOFS;
extern undefined volatile gUIStringPtrs;
extern undefined1 volatile REG_BLDALPHA;
extern undefined2 volatile REG_BLDCNT;
extern undefined1 volatile DAT_04000053;
extern undefined2 volatile REG_DISPCNT;
extern undefined2 volatile REG_BG1CNT;
extern undefined2 volatile REG_BG0CNT;


void sub_0803369E(int param_1)

{
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_14 (*(undefined4 *)((char *)__frame + 0xc))
  sub_0804912C(0x5000200,0,0x200);
  sub_0804912C(0x5000000,0,0x200);
  sub_0804912C(0x6000000,0,0x18000);
  sub_0804912C(0x6000000,0,0x40);
  sub_0804912C(0x600f000,0,0x1000);
  uStack_1c = 6;
  uStack_14 = 0xe;
  uStack_18 = 0x1e;
  uStack_20 = 0;
  sub_0803DA10(&uStack_20,&DAT_0600f800,1);
  uStack_1c = 10;
  uStack_14 = 0x12;
  uStack_20 = 0;
  uStack_18 = 0x1e;
  sub_0803DA10(&uStack_20,&DAT_0600f000,0xf1);
  REG_BG0CNT = 0x1e83;
  REG_BG1CNT = 0x1f83;
  REG_BLDALPHA = 0;
  DAT_04000053 = 0;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BLDCNT = 0x2043;
  REG_DISPCNT = 0x300;
  sub_08033664(param_1,*(undefined4 *)(&gUIStringPtrs + *(int *)(param_1 + 0x10) * 4));
  sub_0803362A(param_1,*(undefined4 *)(&gUIStringPtrs + (*(int *)(param_1 + 0x10) + 1) * 4));
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  return;
}

