/* sub_08024600  (original: 0x08024600-0x08024630 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08049144();
extern undefined4 volatile DAT_03002f54;
extern int * volatile DAT_03004a8c;


undefined4
sub_08024600(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*DAT_03004a8c + 0x24);
  iVar2 = __call_via_r1(DAT_03004a8c,iVar2 + *DAT_03004a8c,iVar2,param_4,param_4);
  if (iVar2 == 0) {
    *param_2 = (char)DAT_03002f54;
    uVar1 = 1;
  }
  else {
    sub_08049144((int)param_2,0x3002f58,0x10);
    uVar1 = 0x10;
  }
  return uVar1;
}

