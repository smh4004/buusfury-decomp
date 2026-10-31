/* sub_0803FACC  (original: 0x0803FACC-0x0803FADE in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803FAAC();


uint sub_0803FACC(int param_1)

{
  uint uVar1;
  
  uVar1 = sub_0803FAAC();
  return param_1 * (uVar1 & 0xffff) >> 0x10;
}

