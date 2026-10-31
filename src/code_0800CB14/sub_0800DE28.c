/* sub_0800DE28  (original: 0x0800DE28-0x0800DE54 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EECC();
extern int sub_0800EDA6();
extern undefined volatile gUnknown_080725AC;


void sub_0800DE28(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 4) - 1;
  *(byte *)(param_1 + 4) = bVar1;
  if (bVar1 == 0) {
    sub_0800EDA6();
  }
  else if (*(int *)(param_2 + 0x38) != *(int *)(&gUnknown_080725AC + (uint)(bVar1 >> 2) * 4)) {
    sub_0800EECC();
  }
  return;
}

