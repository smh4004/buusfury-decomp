/* sub_080099A4  (original: 0x080099A4-0x080099B6 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080092EA();
extern undefined4 volatile DAT_03001990;


void sub_080099A4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  sub_080092EA(&DAT_03001990,param_2,param_3 >> 4,param_1 + 0xb4,param_4);
  return;
}

