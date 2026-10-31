/* Text_LoadString  (original: 0x08012230-0x0801227E in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049144();
extern int Wfz_LoadContainer();
extern int sub_0803D63C();
extern int sub_0803D5B8();
extern undefined * volatile gTextBankTable;


int Text_LoadString(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_0803D5B8(0x10000);
  Wfz_LoadContainer(*(undefined4 *)
                     ((int)&gTextBankTable + ((uint)(*(int *)(param_2 + 4) << 0x1a) >> 0x18)),iVar1)
  ;
  sub_08049144(param_1 + 8,((*(uint *)(param_2 + 4) << 0xb) >> 0x11) * 2 + iVar1,
               (*(uint *)(param_2 + 4) >> 0x15) << 1);
  *(undefined2 *)((*(uint *)(param_2 + 4) >> 0x15) * 2 + param_1 + 8) = 0;
  sub_0803D63C(iVar1);
  return param_1 + 8;
}

