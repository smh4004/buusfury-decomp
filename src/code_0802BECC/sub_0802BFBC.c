/* sub_0802BFBC  (original: 0x0802BFBC-0x0802BFEC in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0802BECC();
extern int sub_08011732();
extern int sub_0803FFE8();
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUIStringPtrs;
extern undefined volatile gUnknown_087548DC;


void sub_0802BFBC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = *(undefined4 *)(&gUIStringPtrs + param_1 * 4);
  iVar1 = sub_0803FFE8(&gUnknown_087548DC,uVar2,param_3,param_4,param_4);
  uVar3 = iVar1 + 0x21U & 0xffffffe0;
  sub_08011732(&DAT_03001c4c,uVar3 << 5);
  sub_0802BECC(0,uVar3,uVar2,param_2);
  return;
}

