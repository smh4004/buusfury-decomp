/* sub_0800E7F6  (original: 0x0800E7F6-0x0800E85E in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 88% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800FD74();
extern int sub_0803D5B8();
extern undefined volatile _0804C888;


undefined4 *
sub_0800E7F6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x224), param_1 != (undefined4 *)0x0)) {
    sub_0800FD74(param_1,param_2,param_3,param_4,0xffffffff);
    *param_1 = &_0804C888;
    param_1[0x74] = 1;
    param_1[0x73] = 1;
    param_1[0x72] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    param_1[0x88] = 0;
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
  }
  return param_1;
}

