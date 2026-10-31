/* sub_08044554  (original: 0x08044554-0x08044592 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08046222();
extern int sub_08045A5E();
extern int volatile DAT_03005260;
extern int volatile DAT_0300525c;


void sub_08044554(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  *(char *)(DAT_03005260 + 5) = (char)param_1;
  do {
    if ((1 << uVar1 & param_1) != 0) break;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  sub_08045A5E(0x80437c3);
  sub_08046222(*(undefined2 *)(uVar1 * 0x20 + DAT_0300525c + 0x14),
               *(undefined2 *)(DAT_0300525c + 0x94),param_1);
  return;
}

