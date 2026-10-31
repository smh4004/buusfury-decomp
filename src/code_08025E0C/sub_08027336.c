/* sub_08027336  (original: 0x08027336-0x0802735C in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080272AC();
extern int sub_0800EF08();
extern undefined volatile gUnknown_0874D35C;


void sub_08027336(int param_1)

{
  int iVar1;
  
  sub_0800EF08();
  iVar1 = *(int *)(param_1 + 0x194) + 1;
  *(int *)(param_1 + 0x194) = iVar1;
  *(undefined *)(param_1 + 0x10) = (&gUnknown_0874D35C)[(uint)(iVar1 * 0x800000) >> 0x1e];
  sub_080272AC(param_1);
  return;
}

