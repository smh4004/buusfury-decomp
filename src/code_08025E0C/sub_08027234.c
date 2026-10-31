/* sub_08027234  (original: 0x08027234-0x0802726C in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_06010000;


void sub_08027234(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    uVar2 = (uint)(iVar1 * 0x8000000) >> 0x1f;
  }
  if (*(uint *)(param_1 + 0x18) != uVar2) {
    *(uint *)(param_1 + 0x18) = uVar2;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 *(int *)(param_1 + 0x10) + uVar2 * 0x40,0x40);
  }
  return;
}

