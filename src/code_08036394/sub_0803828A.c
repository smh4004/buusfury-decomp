/* sub_0803828A  (original: 0x0803828A-0x0803832A in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080381DC();


undefined4 sub_0803828A(int param_1,undefined4 *param_2)

{
  int iVar1;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_28 (*(int *)((char *)__frame + 0x0))
#define local_24 (*(int *)((char *)__frame + 0x4))
#define local_20 (*(undefined4 *)((char *)__frame + 0x8))
#define local_1c (*(int *)((char *)__frame + 0xc))
#define local_18 (*(int *)((char *)__frame + 0x10))
  local_20 = *param_2;
  local_28 = *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x2c);
  local_24 = *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x30);
  local_1c = local_28;
  local_18 = local_24;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    sub_080381DC(param_1,2,&local_20,*(undefined4 *)(param_1 + 0x4c),&local_1c);
    *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + -10;
    sub_080381DC(param_1,3,&local_20,*(undefined4 *)(param_1 + 0x50),&local_1c);
    *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + '\n';
  }
  else {
    sub_080381DC(param_1,1,&local_20,*(undefined4 *)(param_1 + 0x48),&local_1c);
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x3c) + -1) {
    do {
      local_28 = iVar1 * *(int *)(param_1 + 0x2c);
      local_24 = iVar1 * *(int *)(param_1 + 0x30);
      sub_080381DC(param_1,0,&local_20,*(undefined4 *)(param_1 + 0x44),&local_28,local_24);
      iVar1 = iVar1 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x3c) + -1);
  }
  *param_2 = local_20;
  return 0;
}

