/* sub_080011B0  (original: 0x080011B0-0x08001208 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();
extern int sub_0801936A();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002bac;
extern undefined volatile _0804C43C;


void sub_080011B0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar3 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar2 = param_1[iVar2 + -2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  iVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C43C;
    puVar1[1] = 0;
    puVar1[2] = iVar3;
    puVar1[3] = iVar4;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar5 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar5);
  return;
}

