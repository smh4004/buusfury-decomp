/* sub_080033D2  (original: 0x080033D2-0x080033EA in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080043D8();
extern undefined1 volatile DAT_03001068;


void sub_080033D2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_080043D8(&DAT_03001068,param_1[iVar1],param_3,param_4,param_4);
  return;
}

