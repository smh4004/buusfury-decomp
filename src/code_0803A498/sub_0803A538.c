/* sub_0803A538  (original: 0x0803A538-0x0803A556 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EE78();


void sub_0803A538(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  uVar1 = uVar1 >> 3;
  if (uVar1 == 4) {
    sub_0800EE78();
  }
  else {
    *(char *)(param_2 + 0x11) = (char)uVar1;
  }
  return;
}

