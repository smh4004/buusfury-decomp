/* sub_080316D6  (original: 0x080316D6-0x08031718 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
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
extern undefined2 volatile REG_BG1CNT;


void sub_080316D6(int param_1)

{
  undefined4 uVar1;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_14 (*(undefined4 *)((char *)__frame + 0xc))
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
  uStack_18 = 0x1e;
  uStack_14 = 0x14;
  uStack_20 = 0;
  uStack_1c = 0;
  sub_0803DA10(&uStack_20,&DAT_0600f000,1);
  REG_DISPCNT = 0x240;
  uStack_14 = 1;
  uStack_18 = 1;
  uStack_20 = 0xc;
  uStack_1c = 2;
  uVar1 = sub_08013E64(0,param_1,2,0xd5);
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  sub_0800664E(param_1,uVar1);
  uStack_14 = 1;
  uStack_18 = 1;
  uStack_20 = 0x31;
  uStack_1c = 3;
  uVar1 = sub_08013E64(0,param_1,3,0xd5);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  sub_0800664E(param_1,uVar1);
  uStack_14 = 0;
  uStack_20 = 0x86;
  uStack_18 = 1;
  uStack_1c = 0;
  uVar1 = sub_08013E64(0,param_1,0,0xc);
  sub_0800664E(param_1,uVar1);
  uStack_14 = 0;
  uStack_20 = 0x86;
  uStack_1c = 1;
  uStack_18 = 1;
  uVar1 = sub_08013E64(0,param_1,1,0xc);
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  sub_0800664E(param_1,uVar1);
  sub_08049144(0x5000000,0x805652c,0x200);
  sub_08049144(0x5000200,0x805652c,0x200);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  sub_08031644(param_1);
  return;
}

