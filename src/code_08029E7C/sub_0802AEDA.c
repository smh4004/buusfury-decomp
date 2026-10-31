/* sub_0802AEDA  (original: 0x0802AEDA-0x0802AEF8 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int sub_0800ECDA();
extern undefined4 volatile DAT_0300302c;
extern undefined4 volatile DAT_03003030;


void sub_0802AEDA(undefined4 param_1,undefined4 param_2)

{
  sub_0800ECDA(param_2,0x14);
  sub_0800ED18(param_2,&DAT_03003030);
  DAT_0300302c = 1;
  return;
}

