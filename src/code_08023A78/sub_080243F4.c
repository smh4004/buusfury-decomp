/* sub_080243F4  (original: 0x080243F4-0x0802442C in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080067F4();
extern int sub_08040182();
extern int volatile DAT_03002f50;
extern int volatile DAT_03002fb4;


undefined4 sub_080243F4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_03002f50 == 0) {
    if ((DAT_03002fb4 != 0) &&
       (iVar2 = *(int *)(param_1 + 0x11c) + 1, *(int *)(param_1 + 0x11c) = iVar2, 0x1e < iVar2)) {
      sub_08040182();
      return 2;
    }
    uVar1 = sub_080067F4();
  }
  else {
    DAT_03002f50 = 0;
    uVar1 = 1;
  }
  return uVar1;
}

