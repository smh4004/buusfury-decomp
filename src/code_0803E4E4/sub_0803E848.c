/* sub_0803E848  (original: 0x0803E848-0x0803E8BC in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 53% of instructions covered.
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087B6724;


void sub_0803E848(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x5e);
  }
  bVar1 = *(byte *)(param_1 + 0x4a);
  if (-1 < (int)((uint)bVar1 << 0x1d)) {
    return;
  }
  if ((*(byte *)(param_1 + 0x58) & 0x11) == 0) {
    if (-1 < (int)((uint)bVar1 << 0x1c)) goto _0803E8A4;
  }
  else {
    if (*(byte *)(param_1 + 0x5a) == 0xff) goto _0803E8A4;
    *(undefined4 *)(param_1 + 0x44) =
         *(undefined4 *)(&gUnknown_087B6724 + (uint)*(byte *)(param_1 + 0x5a) * 4);
    *(byte *)(param_1 + 0x4a) = bVar1 | 8;
  }
  if (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x54) = 0x803e807;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0x803e7c5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
  }
_0803E8A4:
  if ((*(byte *)(param_1 + 0x58) & 0x44) != 0) {
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x5c);
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x5c);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  }
  return;
}

