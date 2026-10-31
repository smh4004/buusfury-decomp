/* sub_0804E938  (original: 0x0804E938-0x0804E958 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800F924();
extern int sub_0800ED18();
extern undefined4 volatile DAT_0300325c;


void sub_0804E938(undefined4 param_1,undefined4 param_2)

{
  sub_0800F924(param_2);
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,&DAT_0300325c);
  return;
}

