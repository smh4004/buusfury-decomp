/* sub_0803D4A0  (original: 0x0803D4A0-0x0803D4D0 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 63% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803FA0C();
extern int sub_0804023C();
extern undefined2 volatile REG_KEYINPUT;


void sub_0803D4A0(int param_1)

{
  ushort uVar1;
  
  uVar1 = REG_KEYINPUT;
  sub_0804023C(param_1,~(uint)uVar1);
  if ((((~*(ushort *)(param_1 + 2) & 0xf) == 0) && (*(char *)(param_1 + 1) != '\0')) &&
     ((*(ushort *)(param_1 + 4) & 0xf) != 0)) {
    sub_0803FA0C();
  }
  return;
}

