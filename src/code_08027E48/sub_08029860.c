/* sub_08029860  (original: 0x08029860-0x080298A2 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800DE60();
extern int volatile DAT_03001c34;


void sub_08029860(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x1a4) - *(int *)(DAT_03001c34 + 0x1a4);
  iVar2 = *(int *)(param_2 + 0x1a0) - *(int *)(DAT_03001c34 + 0x1a0);
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0xc) = iVar1;
  sub_0800DE60(param_1,param_2,iVar1,iVar1,iVar2,iVar1,iVar2);
  *(undefined1 *)(param_2 + 8) = 0x37;
  return;
}

