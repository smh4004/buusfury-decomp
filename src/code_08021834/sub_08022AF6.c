/* sub_08022AF6  (original: 0x08022AF6-0x08022B6C in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803DA10();
extern int sub_0801157E();
extern int sub_08049144();
extern int sub_080115B0();
extern int sub_0804912C();
extern int sub_08011B04();
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_0600f800;
extern undefined2 volatile REG_DISPCNT;
extern undefined2 volatile REG_BG1CNT;
extern undefined2 volatile REG_BG0CNT;


void sub_08022AF6(int param_1)

{
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_14 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_10 (*(undefined4 *)((char *)__frame + 0xc))
  sub_08011B04(&DAT_03001c4c);
  sub_080115B0(&DAT_03001c4c);
  sub_0801157E(&DAT_03001c4c);
  sub_08049144(0x5000200,0x805652c,0x200);
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0xa80);
  uStack_1c = 0xc;
  uStack_18 = 9;
  uStack_14 = 0x12;
  uStack_10 = 0x10;
  sub_0803DA10(&uStack_1c,&DAT_0600f800,0x259);
  REG_BG1CNT = 0x1e83;
  REG_BG0CNT = 0x1f80;
  REG_DISPCNT = 0x1340;
  *(undefined1 *)(param_1 + 0x140) = 1;
  return;
}

