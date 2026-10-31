/* sub_080071C4  (original: 0x080071C4-0x080071F8 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_08009AEC();
extern undefined volatile gUnknown_080707BC;
extern undefined volatile _08049BC4;


undefined4 * sub_080071C4(undefined4 *param_1,int param_2)

{
  byte bVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_08049BC4;
    param_1[5] = param_2;
    bVar1 = *(byte *)(param_2 + 0x10);
    *(byte *)(param_1 + 4) = bVar1;
    *(undefined *)((int)param_1 + 0x11) = (&gUnknown_080707BC)[bVar1];
  }
  return param_1;
}

