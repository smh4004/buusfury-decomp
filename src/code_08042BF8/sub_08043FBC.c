/* sub_08043FBC  (original: 0x08043FBC-0x08043FE4 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03005264;


undefined4 sub_08043FBC(char *param_1,char *param_2)

{
  char *pcVar1;
  
  *param_1 = -1;
  pcVar1 = *(char **)(DAT_03005264 + 0xdc);
  if ((*pcVar1 != -0x60) && (*pcVar1 != -0x5f)) {
    return 0x10;
  }
  *param_2 = pcVar1[6];
  *param_1 = pcVar1[7];
  return 0;
}

