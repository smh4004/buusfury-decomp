/* sub_08045F4A  (original: 0x08045F4A-0x08045F7C in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045B40();
extern int sub_08045D8C();
extern int volatile DAT_03005294;


void sub_08045F4A(undefined2 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_08045D8C(0x17);
  iVar2 = DAT_03005294;
  if (iVar1 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 1;
    iVar2 = *(int *)(iVar2 + 0x24);
    *(undefined1 *)(iVar2 + 4) = param_3;
    *(undefined1 *)(iVar2 + 5) = param_2;
    *(undefined2 *)(iVar2 + 6) = param_1;
    sub_08045B40();
  }
  return;
}

