/* sub_080240B8  (original: 0x080240B8-0x080240E0 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080067F4();
extern int sub_08040182();
extern int volatile DAT_03002f54;


undefined4 sub_080240B8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((DAT_03002f54 != 0) &&
     (iVar2 = *(int *)(param_1 + 0x118) + 1, *(int *)(param_1 + 0x118) = iVar2, 10 < iVar2)) {
    sub_08040182();
    return 2;
  }
  uVar1 = sub_080067F4();
  return uVar1;
}

