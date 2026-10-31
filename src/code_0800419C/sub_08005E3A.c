/* sub_08005E3A  (original: 0x08005E3A-0x08005E9A in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 52% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08004C8C();
extern int sub_08004CE0();
extern ushort volatile DAT_03003304;


undefined4 sub_08005E3A(int param_1)

{
  int iVar1;
  
  if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
    if ((*(int *)(*(int *)(param_1 + 0x10c) * 0x80 + param_1 + 300) != 0) &&
       (iVar1 = sub_08004C8C(), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
    if ((*(int *)(*(int *)(param_1 + 0x10c) * 0x80 + param_1 + 300) != 0) &&
       (iVar1 = sub_08004CE0(), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  return 0;
}

