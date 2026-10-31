/* sub_08021834  (original: 0x08021834-0x08021874 in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08021762();
extern int volatile DAT_030019cc;
extern int volatile DAT_030019d0;


int sub_08021834(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c) - DAT_030019cc;
  iVar1 = *(int *)(param_1 + 0x30) - DAT_030019d0;
  *(int *)(param_1 + 0x20) = iVar2;
  *(int *)(param_1 + 0x24) = iVar1;
  iVar1 = sub_08021762(param_1,param_1 + 0x28,iVar1,*(int *)(param_1 + 0x30),iVar2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x30);
    iVar1 = 1;
  }
  return iVar1;
}

