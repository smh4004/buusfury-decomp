/* sub_08042D84  (original: 0x08042D84-0x08042D9C in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08043368();
extern int sub_0804333C();
extern int sub_080440E0();


void sub_08042D84(void)

{
  int iVar1;
  
  iVar1 = sub_080440E0();
  if (iVar1 != 0) {
    sub_0804333C(0xf1,0);
    sub_08043368();
  }
  return;
}

