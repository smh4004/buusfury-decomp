/* sub_08019B7C  (original: 0x08019B7C-0x08019BE4 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 53% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_03002c04;
extern int volatile DAT_030019c4;
extern int volatile DAT_030019c8;
extern int volatile DAT_030019c0;
extern int volatile DAT_030019bc;


undefined4 sub_08019B7C(int param_1)

{
  char cVar1;
  
  if (DAT_03002c04 != 0) {
    return 1;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x2c) < DAT_030019c8) {
      return 1;
    }
    return 0;
  }
  if (cVar1 == '\x01') {
    if (DAT_030019c0 < *(int *)(param_1 + 0x34)) {
      return 1;
    }
    return 0;
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      return 0;
    }
    if (*(int *)(param_1 + 0x28) < DAT_030019c4) {
      return 1;
    }
    return 0;
  }
  if (DAT_030019bc < *(int *)(param_1 + 0x30)) {
    return 1;
  }
  return 0;
}

