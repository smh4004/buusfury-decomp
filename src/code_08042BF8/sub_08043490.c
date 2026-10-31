/* sub_08043490  (original: 0x08043490-0x080434CC in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049144();


undefined4 sub_08043490(char *param_1,int param_2)

{
  if ((*param_1 == '\0') && ((uint)(byte)param_1[1] == (uint)(byte)param_1[2])) {
    return 1;
  }
  sub_08049144((int)(param_1 + (uint)(byte)param_1[2] * 0x18 + 4),param_2,0x18);
  param_1[3] = param_1[3] + '\x01';
  param_1[2] = param_1[2] + 1U & 3;
  *param_1 = '\0';
  return 0;
}

