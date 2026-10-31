/* sub_08007574  (original: 0x08007574-0x080075AC in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_08009AEC();
extern undefined volatile _0804A09C;
extern undefined volatile gUnknown_080707D8;


undefined4 * sub_08007574(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x18), param_1 != (undefined4 *)0x0)) {
    sub_08009AEC(param_1,param_2);
    *param_1 = &_0804A09C;
    param_1[5] = param_2;
    uVar1 = *(byte *)(param_2 + 0x10) & 0xf;
    *(char *)(param_1 + 4) = (char)uVar1;
    *(undefined *)((int)param_1 + 0x11) = (&gUnknown_080707D8)[uVar1];
  }
  return param_1;
}

