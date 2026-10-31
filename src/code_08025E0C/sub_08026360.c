/* sub_08026360  (original: 0x08026360-0x0802638A in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 35% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08024BE6();
extern ushort volatile DAT_03003306;
extern undefined2 volatile REG_BLDCNT;


void sub_08026360(int param_1)

{
  if ((DAT_03003306 & 1) != 0) {
    if (*(int *)(param_1 + 0x518) != 0) {
      *(int *)(param_1 + 0x514) = *(int *)(param_1 + 0x518);
      *(undefined4 *)(param_1 + 0x510) = 1;
      sub_08024BE6();
      REG_BLDCNT = 0x3f5f;
    }
  }
  return;
}

