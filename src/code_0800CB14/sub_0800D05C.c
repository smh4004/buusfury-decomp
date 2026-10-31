/* sub_0800D05C  (original: 0x0800D05C-0x0800D078 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800D026();
extern int sub_0801124C();
extern undefined volatile DAT_03001c4c;


void sub_0800D05C(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = sub_0801124C(&DAT_03001c4c,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 4))
  ;
  *(undefined2 *)(param_1 + 0x16) = uVar1;
  sub_0800D026(param_1);
  return;
}

