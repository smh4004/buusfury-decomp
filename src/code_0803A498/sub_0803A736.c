/* sub_0803A736  (original: 0x0803A736-0x0803A77E in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern undefined volatile _0804D438;


bool sub_0803A736(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x58) + 0xa0) != *(int *)(param_2 + 0x50)) {
    return true;
  }
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804D438;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
    sub_0800ED18(param_2,puVar1);
  }
  return *(int *)(param_2 + 0x14) != *(int *)(param_1 + 8);
}

