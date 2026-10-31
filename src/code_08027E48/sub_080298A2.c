/* sub_080298A2  (original: 0x080298A2-0x080298D8 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001c34;


void sub_080298A2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_03001c34 + 0x1a4);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_2 + 0x1a0) = *(int *)(DAT_03001c34 + 0x1a0) + *(int *)(param_1 + 8);
  *(int *)(param_2 + 0x1a4) = iVar2 + iVar1;
  return;
}

