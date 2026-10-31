/* sub_0804460E  (original: 0x0804460E-0x08044630 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03005264;


undefined4 sub_0804460E(char *param_1)

{
  char cVar1;
  
  *param_1 = -1;
  cVar1 = **(char **)(DAT_03005264 + 0xdc);
  if ((cVar1 != -0x4d) && (cVar1 != -0x4c)) {
    return 0x10;
  }
  *param_1 = (*(char **)(DAT_03005264 + 0xdc))[4];
  return 0;
}

