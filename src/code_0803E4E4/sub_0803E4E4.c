/* sub_0803E4E4  (original: 0x0803E4E4-0x0803E574 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 88% of instructions covered.
 */
#include "ghidra_types.h"
extern int volatile DAT_030038b0;
extern undefined volatile gUnknown_087B6724;


void sub_0803E4E4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x58);
  if ((bVar1 & 0x11) == 0) {
    if ((bVar1 & 0x44) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x5c);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
    }
  }
  else if (*(byte *)(param_1 + 0x5a) == 0xff) {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfb;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
    uVar2 = *(undefined4 *)(&gUnknown_087B6724 + (uint)*(byte *)(param_1 + 0x5a) * 4);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined1 *)(param_1 + 0x4a) = 4;
    if ((int)((uint)bVar1 << 0x1a) < 0) {
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x17;
    }
    else {
      *(uint *)(param_1 + 0x28) = *(int *)(DAT_030038b0 + 8) + (uint)*(byte *)(param_1 + 0x5b) * 0xc
      ;
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x1f;
    }
  }
  return;
}

