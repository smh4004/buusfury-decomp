/* sub_080033EA  (original: 0x080033EA-0x0800340E in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03001068;
extern undefined4 volatile DAT_03001584;


void sub_080033EA(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (&DAT_03001584)[(uint)DAT_03001068 * 0x1a];
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}

