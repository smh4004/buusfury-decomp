/* sub_0800B854  (original: 0x0800B854-0x0800B8B2 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 81% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011732();
extern int sub_0801124C();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049FEC;
extern undefined volatile _08049680;


undefined4 * sub_0800B854(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = &_08049680;
  *(undefined2 *)((int)param_1 + 0xe) = 0x500;
  iVar1 = sub_0801124C(&DAT_03001c4c,0x500);
  if (iVar1 == -1) {
    sub_08011732(&DAT_03001c4c,0x500);
    iVar1 = sub_0801124C(&DAT_03001c4c,0x500);
  }
  *(short *)(param_1 + 3) = (short)iVar1;
  *param_1 = &_08049FEC;
  *(undefined1 *)(param_1 + 2) = 0x10;
  param_1[1] = 0;
  param_1[10] = 8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 7) = 0xff;
  return param_1;
}

