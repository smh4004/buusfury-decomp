/* sub_08013F58  (original: 0x08013F58-0x08013F7C in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_08013F58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
    iVar1 = **(int **)(param_1 + 4);
    __call_via_r3(*(int **)(param_1 + 4),param_1,*(undefined4 *)(param_1 + 0x14),
                  *(int *)(iVar1 + 0x20) + iVar1,param_4);
  }
  return;
}

