/* sub_0804E550  (original: 0x0804E550-0x0804E56A in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08000158();
extern int sub_0800EECC();


void sub_0804E550(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_08000158(0x31);
  if (*(int *)(param_2 + 0x38) != *(int *)(iVar1 + 4)) {
    sub_0800EECC(param_2);
  }
  return;
}

