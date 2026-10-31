/* sub_0803F278  (original: 0x0803F278-0x0803F28E in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0803F3F4();
extern undefined4 volatile DAT_03000fb0;
extern undefined2 volatile DAT_04000102;


void sub_0803F278(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803F3F4(&DAT_03000fb0,0x400,param_3,param_4,param_4);
  DAT_04000102 = 0;
  return;
}

