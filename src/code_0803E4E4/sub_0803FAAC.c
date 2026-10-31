/* sub_0803FAAC  (original: 0x0803FAAC-0x0803FACC in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern uint volatile DAT_03004a5c;
extern uint volatile DAT_03004a60;


int sub_0803FAAC(void)

{
  DAT_03004a5c = DAT_03004a5c + 0x2cbbc71 ^ DAT_03004a60;
  DAT_03004a60 = (DAT_03004a60 >> 0x1d | DAT_03004a60 << 3) + 0x632d80f ^ DAT_03004a5c;
  return DAT_03004a5c - DAT_03004a60;
}

