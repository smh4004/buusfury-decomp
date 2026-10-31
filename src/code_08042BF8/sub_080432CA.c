/* sub_080432CA  (original: 0x080432CA-0x080432FA in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804333C();


undefined4 sub_080432CA(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_3 + 4);
  if (((cVar1 != '\t') && (cVar1 != '\n')) && (cVar1 != '\v')) {
    *(bool *)(param_3 + 0xb) = param_1 != 0;
    return 0;
  }
  *(undefined2 *)(param_3 + 0x14) = 7;
  sub_0804333C(0xf3,1);
  return 7;
}

