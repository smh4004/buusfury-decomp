/* sub_08017160  (original: 0x08017160-0x080171A8 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile DAT_0300156c;
extern undefined volatile _0804920C;
extern undefined volatile _0804B024;


void sub_08017160(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(300), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804920C;
    param_1[1] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x44] = 0;
    *param_1 = &_0804B024;
    param_1[0x48] = 0;
    param_1[0x45] = param_2;
    param_1[0x47] = 0;
    param_1[0x46] = (uint)(byte)(&DAT_0300156c)[param_2 * 0x68];
  }
  return;
}

