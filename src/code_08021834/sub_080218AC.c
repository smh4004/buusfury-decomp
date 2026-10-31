/* sub_080218AC  (original: 0x080218AC-0x08021904 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804912C();
extern undefined2 volatile REG_BG0VOFS;
extern undefined4 volatile DAT_03002c04;
extern undefined2 volatile REG_BG0HOFS;
extern undefined volatile DAT_0600f000;
extern undefined2 volatile REG_BG1VOFS;
extern undefined2 volatile REG_BG1HOFS;
extern undefined2 volatile REG_BG2VOFS;
extern undefined2 volatile REG_BG2HOFS;
extern undefined2 volatile REG_BG3VOFS;
extern undefined2 volatile REG_BG3HOFS;
extern undefined2 volatile REG_BLDCNT;
extern undefined2 volatile REG_DISPCNT;
extern undefined2 volatile REG_BG1CNT;


void sub_080218AC(int *param_1)

{
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_24 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0xc))
  DAT_03002c04 = 0;
  sub_0804912C(0x5000200,0,0x200);
  sub_0804912C(0x5000000,0,0x200);
  REG_DISPCNT = 0;
  REG_BG0HOFS = 0;
  REG_BG0VOFS = 0;
  REG_BG1HOFS = 0;
  REG_BG1VOFS = 0;
  REG_BG2HOFS = 0;
  REG_BG2VOFS = 0;
  REG_BG3HOFS = 0;
  REG_BG3VOFS = 0;
  REG_BG1CNT = 0x1e83;
  sub_0804912C(0x6000000,0,0x9640);
  uStack_1c = 0x1e;
  uStack_18 = 0x14;
  uStack_24 = 0;
  uStack_20 = 0;
  sub_0803DA10(&uStack_24,&DAT_0600f000,1);
  REG_DISPCNT = 0x200;
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  REG_BLDCNT = 0;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

