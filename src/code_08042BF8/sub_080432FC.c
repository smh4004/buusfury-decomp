/* sub_080432FC  (original: 0x080432FC-0x0804333C in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080432FC(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  if (*(char *)(param_1 + 7) == '\0') {
    return;
  }
  uVar2 = 0x28;
  switch(*(undefined1 *)(param_1 + 4)) {
  case 5:
    *(undefined1 *)(param_1 + 7) = 3;
    uVar1 = 9;
    break;
  case 6:
    *(undefined1 *)(param_1 + 7) = 2;
    uVar2 = 1;
  case 9:
  case 10:
    *(undefined2 *)(param_1 + 0x1a) = uVar2;
    return;
  case 7:
  case 8:
    *(undefined1 *)(param_1 + 7) = 2;
    return;
  case 0xb:
    *(undefined2 *)(param_1 + 0x1a) = 0x28;
    uVar1 = 10;
    break;
  default:
    return;
  }
  *(undefined1 *)(param_1 + 4) = uVar1;
  return;
}

