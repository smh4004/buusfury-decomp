/* sub_080378E0  (original: 0x080378E0-0x080378F4 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019BF4();


undefined4 sub_080378E0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x40) == '\x02') {
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08019BF4();
  }
  return uVar1;
}

