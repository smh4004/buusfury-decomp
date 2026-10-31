/* sub_0801B81A  (original: 0x0801B81A-0x0801B862 in asm/code_0801B248.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int sub_0803E302();
extern int sub_08011944();
extern undefined volatile gUnknown_08319428;
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_03003898;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_083192CC;


void sub_0801B81A(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0xc),&DAT_03003898,param_4,param_4);
    sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    sub_08011944(&DAT_03001c4c,*(int *)(param_1 + 0x10));
    sub_0803E302(&DAT_03003e5c,&gUnknown_08319428);
  }
  sub_0803D63C(param_1);
  return;
}

