/* sub_080030DA  (original: 0x080030DA-0x080030F8 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08012588();
extern undefined4 volatile DAT_03001030;
extern undefined * volatile gUnknown_0879B704;


void sub_080030DA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08012588((&gUnknown_0879B704)[param_1[iVar1]],DAT_03001030,param_3,param_4,param_4);
  return;
}

