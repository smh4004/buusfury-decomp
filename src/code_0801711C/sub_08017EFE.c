/* sub_08017EFE  (original: 0x08017EFE-0x08017F14 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801268A();
extern int sub_08017EC2();
extern undefined4 volatile DAT_03002a64;


void sub_08017EFE(int param_1)

{
  sub_08017EC2(*(undefined4 *)(param_1 + 0x10));
  sub_0801268A(&DAT_03002a64,param_1);
  return;
}

