/* sub_080432A2  (original: 0x080432A2-0x080432C8 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804333C();
extern undefined2 volatile DAT_03004cdc;
extern undefined2 volatile DAT_03004ce0;


undefined4 sub_080432A2(undefined2 param_1,int *param_2)

{
  if (*(char *)(*param_2 + 5) != '\0' || *(char *)(*param_2 + 4) != '\0') {
    DAT_03004cdc = 6;
    sub_0804333C(0xf3,1);
    return 6;
  }
  DAT_03004ce0 = param_1;
  return 0;
}

