/* sub_08019B04  (original: 0x08019B04-0x08019B4E in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 82% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011732();
extern int sub_0801124C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804BB1C;
extern undefined volatile _08049680;


undefined4 * sub_08019B04(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  *param_1 = &_08049680;
  *(short *)((int)param_1 + 0xe) = (short)param_2;
  iVar1 = sub_0801124C(&DAT_03001c4c);
  if (iVar1 == -1) {
    sub_08011732(&DAT_03001c4c,param_2);
    iVar1 = sub_0801124C(&DAT_03001c4c,param_2);
  }
  *(short *)(param_1 + 3) = (short)iVar1;
  *param_1 = &_0804BB1C;
  param_1[5] = 0;
  param_1[7] = param_3;
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 0x10);
    *(char *)((int)param_1 + 0x11) = (char)*(undefined4 *)(param_3 + 0x1d0);
  }
  return param_1;
}

