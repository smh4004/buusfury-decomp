/* sub_08013ABA  (original: 0x08013ABA-0x08013B12 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 97% of instructions covered.
 */
#include "ghidra_types.h"


void sub_08013ABA(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    do {
      if (*(byte *)(param_1 + iVar4 + 0xd) == param_2) {
        bVar1 = *(char *)(param_1 + 0xc) - 1;
        *(byte *)(param_1 + 0xc) = bVar1;
        iVar2 = iVar4;
        if (iVar4 < (int)(uint)bVar1) {
          do {
            *(undefined1 *)(param_1 + iVar2 + 0xd) = *(undefined1 *)(param_1 + iVar2 + 0xe);
            iVar3 = iVar2 * 2 + param_1;
            iVar2 = iVar2 + 1;
            *(undefined1 *)(iVar3 + 0x2e) = *(undefined1 *)(iVar3 + 0x30);
            *(undefined1 *)(iVar3 + 0x2f) = *(undefined1 *)(iVar3 + 0x31);
          } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0xc));
        }
        if (*(byte *)(param_1 + 0xc) <= *(byte *)(param_1 + 0x15)) {
          *(undefined1 *)(param_1 + 0x15) = 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  return;
}

