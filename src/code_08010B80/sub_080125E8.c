/* sub_080125E8  (original: 0x080125E8-0x080125FA in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_080125E8(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  __call_via_r3(param_2,param_3,iVar1,*(int *)(iVar1 + 4) + iVar1,param_4);
  return;
}

