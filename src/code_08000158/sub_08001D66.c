/* sub_08001D66  (original: 0x08001D66-0x08001DAE in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C70();
extern int sub_0801936A();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile DAT_03002bac;
extern undefined volatile _0804AB58;


void sub_08001D66(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar4 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  iVar2 = sub_08011C70(&DAT_03001c4c,8,param_1[iVar2 + -1]);
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804AB58;
    puVar1[1] = 0;
    puVar1[2] = iVar4;
  }
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0xc;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar3);
  return;
}

