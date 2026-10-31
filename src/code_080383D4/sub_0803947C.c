/* sub_0803947C  (original: 0x0803947C-0x080394C8 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803DA10();
extern int sub_0804912C();
extern undefined volatile DAT_0600f800;
extern undefined2 volatile REG_DISPCNT;
extern undefined2 volatile REG_BG0CNT;


void sub_0803947C(void)

{
  ushort uVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_14 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_10 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_c (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_8 (*(undefined4 *)((char *)__frame + 0xc))
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0xf00);
  uStack_14 = 9;
  uStack_10 = 8;
  uStack_c = 0x15;
  uStack_8 = 0xd;
  sub_0803DA10(&uStack_14,&DAT_0600f800,0x259);
  REG_BG0CNT = 0x1f80;
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x100;
  return;
}

