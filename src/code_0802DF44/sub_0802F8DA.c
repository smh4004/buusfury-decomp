/* sub_0802F8DA  (original: 0x0802F8DA-0x0802F918 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802F77C();


bool sub_0802F8DA(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(short *)(param_1 + 8) != 0) {
      *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + -1;
    }
    if (*(short *)(param_1 + 8) == 0) {
      iVar1 = sub_0802F77C(param_1,param_2);
      *(int *)(param_1 + 0xc) = 1 - iVar1;
    }
  }
  return *(int *)(*(int *)(param_2 + 0x58) + 100) != *(int *)(param_2 + 0x50);
}

