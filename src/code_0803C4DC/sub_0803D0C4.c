/* sub_0803D0C4  (original: 0x0803D0C4-0x0803D0FA in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D046();
extern int sub_0803CFC2();
extern int sub_0803CF46();


undefined4 sub_0803D0C4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 500);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(*(int *)(iVar1 + 0x58) + 0x78) == *(int *)(iVar1 + 0x50)) {
    sub_0803CF46();
  }
  else if (*(int *)(*(int *)(iVar1 + 0x58) + 0xa0) == *(int *)(iVar1 + 0x50)) {
    sub_0803D046();
  }
  else {
    sub_0803CFC2();
  }
  return 0;
}

