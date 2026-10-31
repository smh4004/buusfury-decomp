/* sub_08006AB8  (original: 0x08006AB8-0x08006ACA in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E42A();
extern undefined volatile DAT_03003e5c;


void sub_08006AB8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  sub_0803E42A(&DAT_03003e5c);
  return;
}

