/* sub_0800FA16  (original: 0x0800FA16-0x0800FA2A in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile gEnemyStats;


void sub_0800FA16(int param_1,int param_2)

{
  *(undefined **)(param_1 + 0x224) = &gEnemyStats + param_2 * 0x1c;
  return;
}

