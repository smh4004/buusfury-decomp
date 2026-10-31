/* sub_08046222  (original: 0x08046222-0x08046252 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045B40();
extern int sub_08045D8C();
extern int volatile DAT_03005294;


void sub_08046222(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = sub_08045D8C(0x32);
  iVar1 = DAT_03005294;
  if (iVar2 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 2;
    *(uint *)(*(int *)(iVar1 + 0x24) + 4) = param_1 << 0x10 | param_2;
    *(undefined4 *)(*(int *)(iVar1 + 0x24) + 8) = param_3;
    sub_08045B40();
  }
  return;
}

