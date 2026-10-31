/* sub_08003B48  (original: 0x08003B48-0x08003B94 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080135BC();
extern int sub_08013678();
extern int sub_080135D2();
extern undefined1 volatile DAT_03001560;


void sub_08003B48(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  if (200 < iVar2) {
    iVar2 = 200;
  }
  puVar3 = &DAT_03001560 + param_1[iVar1 + -1] * 0x68;
  iVar1 = sub_080135D2(puVar3);
  if (iVar1 < iVar2) {
    sub_08013678(puVar3,iVar1,iVar2);
    sub_080135BC(puVar3,iVar2);
  }
  return;
}

