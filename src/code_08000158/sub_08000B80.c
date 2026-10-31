/* sub_08000B80  (original: 0x08000B80-0x08000BB2 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined1 volatile DAT_0300106a;


void sub_08000B80(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  iVar1 = param_1[iVar1 + -1];
  if ((int)((uint)(byte)(&DAT_0300106a)[iVar1] + iVar2) < 0x100) {
    (&DAT_0300106a)[iVar1] = (char)((uint)(byte)(&DAT_0300106a)[iVar1] + iVar2);
    return;
  }
  (&DAT_0300106a)[iVar1] = 0xff;
  return;
}

