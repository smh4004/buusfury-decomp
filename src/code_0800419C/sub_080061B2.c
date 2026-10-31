/* sub_080061B2  (original: 0x080061B2-0x0800620C in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 53% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803FFE8();
extern undefined4 volatile gUnknown_0807012C;


undefined4 sub_080061B2(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x10c) == *(int *)(param_1 + 8)) {
    cVar1 = *(char *)(param_1 + 0x2c);
    if (cVar1 == '\0') {
      *param_2 = *(int *)(param_1 + 0x20);
    }
    else if (cVar1 == '\x01') {
      iVar3 = sub_0803FFE8(&gUnknown_0807012C,*(undefined4 *)(param_1 + 0x1c),param_3,param_4,
                           param_4);
      *param_2 = *(int *)(param_1 + 0x20) - (iVar3 >> 1);
    }
    else if (cVar1 == '\x02') {
      iVar3 = sub_0803FFE8(&gUnknown_0807012C,*(undefined4 *)(param_1 + 0x1c),param_3,param_4,
                           param_4);
      *param_2 = *(int *)(param_1 + 0x20) - iVar3;
    }
    param_2[1] = *(int *)(param_1 + 0x24) + -4;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

