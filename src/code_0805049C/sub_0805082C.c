/* sub_0805082C  (original: 0x0805082C-0x08050868 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804AE84;
extern undefined volatile _0804D0A4;


void sub_0805082C(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x28), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804AE84;
    param_1[1] = 0;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_1 = &_0804D0A4;
    param_1[8] = 0;
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[2] = param_4;
    *(undefined1 *)(param_1 + 9) = param_3;
  }
  return;
}

