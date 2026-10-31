/* sub_08045EC4  (original: 0x08045EC4-0x08045EE0 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045B40();
extern int sub_08045D8C();
extern int volatile DAT_03005294;


void sub_08045EC4(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x14);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}

