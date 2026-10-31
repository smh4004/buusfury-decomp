/* sub_080015BA  (original: 0x080015BA-0x08001606 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_080001C6();
extern int sub_0801936A();
extern int sub_0803D5B8();
extern undefined volatile _0804DEC8;
extern undefined4 volatile DAT_03002bac;


void sub_080015BA(int *param_1)

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
    *puVar1 = &_0804DEC8;
    puVar1[1] = 0;
    *(char *)(puVar1 + 2) = (char)iVar3;
  }
  iVar2 = sub_080001C6(iVar2);
  if (iVar2 != 0) {
    iVar4 = iVar2 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar4);
  return;
}

