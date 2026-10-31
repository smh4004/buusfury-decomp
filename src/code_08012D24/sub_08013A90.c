/* sub_08013A90  (original: 0x08013A90-0x08013ABA in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_08013A90(int param_1,undefined1 param_2)

{
  int iVar1;
  
  *(undefined1 *)((uint)*(byte *)(param_1 + 0xc) + param_1 + 0xd) = param_2;
  iVar1 = (uint)*(byte *)(param_1 + 0xc) * 2 + param_1;
  do {
    *(char *)(iVar1 + 0x2e) = '\0';
  } while (*(char *)(iVar1 + 0x2e) != '\0');
  do {
    *(undefined1 *)(iVar1 + 0x2f) = 0;
  } while (*(char *)(iVar1 + 0x2f) != '\0');
  *(char *)(param_1 + 0xc) = *(char *)(param_1 + 0xc) + '\x01';
  return;
}

