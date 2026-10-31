/* sub_0803B1F0  (original: 0x0803B1F0-0x0803B240 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803AF58();
extern int sub_08054A64();
extern char volatile DAT_030032e4;


undefined4 sub_0803B1F0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    return 0;
  }
  if (*(int *)(param_3 + 0x30) == param_1) {
    return 0;
  }
  if (((**(char **)(param_3 + 0x1c) == '\x01') &&
      (iVar1 = sub_0803AF58(param_1,param_3 + 4), iVar1 != 0)) && (DAT_030032e4 == '\0')) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (0 < iVar1) {
      iVar2 = sub_08054A64(0x42cccccd);
      iVar1 = iVar1 - iVar2;
      *(int *)(param_1 + 0x10) = iVar1;
      if (iVar1 < 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    return 1;
  }
  return 0;
}

