/* sub_0803870C  (original: 0x0803870C-0x0803878E in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803862E();
extern undefined volatile gUnknown_0876E0C4;


undefined4 sub_0803870C(int param_1,undefined4 *param_2)

{
  int iVar1;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(int *)((char *)__frame + 0x0))
#define local_1c (*(int *)((char *)__frame + 0x4))
#define local_18 (*(undefined4 *)((char *)__frame + 0x8))
  local_18 = *param_2;
  sub_0803862E(param_1,0,&local_18,0,&gUnknown_0876E0C4);
  iVar1 = 8;
  if (8 < *(int *)(param_1 + 0x3c) + -9) {
    do {
      local_20 = iVar1 * *(int *)(param_1 + 0x34);
      local_1c = iVar1 * *(int *)(param_1 + 0x38);
      sub_0803862E(param_1,1,&local_18,2,&local_20,local_1c);
      iVar1 = iVar1 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x3c) + -9);
  }
  local_1c = *(int *)(param_1 + 0x3c) + -8;
  local_20 = local_1c * *(int *)(param_1 + 0x34);
  local_1c = local_1c * *(int *)(param_1 + 0x38);
  sub_0803862E(param_1,2,&local_18,4,&local_20,local_1c);
  *param_2 = local_18;
  return 0;
}

