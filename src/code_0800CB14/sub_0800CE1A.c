/* sub_0800CE1A  (original: 0x0800CE1A-0x0800CE5A in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800CB14();
extern int sub_0801124C();
extern int sub_0803D5B8();
extern int sub_0800CD00();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804E2FC;


undefined4 * sub_0800CE1A(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x60), param_1 != (undefined4 *)0x0)) {
    sub_0800CB14(param_1,*(undefined4 *)(param_2 + 0x28),0);
    *param_1 = &_0804E2FC;
    param_1[0x17] = param_2;
    uVar1 = sub_0801124C(&DAT_03001c4c,*(undefined4 *)(*(int *)(param_2 + 0x2c) + 4));
    *(undefined2 *)((int)param_1 + 0x16) = uVar1;
    sub_0800CD00(param_1);
  }
  return param_1;
}

