/* sub_0803F95C  (original: 0x0803F95C-0x0803F974 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_0803F95C(int param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  pcVar1 = *(char **)(param_1 + 0x24);
  do {
    if (*pcVar1 == '\0') {
      *pcVar1 = param_2;
    }
    pcVar1 = pcVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

