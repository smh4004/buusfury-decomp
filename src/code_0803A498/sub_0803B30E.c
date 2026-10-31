/* sub_0803B30E  (original: 0x0803B30E-0x0803B356 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern undefined volatile _0804DBA8;


bool sub_0803B30E(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x58) + 0x9c) != *(int *)(param_2 + 0x50)) {
    return true;
  }
  if (*(int *)(param_1 + 4) == 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804DBA8;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
    sub_0800ED18(param_2,puVar1);
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return *(int *)(param_2 + 0x14) != *(int *)(param_1 + 8);
}

