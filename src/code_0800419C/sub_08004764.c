/* sub_08004764  (original: 0x08004764-0x08004784 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 40% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011C70();
extern undefined volatile DAT_03001c4c;


void sub_08004764(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((int)((uint)*(byte *)(param_1 + 1) << 0x1e) < 0) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfd;
    sub_08011C70(&DAT_03001c4c,0x15,0,param_4,param_4);
  }
  return;
}

