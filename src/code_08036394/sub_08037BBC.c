/* sub_08037BBC  (original: 0x08037BBC-0x08037C06 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FACC();


undefined4 sub_08037BBC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = sub_0803FACC(3);
  iVar2 = sub_0803FACC(3);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_2 + 0x1a0) = *(int *)(param_1 + 4) + (iVar1 + -1) * 0x100;
  *(int *)(param_2 + 0x1a4) = iVar3 + (iVar2 + -1) * 0x100;
  return 0;
}

