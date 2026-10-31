/* sub_0804344A  (original: 0x0804344A-0x0804347E in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08042B34();
extern int sub_08043558();
extern int sub_08042CE6();
extern int sub_0804389E();
extern undefined2 volatile REG_IE;
extern undefined2 volatile REG_IME;


void sub_0804344A(void)

{
  ushort uVar1;
  
  sub_08043558();
  sub_0804389E();
  sub_08042CE6(1);
  sub_0804389E();
  sub_08042B34();
  sub_0804389E();
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = uVar1 & 0xff3f;
  REG_IME = 1;
  return;
}

