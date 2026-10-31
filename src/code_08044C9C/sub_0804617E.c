/* sub_0804617E  (original: 0x0804617E-0x080461B2 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045B40();
extern int sub_08045D8C();
extern int volatile DAT_03005294;


void sub_0804617E(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_08045D8C(0x29);
  iVar2 = DAT_03005294;
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 1;
    iVar2 = *(int *)(iVar2 + 0x24);
    *(undefined1 *)(iVar2 + 4) = param_1;
    *(undefined1 *)(iVar2 + 5) = param_2;
    *(undefined1 *)(iVar2 + 6) = 0;
    *(undefined1 *)(iVar2 + 7) = 0;
    sub_08045B40();
  }
  return;
}

