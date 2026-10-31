/* sub_0800253C  (original: 0x0800253C-0x08002556 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08018346();
extern undefined4 volatile DAT_03001010;
extern undefined4 volatile DAT_03001018;


void sub_0800253C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08018346(&DAT_03001010,param_1[iVar1],&DAT_03001018,param_4,param_4);
  return;
}

