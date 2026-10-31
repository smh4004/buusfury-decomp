/* sub_08038A84  (original: 0x08038A84-0x08038AD8 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080387DC();
extern int sub_08049138();
extern undefined volatile DAT_06010000;


undefined4 sub_08038A84(int param_1,int param_2)

{
  if (param_2 == 0xb) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),0x876e2f4,0x400);
    sub_08049138((uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010400,
                 *(int *)(*(int *)(param_1 + 0x2c) + 8),0x200);
    return 0;
  }
  if (param_2 == 0xc) {
    sub_080387DC(param_1,0);
    return 0;
  }
  return 0;
}

