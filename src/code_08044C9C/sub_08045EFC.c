/* sub_08045EFC  (original: 0x08045EFC-0x08045F4A in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045B40();
extern int sub_08045D8C();
extern int volatile DAT_03005294;


void sub_08045EFC(undefined2 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar2 = sub_08045D8C(0x16);
  iVar3 = DAT_03005294;
  if (iVar2 == 0) {
    *(undefined1 *)(DAT_03005294 + 4) = 6;
    iVar3 = *(int *)(iVar3 + 0x24);
    *(undefined2 *)(iVar3 + 4) = *param_1;
    puVar4 = (undefined1 *)(iVar3 + 6);
    param_1 = param_1 + 1;
    iVar3 = 2;
    do {
      uVar1 = *(undefined1 *)param_1;
      param_1 = (undefined2 *)((int)param_1 + 1);
      iVar3 = iVar3 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < 0x10);
    iVar3 = 0;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < 8);
    sub_08045B40();
  }
  return;
}

