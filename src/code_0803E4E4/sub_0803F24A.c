/* sub_0803F24A  (original: 0x0803F24A-0x0803F26A in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803F3F4();
extern undefined2 volatile REG_SOUNDCNT_X;
extern undefined2 volatile DAT_040000d2;
extern undefined2 volatile DAT_04000102;
extern undefined4 volatile DAT_03000fb0;
extern undefined2 volatile DAT_040000c6;


void sub_0803F24A(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803F3F4(&DAT_03000fb0,0x400,param_3,param_4,param_4);
  DAT_04000102 = 0;
  DAT_040000c6 = 0;
  DAT_040000d2 = 0;
  REG_SOUNDCNT_X = 0;
  return;
}

