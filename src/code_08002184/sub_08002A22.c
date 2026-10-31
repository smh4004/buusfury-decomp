/* sub_08002A22  (original: 0x08002A22-0x08002A44 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08004544();
extern undefined1 volatile DAT_03001068;


void sub_08002A22(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  sub_08004544(&DAT_03001068,param_1[iVar1 + -1],iVar2,param_4,param_4);
  return;
}

