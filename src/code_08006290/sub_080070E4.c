/* sub_080070E4  (original: 0x080070E4-0x08007116 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int Palette_Fade();


bool sub_080070E4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x2c);
  __call_via_r1(param_1,iVar1 + *param_1,iVar1,param_4,param_4);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + param_1[2];
  Palette_Fade(0,0,0,0x100 - (iVar1 + param_1[2]));
  return 0xff < param_1[1];
}

