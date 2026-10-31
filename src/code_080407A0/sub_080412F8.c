/* sub_080412F8  (original: 0x080412F8-0x08041312 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080422B0();
extern int sub_08044BB2();
extern int sub_080411EE();
extern undefined1 volatile DAT_03004b2c;


void sub_080412F8(void)

{
  int iVar1;
  
  iVar1 = sub_080411EE();
  if (iVar1 != 0) {
    sub_08044BB2(DAT_03004b2c);
  }
  sub_080422B0(1);
  return;
}

