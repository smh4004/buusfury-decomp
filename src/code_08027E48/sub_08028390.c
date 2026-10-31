/* sub_08028390  (original: 0x08028390-0x080284AA in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801713C();
extern int sub_0800EDF8();
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern int sub_0800ECDA();
extern int volatile DAT_03002fe4;
extern int volatile DAT_03000f94;
extern byte volatile DAT_03001068;
extern undefined1 volatile DAT_03001574;
extern undefined volatile gUnknown_086B82EC;
extern undefined volatile _0804B7AC;


void sub_08028390(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_03002fe4 == 0) {
    uVar1 = sub_0801713C(&gUnknown_086B82EC +
                         (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
    sub_0800EDF8(param_2,uVar1);
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  else {
    iVar2 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    iVar3 = DAT_03000f94;
    if ((*(ushort *)(iVar2 + 4) & 0xf0) != 0) {
      *(ushort *)(param_2 + 0x8c) = *(ushort *)(iVar2 + 4) & 0xf0;
      param_2[0x8d] = iVar3;
    }
    iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
    if (((uint)*(ushort *)(iVar3 + 2) << 0x18) >> 0x1c != 0) {
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar3 + 4) << 0x1a) < 0) {
        *(undefined1 *)(param_2 + 4) = 2;
      }
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar3 + 4) << 0x1b) < 0) {
        *(undefined1 *)(param_2 + 4) = 3;
      }
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar3 + 4) << 0x19) < 0) {
        *(undefined1 *)(param_2 + 4) = 1;
      }
      iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x84) + *param_2);
      if ((int)((uint)*(ushort *)(iVar3 + 4) << 0x18) < 0) {
        *(undefined1 *)(param_2 + 4) = 0;
      }
      puVar4 = (undefined4 *)sub_0803D5B8(8);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = &_0804B7AC;
      }
      sub_0800ECDA(param_2,0);
      sub_0800ED18(param_2,puVar4);
    }
    if (0 < DAT_03002fe4) {
      DAT_03002fe4 = DAT_03002fe4 + -1;
      return;
    }
  }
  return;
}

