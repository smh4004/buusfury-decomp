/* sub_0800CDEA  (original: 0x0800CDEA-0x0800CE1A in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801124C();
extern int sub_0800CD00();
extern undefined volatile DAT_03001c4c;


void sub_0800CDEA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  if (*(short *)(iVar2 + 0x16) == -1) {
    uVar1 = sub_0801124C(&DAT_03001c4c,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x2c) + 4),
                         param_3,param_4,param_4);
    *(undefined2 *)(iVar2 + 0x16) = uVar1;
    sub_0800CD00(iVar2);
  }
  *(short *)(param_1 + 0x16) =
       *(short *)(iVar2 + 0x16) + *(short *)(*(int *)(param_1 + 0x20) + 0x14);
  return;
}

