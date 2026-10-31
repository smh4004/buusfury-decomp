/* sub_0800E00A  (original: 0x0800E00A-0x0800E044 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();


void sub_0800E00A(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  uVar2 = (uint)uVar1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if (uVar2 < 0xa0) {
    if (uVar2 < 0x20) {
      *(char *)(param_2 + 0x11) = (char)(uVar1 >> 4);
    }
    else {
      *(char *)(param_2 + 0x11) = '\x02' - (char)((int)(uVar2 << 0x1b) >> 0x1f);
    }
  }
  else if (uVar2 < 0xb0) {
    *(undefined1 *)(param_2 + 0x11) = 4;
  }
  else {
    iVar3 = *(int *)(*param_1 + 0x24);
    __call_via_r2(param_1,param_2,iVar3 + *param_1,iVar3,param_4);
  }
  return;
}

