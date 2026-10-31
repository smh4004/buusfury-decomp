/* sub_0802442C  (original: 0x0802442C-0x08024490 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();


undefined4 sub_0802442C(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x138) == 0) {
    iVar1 = *(int *)(param_1 + 0x140);
    if ((iVar1 == 0) || (iVar1 == 1)) {
      sub_08049138((int)(param_2 + 4),*(int *)(param_1 + 0x130),0x20);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[3] = (char)*(undefined4 *)(param_1 + 0x13c);
      return 0x24;
    }
    if (iVar1 == 2) {
      *param_2 = 1;
      param_2[1] = 0;
      param_2[3] = (char)*(undefined4 *)(param_1 + 0x13c);
      return 4;
    }
    if (iVar1 == 3) {
      *param_2 = 1;
      param_2[1] = 1;
      param_2[3] = (char)*(undefined4 *)(param_1 + 0x13c);
      return 4;
    }
  }
  *param_2 = (char)*(undefined4 *)(param_1 + 300);
  param_2[1] = (char)*(undefined4 *)(param_1 + 0x13c);
  return 2;
}

