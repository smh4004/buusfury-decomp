/* sub_0803BCAA  (original: 0x0803BCAA-0x0803BD06 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803BB48();


undefined4 sub_0803BCAA(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  sub_0803BB48();
  iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_2 + 0x1a0);
  iVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_2 + 0x1a4);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 < 0x800) {
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 0x800) {
      return 1;
    }
  }
  return 0;
}

