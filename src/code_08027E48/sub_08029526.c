/* sub_08029526  (original: 0x08029526-0x08029584 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019CC4();
extern undefined volatile gUnknown_08750204;


undefined4 sub_08029526(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = sub_08019CC4();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      return 0;
    }
    if ((((**(char **)(param_3 + 0x1c) == '\x01') &&
         (*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30))) &&
        (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
       ((*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34) &&
        (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))))) {
      *(undefined4 *)(param_1 + 0x4c) = 0x10;
      *(undefined **)(param_1 + 0x54) = &gUnknown_08750204;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      return 1;
    }
  }
  return 0;
}

