/* sub_0802F580  (original: 0x0802F580-0x0802F5C2 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802F458();


undefined4 sub_0802F580(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x204) == 8) {
    *(undefined4 *)(param_1 + 4) = 0x1e0;
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    }
    if ((*(int *)(param_1 + 4) == 0) && (iVar1 = sub_0802F458(param_1), iVar1 != 0)) {
      *(int *)(param_2 + 0x204) = *(int *)(param_2 + 0x204) + 1;
      *(undefined4 *)(param_1 + 4) = 0x78;
    }
  }
  return 0;
}

