/* sub_080077B4  (original: 0x080077B4-0x080077DE in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0801268A();
extern int __call_via_r3();
extern int volatile DAT_03002b2c;
extern undefined4 volatile DAT_03002a64;


void sub_080077B4(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_03002b2c;
  iVar2 = *param_2;
  __call_via_r3(param_2,param_3,iVar2,*(int *)(iVar2 + 4) + iVar2,param_4);
  if (DAT_03002b2c == iVar1) {
    sub_0801268A(&DAT_03002a64,param_2);
  }
  return;
}

