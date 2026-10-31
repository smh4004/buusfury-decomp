/* sub_0802AD88  (original: 0x0802AD88-0x0802ADAA in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int sub_0800ECDA();
extern undefined4 volatile DAT_0300302c;
extern undefined4 volatile DAT_03003014;


void sub_0802AD88(undefined4 param_1,int param_2)

{
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,&DAT_03003014);
  DAT_0300302c = 0;
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  return;
}

