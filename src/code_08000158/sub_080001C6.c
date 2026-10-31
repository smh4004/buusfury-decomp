/* sub_080001C6  (original: 0x080001C6-0x08000206 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 48% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08011C70();
extern int sub_08000158();
extern int volatile DAT_03001c34;
extern int volatile DAT_03001bac;
extern undefined volatile DAT_03001c4c;


int sub_080001C6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 < 0) {
    iVar1 = sub_08011C70(&DAT_03001c4c,7,-(param_1 + 1));
    return iVar1;
  }
  if (param_1 == 0) {
    if (DAT_03001c34 != 0) {
      return DAT_03001c34;
    }
  }
  else if (param_1 == 9) {
    return DAT_03001bac;
  }
  uVar2 = sub_08000158();
  iVar1 = sub_08011C70(&DAT_03001c4c,5,uVar2);
  return iVar1;
}

