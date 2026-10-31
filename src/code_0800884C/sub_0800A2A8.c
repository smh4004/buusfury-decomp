/* sub_0800A2A8  (original: 0x0800A2A8-0x0800A432 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 14% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803FADE();
extern int sub_0803FACC();
extern int sub_0800FDFA();
extern int __call_via_r2();


undefined4 sub_0800A2A8(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  
  piVar4 = (int *)(param_2 + 0x1a0);
  piVar7 = param_1 + 6;
  piVar5 = param_1 + 7;
  if (param_1[2] == 0) {
    iVar2 = sub_0803FADE(param_1[4]);
    if (iVar2 != 0) {
      sub_0800FDFA(param_1 + 10,param_2);
      uVar3 = sub_0803FACC(5);
      if ((int)uVar3 < 4) {
        *(char *)(param_2 + 0x10) = (char)uVar3;
      }
      uVar6 = *piVar4 >> 8;
      iVar2 = *(int *)(param_2 + 0x1a4);
      param_1[8] = uVar6;
      param_1[9] = iVar2 >> 8;
      cVar1 = *(char *)(param_2 + 0x10);
      if (cVar1 == '\0') {
        *piVar7 = 0;
        *piVar5 = param_1[5];
        uVar6 = (uint)*(byte *)((int)param_1 + 5);
        uVar3 = 0;
      }
      else if (cVar1 == '\x01') {
        *piVar7 = 0;
        *piVar5 = -param_1[5];
        uVar6 = -(uint)*(byte *)((int)param_1 + 5);
        uVar3 = 0;
      }
      else if (cVar1 == '\x02') {
        *piVar7 = -param_1[5];
        *piVar5 = 0;
        uVar3 = -(uint)*(byte *)((int)param_1 + 5);
        uVar6 = 0;
      }
      else if (cVar1 == '\x03') {
        *piVar7 = param_1[5];
        *piVar5 = 0;
        uVar3 = (uint)*(byte *)((int)param_1 + 5);
        uVar6 = 0;
      }
      param_1[8] = param_1[8] + uVar3;
      param_1[9] = param_1[9] + uVar6;
      iVar2 = param_1[0xd] + uVar6;
      param_1[0xe] = param_1[10] + uVar3;
      param_1[0xf] = param_1[0xb] + uVar6;
      param_1[0x10] = param_1[0xc] + uVar3;
      param_1[0x11] = iVar2;
      iVar2 = __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x10) + *param_1,iVar2,
                            param_1[0xc] + uVar3,iVar2);
      if (iVar2 != 0) {
        param_1[2] = param_1[3];
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 0x10);
        __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x18) + *param_1);
      }
    }
    if (param_1[2] == 0) {
      return 0;
    }
  }
  *piVar4 = *piVar4 + *piVar7;
  *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + *piVar5;
  *(char *)(param_2 + 0x10) = (char)param_1[1];
  iVar2 = param_1[2];
  param_1[2] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    iVar2 = param_1[9];
    *piVar4 = param_1[8] << 8;
    *(int *)(param_2 + 0x1a4) = iVar2 << 8;
    __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x14) + *param_1);
    __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x1c) + *param_1);
  }
  else {
    __call_via_r2(param_1,param_2,*(int *)(*param_1 + 0x18) + *param_1);
  }
  return 0;
}

