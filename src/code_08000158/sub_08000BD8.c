/* sub_08000BD8  (original: 0x08000BD8-0x08000BF0 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_0300106a;


void sub_08000BD8(int *param_1,int param_2,char param_3)

{
  *param_1 = param_2 + -1;
  (&DAT_0300106a)[param_1[param_2]] = (&DAT_0300106a)[param_1[param_2]] - param_3;
  return;
}

