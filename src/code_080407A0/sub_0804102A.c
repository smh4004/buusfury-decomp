/* sub_0804102A  (original: 0x0804102A-0x08041068 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern uint volatile DAT_03004a80;
extern uint volatile DAT_03004a90;
extern undefined4 volatile _03000FFC;


undefined4 sub_0804102A(void)

{
  if (DAT_03004a80 < _03000FFC) {
    _03000FFC = DAT_03004a80;
  }
  if ((-1 < (int)(DAT_03004a90 << 0x13)) &&
     ((-1 < (int)(DAT_03004a90 << 0x10) || ((DAT_03004a90 << 0x14) >> 0x1c == (DAT_03004a90 & 0xf)))
     )) {
    _03000FFC = DAT_03004a80;
  }
  if (DAT_03004a80 - _03000FFC < 0xb4) {
    return 1;
  }
  return 0;
}

