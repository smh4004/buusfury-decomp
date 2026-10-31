/* sub_080206A0  (original: 0x080206A0-0x080206B6 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


void sub_080206A0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_2 + 4);
  __call_via_r3(*(int **)(param_2 + 4),*(undefined1 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                *(int *)(iVar1 + 0x30) + iVar1);
  return;
}

