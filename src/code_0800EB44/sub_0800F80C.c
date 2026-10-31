/* sub_0800F80C  (original: 0x0800F80C-0x0800F866 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern byte volatile DAT_03001068;
extern undefined volatile _0804A820;
extern int volatile DAT_0300225c;
extern undefined volatile DAT_030015b8;
extern undefined volatile DAT_03002260;


void sub_0800F80C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((**(int **)(param_1 + 0x224) != 0) &&
     (iVar2 = **(int **)(param_1 + 0x224) *
              (int)*(short *)(&DAT_030015b8 + (uint)DAT_03001068 * 0x68) + 0xff >> 8, iVar2 != 0)) {
    puVar1 = (undefined4 *)sub_0803D5B8(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 1;
      *puVar1 = &_0804A820;
      puVar1[2] = iVar2;
    }
    iVar2 = DAT_0300225c * 4;
    DAT_0300225c = DAT_0300225c + 1;
    *(undefined4 **)(&DAT_03002260 + iVar2) = puVar1;
  }
  return;
}

