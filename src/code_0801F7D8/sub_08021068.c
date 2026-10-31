/* sub_08021068  (original: 0x08021068-0x08021084 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03001964;


void sub_08021068(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x24), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = &DAT_03001964;
  }
  return;
}

