/* sub_08026D14  (original: 0x08026D14-0x08026D7C in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_08026D14(int param_1,int *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_2;
  *param_2 = (int)(puVar1 + 2);
  *puVar1 = (*(int **)(param_1 + 0x1c))[1] - *(int *)(*(int *)(param_1 + 0x10) + 0x8030) & 0xffU |
            (uint)((**(int **)(param_1 + 0x1c) - *(int *)(*(int *)(param_1 + 0x10) + 0x802c)) *
                  0x800000) >> 7 | *(uint *)(*(int *)(param_1 + 0x1c) + 0x10) & 0xfe00ff00;
  puVar1[1] = *(ushort *)(param_1 + 0x14) & 0x3ff | puVar1[1] & 0xfffffc00 | 0xc00;
  return 0;
}

