/* sub_080461F8  (original: 0x080461F8-0x08046222 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045B40();
extern int sub_08045D8C();
extern int volatile DAT_03005294;


void sub_080461F8(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = sub_08045D8C(0x31);
  iVar1 = DAT_03005294;
  if (iVar2 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 1;
    *(uint *)(*(int *)(iVar1 + 0x24) + 4) = param_2 << 8 | param_1;
    sub_08045B40();
  }
  return;
}

