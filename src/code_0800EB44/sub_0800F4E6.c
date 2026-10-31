/* sub_0800F4E6  (original: 0x0800F4E6-0x0800F516 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804E490();
extern int sub_08011818();
extern undefined volatile DAT_03001ba8;
extern undefined volatile gUnknown_080725F0;


void sub_0800F4E6(int param_1)

{
  int iVar1;
  
  sub_08011818();
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x50) != 0) {
    sub_0804E490(&DAT_03001ba8,&gUnknown_080725F0,0x80);
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 != 0) {
    sub_0804E490(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 2));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

