/* sub_0802FF7C  (original: 0x0802FF7C-0x0802FF96 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EE78();


void sub_0802FF7C(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 0x12);
  if (uVar1 < 8) {
    *(char *)(param_2 + 0x11) = (char)(uVar1 >> 2);
    *(ushort *)(param_2 + 0x12) = uVar1 + 1;
  }
  else {
    sub_0800EE78();
  }
  return;
}

