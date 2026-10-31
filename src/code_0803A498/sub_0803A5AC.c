/* sub_0803A5AC  (original: 0x0803A5AC-0x0803A5DA in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern undefined4 volatile DAT_03001b20;


void sub_0803A5AC(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  uVar1 = uVar1 >> 3;
  if (**(uint **)(param_2 + 0x50) == (uint)uVar1) {
    sub_0800ECDA(param_2,0x14);
    sub_0800ED18(param_2,&DAT_03001b20);
    return;
  }
  *(char *)(param_2 + 0x11) = (char)uVar1;
  return;
}

