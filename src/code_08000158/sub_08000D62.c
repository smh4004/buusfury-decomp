/* sub_08000D62  (original: 0x08000D62-0x08000DB2 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080001C6();
extern int sub_0801936A();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002bac;
extern undefined volatile _0804D818;


void sub_08000D62(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = param_1[iVar2 + -1];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *(char *)(puVar1 + 2) = (char)iVar3;
    *puVar1 = &_0804D818;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}

