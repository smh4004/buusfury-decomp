/* sub_08000E74  (original: 0x08000E74-0x08000EC0 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();
extern int sub_0801936A();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002bac;
extern undefined volatile _0804B2B4;


void sub_08000E74(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B2B4;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}

