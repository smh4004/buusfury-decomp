/* sub_08001E2C  (original: 0x08001E2C-0x08001E6E in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();
extern int sub_0801936A();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002bac;
extern undefined4 volatile DAT_03002bd8;
extern undefined volatile _0804DCCC;


void sub_08001E2C(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  iVar4 = param_1[iVar3];
  *param_1 = iVar3 + -2;
  uVar1 = sub_080001C6(param_1[iVar3 + -1]);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = iVar4;
    *puVar2 = &_0804DCCC;
    puVar2[3] = uVar1;
  }
  sub_0801936A(&DAT_03002bac,puVar2,&DAT_03002bd8);
  return;
}

