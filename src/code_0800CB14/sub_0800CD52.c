/* sub_0800CD52  (original: 0x0800CD52-0x0800CD78 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801124C();
extern int sub_0800CD00();
extern undefined volatile DAT_03001c4c;


undefined2 sub_0800CD52(int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0x16) == -1) {
    uVar1 = sub_0801124C(&DAT_03001c4c,
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x2c) + 4));
    *(undefined2 *)(param_1 + 0x16) = uVar1;
    sub_0800CD00(param_1);
  }
  return *(undefined2 *)(param_1 + 0x16);
}

