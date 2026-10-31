/* sub_080038B4  (original: 0x080038B4-0x080038D4 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803643C();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;


void sub_080038B4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  uVar1 = sub_0803643C(0,param_1[iVar2],param_3,param_4,param_4);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}

