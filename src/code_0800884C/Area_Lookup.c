/* Area_Lookup  (original: 0x080089FC-0x08008A36 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 74% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080125E0();
extern int sub_0803DF14();
extern undefined1 volatile gAreaTable;
extern int sub_08008A5C();


byte * Area_Lookup(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar1 = sub_080125E0();
  iVar3 = 0;
  pbVar2 = &gAreaTable;
  if (0 < iVar1) {
    do {
      if ((*pbVar2 == param_1) && (pbVar2[1] == param_2)) {
        return pbVar2;
      }
      pbVar2 = pbVar2 + 0x38;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  sub_0803DF14(0x8008a74,sub_08008A5C,0x3a,0,param_4);
  return (byte *)0x0;
}

