/* sub_080096EA  (original: 0x080096EA-0x08009728 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_BLDCNT;


void sub_080096EA(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  
  uVar1 = (ushort)(1 << (param_2 & 0xff));
  if ((param_3 & 1) == 0) {
    *(ushort *)(param_1 + 0xa4) = *(ushort *)(param_1 + 0xa4) & ~uVar1;
  }
  else {
    *(ushort *)(param_1 + 0xa4) = uVar1 | *(ushort *)(param_1 + 0xa4);
  }
  uVar1 = (ushort)(0x100 << (param_2 & 0xff));
  if ((int)(param_3 * 0x40000000) < 0) {
    *(ushort *)(param_1 + 0xa4) = uVar1 | *(ushort *)(param_1 + 0xa4);
  }
  else {
    *(ushort *)(param_1 + 0xa4) = *(ushort *)(param_1 + 0xa4) & ~uVar1;
  }
  REG_BLDCNT = *(undefined2 *)(param_1 + 0xa4);
  return;
}

