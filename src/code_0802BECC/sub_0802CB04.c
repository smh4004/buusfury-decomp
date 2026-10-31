/* sub_0802CB04  (original: 0x0802CB04-0x0802CB52 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EE78();
extern int __16__rt_sdiv();


void sub_0802CB04(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + 1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  iVar2 = __16__rt_sdiv();
  if (iVar2 < *(int *)(param_1 + 0x14)) {
    *(char *)(param_2 + 0x11) = (char)iVar2;
    return;
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (iVar2 = *(int *)(param_1 + 0xc) + -1, *(int *)(param_1 + 0xc) = iVar2, iVar2 == 0)) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = 1;
    }
    sub_0800EE78(param_2);
    return;
  }
  *(short *)(param_2 + 0x12) = (short)uVar1 * (short)*(undefined4 *)(param_1 + 0x10);
  *(char *)(param_2 + 0x11) = (char)*(undefined4 *)(param_1 + 0x10);
  return;
}

