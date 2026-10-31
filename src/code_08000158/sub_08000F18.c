/* sub_08000F18  (original: 0x08000F18-0x08000F78 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();
extern int sub_0801936A();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002bac;
extern undefined volatile _0804DCE0;


void sub_08000F18(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar5 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  iVar1 = param_1[iVar4 + -1];
  *param_1 = iVar4 + -3;
  iVar4 = param_1[iVar4 + -2];
  uVar2 = sub_080001C6(iVar1);
  puVar3 = (undefined4 *)sub_0803D5B8(0x20);
  iVar1 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &_0804DCE0;
    puVar3[1] = 0;
    puVar3[5] = iVar5;
    puVar3[7] = uVar2;
  }
  iVar4 = sub_080001C6(iVar4);
  if (iVar4 != 0) {
    iVar1 = iVar4 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar3,iVar1);
  return;
}

