/* sub_080028DA  (original: 0x080028DA-0x08002918 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080195A8();
extern int sub_0801191A();
extern int sub_080001C6();
extern undefined volatile DAT_03001c4c;


void sub_080028DA(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  uVar1 = sub_080001C6(param_1[iVar2 + -2]);
  uVar1 = sub_080195A8(0,uVar1,iVar3,iVar4,param_4);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}

