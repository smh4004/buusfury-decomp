/* sub_08018FDA  (original: 0x08018FDA-0x0801900A in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


int sub_08018FDA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(iVar2 * 4 + param_1 + 0x10);
      iVar1 = __call_via_r3(iVar1,param_2,param_3,*(undefined4 *)(iVar1 + 4),param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return 0;
}

