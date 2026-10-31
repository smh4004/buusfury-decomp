/* sub_08003774  (original: 0x08003774-0x080037A6 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_03001584;


void sub_08003774(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar2 = (&DAT_03001584)[iVar1 * 0x1a] + iVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  param_1[iVar1 + 1] = iVar2;
  return;
}

