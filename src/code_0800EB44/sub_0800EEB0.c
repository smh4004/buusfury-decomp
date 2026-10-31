/* sub_0800EEB0  (original: 0x0800EEB0-0x0800EECC in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 85% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_08072670;


undefined4 sub_0800EEB0(int param_1,int param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x58) + (uint)(byte)(&gUnknown_08072670)[param_2] * 4 + 0x54) ==
      *(int *)(param_1 + 0x50)) {
    return 1;
  }
  return 0;
}

