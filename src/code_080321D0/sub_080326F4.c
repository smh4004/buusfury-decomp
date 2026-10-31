/* sub_080326F4  (original: 0x080326F4-0x080327A2 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern undefined volatile gUnknown_08319470;
extern ushort volatile DAT_03003304;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_0831947C;


undefined4 sub_080326F4(int param_1)

{
  if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
    if (*(int *)(param_1 + 0x8c8) < 2) {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319470,0x40,0);
    }
    else {
      *(int *)(param_1 + 0x8c8) = *(int *)(param_1 + 0x8c8) + -1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
    if (*(int *)(param_1 + 0x8c8) <
        (int)(uint)*(byte *)(*(int *)(param_1 + 0x8c0) * 8 + param_1 + 0x119)) {
      *(int *)(param_1 + 0x8c8) = *(int *)(param_1 + 0x8c8) + 1;
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    else {
      sub_0803E378(&DAT_03003e5c,&gUnknown_08319470,0x40,0);
    }
  }
  return 0;
}

