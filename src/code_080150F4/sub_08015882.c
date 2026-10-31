/* sub_08015882  (original: 0x08015882-0x080158F4 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803DA10();
extern int sub_0804912C();
extern undefined2 volatile REG_BG0VOFS;
extern undefined volatile DAT_0600f000;
extern undefined2 volatile REG_BG0HOFS;
extern undefined2 volatile REG_BG1VOFS;
extern undefined2 volatile REG_BG1HOFS;
extern undefined2 volatile REG_BG2VOFS;
extern undefined2 volatile REG_BG2HOFS;
extern undefined2 volatile REG_BG3VOFS;
extern undefined2 volatile REG_BG3HOFS;
extern undefined2 volatile REG_DISPCNT;
extern undefined2 volatile REG_BLDCNT;
extern undefined2 volatile REG_BG2CNT;


void sub_08015882(void)

{
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_14 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_10 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_c (*(undefined4 *)((char *)__frame + 0xc))
  sub_0804912C(0x5000200,0,0x200);
  sub_0804912C(0x5000000,0,0x200);
  sub_0804912C(0x6000000,0,0x18000);
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_BLDCNT = 0;
  REG_BG2CNT = 0x1e83;
  REG_DISPCNT = 0x400;
  sub_0804912C(0x6000000,0,0x9640);
  uStack_10 = 0x1e;
  uStack_c = 0x14;
  uStack_18 = 0;
  uStack_14 = 0;
  sub_0803DA10(&uStack_18,&DAT_0600f000,1);
  return;
}

