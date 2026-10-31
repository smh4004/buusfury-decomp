/* sub_08000F78  (original: 0x08000F78-0x08000FDE in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();
extern int sub_0801936A();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002bac;
extern undefined volatile _0804DCF4;


void sub_08000F78(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar5 = param_1[iVar2 + -1];
  *param_1 = iVar2 + -3;
  iVar4 = param_1[iVar2 + -2];
  *param_1 = iVar2 + -4;
  iVar2 = param_1[iVar2 + -3];
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[5] = iVar3;
    *puVar1 = &_0804DCF4;
    puVar1[7] = iVar4;
    puVar1[8] = iVar5;
  }
  iVar2 = sub_080001C6(iVar2);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}

