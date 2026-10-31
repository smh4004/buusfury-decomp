/* sub_0800115C  (original: 0x0800115C-0x080011B0 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();
extern int sub_0801936A();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002bac;
extern undefined volatile _0804AE70;


void sub_0800115C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  iVar1 = param_1[iVar4];
  *param_1 = iVar4 + -2;
  iVar4 = param_1[iVar4 + -1];
  uVar2 = sub_080001C6(iVar1);
  puVar3 = (undefined4 *)sub_0803D5B8(0xc);
  iVar1 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &_0804AE70;
    puVar3[1] = 0;
    puVar3[2] = uVar2;
  }
  iVar4 = sub_080001C6(iVar4);
  if (iVar4 != 0) {
    iVar1 = iVar4 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar3,iVar1);
  return;
}

