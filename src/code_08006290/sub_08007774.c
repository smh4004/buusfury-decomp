/* sub_08007774  (original: 0x08007774-0x08007790 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03002b28;


bool sub_08007774(int param_1)

{
  bool bVar1;
  
  bVar1 = DAT_03002b28 != *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = DAT_03002b28;
  return bVar1;
}

