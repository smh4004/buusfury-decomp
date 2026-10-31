/* sub_0803E608  (original: 0x0803E608-0x0803E68C in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0803E4E4();
extern int sub_0803E5AC();
extern int sub_0803E5DA();


void sub_0803E608(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  sub_0803E4E4();
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x4c) = *(char *)(param_1 + 0x5e);
  }
  bVar1 = *(byte *)(param_1 + 0x4c);
  if ((bVar1 & 0xf) == 0) {
    *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
    *(undefined4 *)(param_1 + 0x54) = 0x803e5db;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    if (*(char *)(param_1 + 0x4b) == '\x0f') {
      sub_0803E5DA(param_1);
    }
  }
  else {
    uVar2 = (uint)bVar1 << 0x18;
    if (uVar2 >> 0x1c != 0) {
      if ((~(uint)bVar1 & 0xf) == 0) {
        *(byte *)(param_1 + 0x4b) = bVar1 >> 4;
        sub_0803E5DA(param_1);
      }
      else if (uVar2 >> 0x1c == 0xf) {
        *(byte *)(param_1 + 0x4b) = bVar1 & 0xf;
        sub_0803E5AC(param_1);
        return;
      }
      return;
    }
    *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x54) = 0x803e5ad;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
    if (*(char *)(param_1 + 0x4b) == '\x0f') {
      sub_0803E5AC(param_1);
      return;
    }
  }
  return;
}

