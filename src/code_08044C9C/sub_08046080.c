/* sub_08046080  (original: 0x08046080-0x080460C4 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045B40();
extern int sub_08045D8C();
extern int sub_080433E0();
extern int volatile DAT_03005294;


void sub_08046080(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = sub_08045D8C(0x24);
  iVar1 = DAT_03005294;
  if (iVar2 == 0) {
    uVar3 = param_2 >> 2;
    if ((param_2 & 3) != 0) {
      uVar3 = uVar3 + 1 & 0xffff;
    }
    *(char *)(DAT_03005294 + 4) = (char)uVar3;
    sub_080433E0(param_1,*(int *)(iVar1 + 0x24) + 4,uVar3 & 0xff | 0x4000000);
    sub_08045B40();
  }
  return;
}

