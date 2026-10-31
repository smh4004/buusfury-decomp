/* sub_08016208  (original: 0x08016208-0x08016240 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 96% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int Wfz_LoadContainer();
extern undefined volatile gUnknown_086B7E8C;
extern undefined volatile _08049898;


undefined4 * sub_08016208(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049898;
    param_1[1] = param_2;
    param_1[2] = 0;
    uVar1 = sub_0803D5B8(0x100);
    param_1[3] = uVar1;
    Wfz_LoadContainer(&gUnknown_086B7E8C,uVar1);
  }
  return param_1;
}

