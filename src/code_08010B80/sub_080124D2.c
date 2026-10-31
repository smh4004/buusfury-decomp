/* sub_080124D2  (original: 0x080124D2-0x080124F8 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 5/5 snapshots, 88% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int sub_08011C0C();
extern int volatile DAT_03002a5c;
extern undefined volatile DAT_03001c4c;


void sub_080124D2(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_03002a5c = DAT_03002a5c + -1;
  sub_08011C0C(&DAT_03001c4c,0x10,0,param_4,param_4);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

