/* sub_0800F516  (original: 0x0800F516-0x0800F53C in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011568();
extern int sub_0804FE20();
extern undefined volatile DAT_03001ba8;


void sub_0800F516(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x50) != 0) {
    sub_0804FE20(&DAT_03001ba8);
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    sub_0804FE20(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 8));
  }
  sub_08011568(param_1);
  return;
}

