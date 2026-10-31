/* sub_0802C9DA  (original: 0x0802C9DA-0x0802CA1C in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern undefined1 volatile REG_MOSAIC;
extern undefined2 volatile REG_BG1CNT;
extern undefined2 volatile REG_BG0CNT;
extern undefined1 volatile DAT_0400004d;
extern undefined2 volatile REG_BG3CNT;
extern undefined2 volatile REG_BG2CNT;


void sub_0802C9DA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  REG_MOSAIC = 0;
  DAT_0400004d = 0;
  uVar1 = REG_BG0CNT;
  REG_BG0CNT = uVar1 & 0xffbf;
  uVar1 = REG_BG1CNT;
  REG_BG1CNT = uVar1 & 0xffbf;
  uVar1 = REG_BG2CNT;
  REG_BG2CNT = uVar1 & 0xffbf;
  uVar1 = REG_BG3CNT;
  REG_BG3CNT = uVar1 & 0xffbf;
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1,&REG_BG3CNT,param_4);
  }
  return;
}

