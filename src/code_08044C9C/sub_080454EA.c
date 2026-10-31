/* sub_080454EA  (original: 0x080454EA-0x0804551A in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08046108();
extern int sub_08045A5E();
extern char * volatile DAT_0300525c;
extern int volatile DAT_03005260;


void sub_080454EA(void)

{
  int iVar1;
  
  iVar1 = DAT_03005260;
  if (*DAT_0300525c != -1) {
    *(char *)(DAT_03005260 + 3) = DAT_0300525c[6] | DAT_0300525c[4] | DAT_0300525c[5];
    *(undefined1 *)(iVar1 + 4) = 0;
    sub_08045A5E(0x804540b);
    sub_08046108();
  }
  return;
}

