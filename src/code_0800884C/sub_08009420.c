/* sub_08009420  (original: 0x08009420-0x080094B8 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 13% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800CD78();
extern int sub_0800D09E();
extern int sub_0800CE1A();
extern int sub_08011B04();
extern int sub_0801191A();
extern int sub_0800D15A();
extern undefined volatile DAT_03001c4c;


void sub_08009420(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  sub_08011B04(&DAT_03001c4c);
  if (*(int *)(param_2 + 0x24) != 0) {
    if (*(int *)(param_2 + 0x3c) == 0) {
      uVar1 = sub_0800D15A(0,param_2);
      sub_0801191A(&DAT_03001c4c,uVar1);
      iVar3 = 1;
      if (1 < *(int *)(param_2 + 0x24)) {
        do {
          uVar2 = sub_0800D09E(0,*(int *)(param_2 + 0x28) + iVar3 * 0x18,uVar1,iVar3,param_4);
          sub_0801191A(&DAT_03001c4c,uVar2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_2 + 0x24));
      }
    }
    else {
      uVar1 = sub_0800CE1A(0,param_2);
      sub_0801191A(&DAT_03001c4c,uVar1);
      iVar3 = 1;
      if (1 < *(int *)(param_2 + 0x24)) {
        do {
          uVar2 = sub_0800CD78(0,*(int *)(param_2 + 0x28) + iVar3 * 0x18,uVar1,iVar3);
          sub_0801191A(&DAT_03001c4c,uVar2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_2 + 0x24));
      }
    }
  }
  return;
}

