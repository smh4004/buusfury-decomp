/* sub_0802DB10  (original: 0x0802DB10-0x0802DB6A in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019CC4();
extern int sub_0802D89A();


undefined4 sub_0802DB10(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else if ((((*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30)) &&
              (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
             (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))) &&
            ((*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10) && (*(int *)(param_1 + 0x50) == 0)
             ))) {
      sub_0802D89A();
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_2 == 0x24) {
    uVar1 = 1;
  }
  else if (param_2 == 0x25) {
    uVar1 = *(undefined4 *)(param_1 + 0x50);
  }
  else {
    uVar1 = sub_08019CC4();
  }
  return uVar1;
}

