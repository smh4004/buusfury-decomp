/* sub_080135A2  (original: 0x080135A2-0x080135BC in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 84% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_0871DAF8;


undefined * sub_080135A2(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    return &gUnknown_0871DAF8;
  }
  return &gUnknown_0871DAF8 + (uint)*(byte *)(param_1 + param_2 + 0xd) * 0x18;
}

