/* sub_0800BD5A  (original: 0x0800BD5A-0x0800BD86 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 47% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800B8FC();


undefined4 sub_0800BD5A(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0xb) {
    *(undefined1 *)(param_1 + 0x1c) = 0xff;
    uVar1 = 0;
  }
  else if (param_2 == 0xc) {
    sub_0800B8FC();
    uVar1 = 0;
  }
  else if (param_2 == 0x15) {
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

