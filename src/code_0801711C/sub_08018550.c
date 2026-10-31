/* sub_08018550  (original: 0x08018550-0x080185B8 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011732();
extern int sub_0803D5B8();
extern int sub_080184C0();
extern int sub_0801124C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049680;
extern undefined volatile _0804C534;


undefined4 *
sub_08018550(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x24), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049680;
    *(short *)((int)param_1 + 0xe) = (short)param_2;
    iVar1 = sub_0801124C(&DAT_03001c4c,param_2);
    if (iVar1 == -1) {
      sub_08011732(&DAT_03001c4c,param_2);
      iVar1 = sub_0801124C(&DAT_03001c4c,param_2);
    }
    *(short *)(param_1 + 3) = (short)iVar1;
    *param_1 = &_0804C534;
    param_1[4] = 0;
    uVar2 = param_3[1];
    param_1[5] = *param_3;
    param_1[6] = uVar2;
    sub_080184C0(param_1,*param_4,param_4[1]);
    param_1[1] = param_3[1];
  }
  return param_1;
}

