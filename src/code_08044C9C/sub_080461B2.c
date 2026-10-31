/* sub_080461B2  (original: 0x080461B2-0x080461CE in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045B40();
extern int sub_08045D8C();
extern int volatile DAT_03005294;


void sub_080461B2(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x37);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}

