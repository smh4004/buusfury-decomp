/* sub_0802FFAE  (original: 0x0802FFAE-0x0802FFD8 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EE78();


void sub_0802FFAE(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  if (*(ushort *)(param_2 + 0x12) < 0xc) {
    uVar1 = (*(ushort *)(param_2 + 0x12) >> 2) + 2;
    *(char *)(param_2 + 0x11) = (char)uVar1;
    if ((uVar1 & 0xff) == 4) {
      *(undefined1 *)(param_2 + 0x11) = 1;
      sub_0800EE78(param_2);
    }
    *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + 1;
  }
  return;
}

