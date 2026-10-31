/* sub_08046124  (original: 0x08046124-0x08046140 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045B40();
extern int sub_08045D8C();
extern int volatile DAT_03005294;


void sub_08046124(void)

{
  int iVar1;
  
  iVar1 = sub_08045D8C(0x27);
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 0;
    sub_08045B40();
  }
  return;
}

