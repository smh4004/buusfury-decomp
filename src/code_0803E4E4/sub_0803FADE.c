/* sub_0803FADE  (original: 0x0803FADE-0x0803FAF6 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 81% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803FAAC();


undefined4 sub_0803FADE(uint param_1)

{
  uint uVar1;
  
  uVar1 = sub_0803FAAC();
  if ((uVar1 & 0xffff) < param_1) {
    return 1;
  }
  return 0;
}

