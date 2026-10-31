/* sub_0803B418  (original: 0x0803B418-0x0803B4C8 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803FACC();
extern int sub_0803D5B8();
extern int volatile DAT_03001c34;
extern undefined volatile _0804D714;


bool sub_0803B418(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = sub_0803FACC(2);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(DAT_03001c34 + 0x1a4);
      *(int *)(param_2 + 0x1a0) = *(int *)(DAT_03001c34 + 0x1a0) + -0x1400;
      *(undefined4 *)(param_2 + 0x1a4) = uVar2;
      *(undefined1 *)(param_2 + 0x10) = 3;
    }
    else {
      uVar2 = *(undefined4 *)(DAT_03001c34 + 0x1a4);
      *(int *)(param_2 + 0x1a0) = *(int *)(DAT_03001c34 + 0x1a0) + 0x400;
      *(undefined4 *)(param_2 + 0x1a4) = uVar2;
      *(undefined1 *)(param_2 + 0x10) = 2;
    }
    *(undefined4 *)(param_1 + 4) = 1;
    puVar3 = (undefined4 *)sub_0803D5B8(8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &_0804D714;
    }
    *(undefined4 **)(param_1 + 8) = puVar3;
    sub_0800ECDA(param_2,0x12);
    sub_0800ED18(param_2,puVar3);
  }
  return *(int *)(param_2 + 0x14) != *(int *)(param_1 + 8);
}

