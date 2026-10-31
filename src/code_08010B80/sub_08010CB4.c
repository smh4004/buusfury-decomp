/* sub_08010CB4  (original: 0x08010CB4-0x08010CD0 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_08010CB4(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x224);
  __call_via_r3(*(int **)(param_1 + 0x224),param_1,param_2,*piVar1 + (int)piVar1);
  return;
}

