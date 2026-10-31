/* sub_08010D7C  (original: 0x08010D7C-0x08010D9A in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern undefined4 volatile DAT_03002b54;


void sub_08010D7C(int param_1)

{
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  sub_0800ECDA(param_1,1);
  sub_0800ED18(param_1,&DAT_03002b54);
  return;
}

