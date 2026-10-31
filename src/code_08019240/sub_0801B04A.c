/* sub_0801B04A  (original: 0x0801B04A-0x0801B086 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int sub_0803E302();
extern int sub_08011944();
extern undefined volatile gUnknown_08319428;
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_083192CC;


void sub_0801B04A(int param_1)

{
  sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 0xc));
  if (*(char *)(param_1 + 4) == '\0') {
    sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
  }
  else {
    sub_0803E302(&DAT_03003e5c,&gUnknown_08319428);
  }
  sub_0803D63C(param_1);
  return;
}

