/* sub_08039956  (original: 0x08039956-0x08039982 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern undefined4 volatile DAT_030032b8;


bool sub_08039956(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    sub_0800ECDA(param_2,0x13);
    sub_0800ED18(param_2,&DAT_030032b8);
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return 0x80 < *(ushort *)(param_2 + 0x12);
}

