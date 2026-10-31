/* sub_08025D2E  (original: 0x08025D2E-0x08025D48 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern undefined2 volatile REG_BG2VOFS;
extern undefined2 volatile REG_BG2HOFS;
extern undefined2 volatile REG_BG3VOFS;
extern undefined2 volatile REG_BG3HOFS;


void sub_08025D2E(int param_1)

{
  REG_BG2HOFS = (short)*(undefined4 *)(param_1 + 0x802c);
  REG_BG2VOFS = (short)*(undefined4 *)(param_1 + 0x8030);
  REG_BG3HOFS = (short)*(undefined4 *)(param_1 + 0x802c);
  REG_BG3VOFS = (short)*(undefined4 *)(param_1 + 0x8030);
  return;
}

