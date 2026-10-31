/* sub_080029C0  (original: 0x080029C0-0x080029D8 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08004468();
extern undefined1 volatile DAT_03001068;


void sub_080029C0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08004468(&DAT_03001068,param_1[iVar1],param_3,param_4,param_4);
  return;
}

