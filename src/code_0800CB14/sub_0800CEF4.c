/* sub_0800CEF4  (original: 0x0800CEF4-0x0800CF42 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 89% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804CDAC;
extern undefined volatile _0804E454;


void sub_0800CEF4(undefined4 *param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x34), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804E454;
    param_1[3] = 0;
    *param_1 = &_0804CDAC;
    param_1[8] = param_2;
    param_1[4] = param_1;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    param_1[9] = *param_2;
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
    param_1[0xc] = param_2[3];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1[8] + 0x16);
    param_1[1] = param_2[3];
    param_1[7] = (uint)(*(char *)(param_1[8] + 0x17) != '\0');
    *(undefined2 *)(param_1 + 5) = param_3;
    param_1[6] = 0;
  }
  return;
}

