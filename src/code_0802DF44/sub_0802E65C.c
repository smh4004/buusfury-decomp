/* sub_0802E65C  (original: 0x0802E65C-0x0802E6AC in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019CC4();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


undefined4 sub_0802E65C(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x30) == param_1) {
      uVar1 = 0;
    }
    else if ((((*(int *)(param_3 + 4) < *(int *)(param_1 + 0x30)) &&
              (*(int *)(param_1 + 0x28) < *(int *)(param_3 + 0xc))) &&
             (*(int *)(param_3 + 8) < *(int *)(param_1 + 0x34))) &&
            (*(int *)(param_1 + 0x2c) < *(int *)(param_3 + 0x10))) {
      sub_08011944(&DAT_03001c4c,param_1,*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x34),param_4);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = sub_08019CC4();
  }
  return uVar1;
}

