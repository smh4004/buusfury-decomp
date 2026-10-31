/* sub_0802ADF0  (original: 0x0802ADF0-0x0802AE06 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int sub_0800ECDA();
extern undefined4 volatile DAT_0300301c;


void sub_0802ADF0(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x15);
  sub_0800ED18(param_2,&DAT_0300301c);
  return;
}

