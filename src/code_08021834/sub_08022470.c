/* sub_08022470  (original: 0x08022470-0x080224AE in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 93% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080222E0();
extern int sub_0803D5B8();
extern undefined volatile _0804E41C;


undefined4 * sub_08022470(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x4c), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_080222E0(param_1,param_2);
  *param_1 = &_0804E41C;
  iVar1 = *param_2;
  iVar2 = param_2[1];
  param_1[0x11] = 0;
  param_1[0xf] = iVar1 << 8;
  param_1[0x10] = iVar2 << 8;
  param_1[0x12] = 0;
  return param_1;
}

