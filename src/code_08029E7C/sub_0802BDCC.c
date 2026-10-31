/* sub_0802BDCC  (original: 0x0802BDCC-0x0802BDF4 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001a34;


void sub_0802BDCC(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) << 10;
  if (DAT_03001a34 != 0) {
    *(int *)(*(int *)(param_2 + 4) + 0x1ac) = iVar1;
    return;
  }
  *(int *)(*(int *)(param_2 + 4) + 0x180) = iVar1;
  return;
}

