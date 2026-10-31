/* sub_0802C69C  (original: 0x0802C69C-0x0802C6EC in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FACC();
extern int sub_0803D5B8();
extern undefined volatile _0804B640;
extern undefined volatile gUnknown_087B6EEC;


undefined4 * sub_0802C69C(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804B640;
    iVar1 = sub_0803FACC(3);
    iVar2 = sub_0803FACC(0x100);
    param_1[1] = (iVar1 + 1) *
                 *(int *)(&gUnknown_087B6EEC + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x16)) >> 10;
    param_1[2] = (iVar1 + 1) * *(int *)(&gUnknown_087B6EEC + ((uint)(iVar2 << 0x18) >> 0x16)) >> 10;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return param_1;
}

