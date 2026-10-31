/* sub_080025A4  (original: 0x080025A4-0x080025F2 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080116FC();
extern int sub_0801191A();
extern int sub_0800D30E();
extern int volatile DAT_03002a64;
extern int volatile DAT_03001c50;
extern undefined4 volatile DAT_03001010;
extern undefined4 volatile DAT_03001018;
extern undefined volatile DAT_03001c4c;


void sub_080025A4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  iVar2 = sub_080116FC(&DAT_03001c4c);
  if (((0xfff < iVar2) && (3 < 0x30 - DAT_03002a64)) && (3 < 0x80 - DAT_03001c50)) {
    uVar1 = sub_0800D30E(0,-iVar3,&DAT_03001010,&DAT_03001018,param_4);
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  return;
}

