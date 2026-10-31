/* sub_08043FE4  (original: 0x08043FE4-0x0804400C in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08046064();
extern int sub_08045A5E();
extern int volatile DAT_03005264;
extern int volatile DAT_03005260;


void sub_08043FE4(void)

{
  uint uVar1;
  
  sub_08045A5E(0x8043ed5);
  sub_08046064();
  uVar1 = (uint)*(byte *)(*(int *)(DAT_03005264 + 0xdc) + 6);
  if (uVar1 < 4) {
    *(undefined1 *)(uVar1 + DAT_03005260 + 10) = 0;
  }
  return;
}

