/* sub_0803388C  (original: 0x0803388C-0x080338C4 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int volatile DAT_0300225c;
extern undefined volatile DAT_03002260;
extern undefined volatile _08049264;


undefined4 sub_0803388C(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 1;
    *puVar1 = &_08049264;
    puVar1[2] = uVar3;
    puVar1[3] = param_2;
  }
  iVar2 = DAT_0300225c * 4;
  DAT_0300225c = DAT_0300225c + 1;
  *(undefined4 **)(&DAT_03002260 + iVar2) = puVar1;
  return 1;
}

