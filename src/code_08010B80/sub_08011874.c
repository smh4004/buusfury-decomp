/* sub_08011874  (original: 0x08011874-0x08011890 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804E490();
extern undefined volatile _0804ABA0;


undefined4 *
sub_08011874(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  *param_1 = &_0804ABA0;
  sub_0804E490();
  return param_1;
}

