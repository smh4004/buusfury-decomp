/* sub_08028EBC  (original: 0x08028EBC-0x08028F2C in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08028DEA();


undefined4 sub_08028EBC(int param_1,undefined4 *param_2)

{
  int iVar1;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_28 (*(int *)((char *)__frame + 0x0))
#define local_24 (*(int *)((char *)__frame + 0x4))
#define local_20 (*(int *)((char *)__frame + 0x8))
#define local_1c (*(int *)((char *)__frame + 0xc))
#define local_18 (*(undefined4 *)((char *)__frame + 0x10))
  local_18 = *param_2;
  local_28 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c);
  local_24 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
  local_20 = local_28;
  local_1c = local_24;
  sub_08028DEA(param_1,1,&local_18,2,&local_20);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x34) + -1) {
    do {
      local_28 = iVar1 * *(int *)(param_1 + 0x2c);
      local_24 = iVar1 * *(int *)(param_1 + 0x30);
      sub_08028DEA(param_1,0,&local_18,0,&local_28,local_24);
      iVar1 = iVar1 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x34) + -1);
  }
  *param_2 = local_18;
  return 0;
}

