/* sub_080422B0  (original: 0x080422B0-0x080422D4 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08044EB0();
extern char * volatile DAT_0300525c;
extern char volatile DAT_03004cca;
extern undefined1 volatile DAT_03004ccb;


void sub_080422B0(undefined4 param_1)

{
  if (*DAT_0300525c == '\0') {
    if (DAT_03004cca == '\x01') {
      param_1 = 1;
    }
    else {
      param_1 = 0;
    }
  }
  else {
    DAT_03004ccb = 0;
  }
  sub_08044EB0(param_1);
  return;
}

