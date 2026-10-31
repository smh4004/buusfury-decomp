/* sub_08044642  (original: 0x08044642-0x08044668 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045D46();
extern int sub_08045A5E();
extern int sub_08046124();
extern int sub_080437C2();


void sub_08044642(void)

{
  int iVar1;
  
  iVar1 = sub_08045D46(1);
  if (iVar1 == 1) {
    sub_08045A5E(0x80437c3);
    sub_08046124();
  }
  else {
    sub_080437C2(0x27,0);
  }
  return;
}

