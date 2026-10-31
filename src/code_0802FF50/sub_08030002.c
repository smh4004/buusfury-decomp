/* sub_08030002  (original: 0x08030002-0x08030018 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801191A();
extern int sub_0803018C();
extern undefined volatile DAT_03001c4c;


void sub_08030002(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_0803018C(0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}

