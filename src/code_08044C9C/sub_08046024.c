/* sub_08046024  (original: 0x08046024-0x08046048 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045B40();
extern int sub_08045D8C();
extern int volatile DAT_03005294;


void sub_08046024(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = sub_08045D8C(0x1f);
  iVar1 = DAT_03005294;
  if (iVar2 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 1;
    *(undefined4 *)(*(int *)(iVar1 + 0x24) + 4) = param_1;
    sub_08045B40();
  }
  return;
}

