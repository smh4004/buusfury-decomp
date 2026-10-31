/* sub_0803A1E0  (original: 0x0803A1E0-0x0803A266 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803A16E();
extern int sub_0800ECDA();
extern int __call_via_r2();
extern int sub_0800ED18();
extern int sub_08011944();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804C338;


void sub_0803A1E0(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  sVar1 = *(short *)((int)param_2 + 0x12) + 1;
  *(short *)((int)param_2 + 0x12) = sVar1;
  if (sVar1 == 0x10) {
    iVar2 = sub_0803A16E(param_1);
    *(int *)(param_1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0x10) = 2;
    uVar6 = *(undefined4 *)(param_1 + 4);
    puVar3 = (undefined4 *)sub_0803D5B8(8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &_0804C338;
    }
    sub_0800ECDA(uVar6,0x13);
    sub_0800ED18(uVar6,puVar3);
  }
  piVar4 = *(int **)(param_1 + 4);
  if ((piVar4 != (int *)0x0) &&
     (iVar2 = __call_via_r2(piVar4,0,*(int *)(*piVar4 + 0x34) + *piVar4), iVar2 != 0)) {
    sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  uVar5 = (uint)*(ushort *)((int)param_2 + 0x12) << 0x15;
  *(char *)((int)param_2 + 0x11) = (char)(uVar5 >> 0x18);
  if (*(uint *)param_2[0x14] == uVar5 >> 0x18) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

