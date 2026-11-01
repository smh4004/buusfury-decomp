/* Enemy_Spawn  (original: 0x0800FD54-0x0800FD74 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int Enemy_Create();
extern undefined volatile gEnemyStats;


void Enemy_Spawn(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Enemy_Create(0,param_1,&gEnemyStats + *(int *)(param_1 + 8) * 0x1c,param_2,param_4);
  return;
}

