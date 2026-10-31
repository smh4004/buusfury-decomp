/* sub_0801C1CC  (original: 0x0801C1CC-0x0801C1F6 in asm/code_0801B248.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_0801C1CC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 8) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 8),param_3,param_4,param_4);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0xc));
  }
  sub_0803D63C(param_1);
  return;
}

