/* sub_0802082A  (original: 0x0802082A-0x0802084C in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 62% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_0802082A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08011944(&DAT_03001c4c,param_1,param_3,param_4,param_4);
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 2;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  return;
}

