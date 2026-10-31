/* sub_08021740  (original: 0x08021740-0x08021762 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_06010000;


void sub_08021740(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) != param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 *(int *)(param_2 + 8),(uint)*(byte *)(param_2 + 3) * (uint)*(byte *)(param_2 + 2));
  }
  return;
}

