/* sub_0802D8E6  (original: 0x0802D8E6-0x0802D940 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08011CCA();
extern int volatile DAT_03001c34;
extern undefined volatile DAT_03001c4c;


void sub_0802D8E6(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = DAT_03001c34;
  if ((DAT_03001c34 != 0) && (*(int *)(DAT_03001c34 + 0x1cc) != 0)) {
    piVar4 = (int *)**(int **)(DAT_03001c34 + 0x22c);
    __call_via_r2(*(int **)(DAT_03001c34 + 0x22c),DAT_03001c34,*piVar4 + (int)piVar4);
    iVar2 = sub_08011CCA(&DAT_03001c4c,0x25,0);
    iVar3 = *(int *)(iVar1 + 0x238);
    if (iVar3 + iVar2 * -0x30 < 0 == SBORROW4(iVar3,iVar2 * 0x30)) {
      *(int *)(iVar1 + 0x238) = iVar3 + iVar2 * -0x30;
    }
    else {
      *(undefined4 *)(iVar1 + 0x238) = 0;
    }
    iVar3 = *(int *)(iVar1 + 0x23c);
    if (iVar3 + iVar2 * -0x30 < 0 != SBORROW4(iVar3,iVar2 * 0x30)) {
      *(undefined4 *)(iVar1 + 0x23c) = 0;
      return;
    }
    *(int *)(iVar1 + 0x23c) = iVar3 + iVar2 * -0x30;
  }
  return;
}

