/* sub_0803CE0E  (original: 0x0803CE0E-0x0803CE52 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern int sub_0800ECDA();
extern undefined volatile _0804D7D0;


bool sub_0803CE0E(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804D7D0;
    }
    sub_0800ECDA(param_2,0x13);
    sub_0800ED18(param_2,puVar1);
  }
  return *(int *)(*(int *)(param_2 + 0x58) + 0xa0) != *(int *)(param_2 + 0x50);
}

