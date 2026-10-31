/* sub_0804362E  (original: 0x0804362E-0x08043706 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08045A70();
extern int sub_080435BE();
extern uint volatile DAT_0300525c;
extern int volatile DAT_03005260;
extern undefined4 volatile DAT_03005264;
extern undefined4 volatile DAT_03005268;
extern undefined4 volatile DAT_03005278;
extern int volatile DAT_03005284;
extern int sub_08045530();


undefined4 sub_0804362E(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  short sVar6;
  undefined2 *puVar7;
  uint uVar8;
  
  if ((((param_1 << 4) >> 0x1c == 2) && (param_4 != 0)) || ((param_1 & 3) != 0)) {
    uVar2 = 2;
  }
  else {
    if (param_4 == 0) {
      uVar8 = 0x504;
    }
    else {
      uVar8 = 0xe64;
    }
    if (param_2 < uVar8) {
      uVar2 = 1;
    }
    else {
      DAT_03005260 = param_1 + 0xb4;
      DAT_03005264 = param_1 + 0xdc;
      DAT_03005268 = param_1 + 0x1bc;
      DAT_03005278 = param_1 + 0x37c;
      uVar8 = 1;
      DAT_0300525c = param_1;
      do {
        (&DAT_03005268)[uVar8] = (&DAT_03005264)[uVar8] + 0x70;
        uVar3 = uVar8 + 1 & 0xffff;
        (&DAT_03005278)[uVar8] = *(int *)(uVar8 * 4 + 0x3005274) + 0x1c;
        uVar8 = uVar3;
      } while (uVar3 < 4);
      iVar4 = DAT_03005284 + 0x1c;
      *(int *)(param_1 + 0x1b8) = iVar4;
      sub_08045A70(iVar4,param_3);
      sub_080435BE();
      uVar8 = 0;
      do {
        *(undefined4 *)((&DAT_03005268)[uVar8] + 0x68) = 0;
        *(undefined4 *)((&DAT_03005268)[uVar8] + 0x6c) = 0;
        uVar3 = uVar8 + 1 & 0xffff;
        *(undefined4 *)((&DAT_03005278)[uVar8] + 0x14) = 0;
        *(undefined4 *)((&DAT_03005278)[uVar8] + 0x18) = 0;
        uVar8 = uVar3;
      } while (uVar3 < 4);
      pcVar5 = sub_08045530;
      puVar7 = (undefined2 *)(DAT_03005264 + 8);
      sVar6 = 0x30;
      while (sVar6 != 0) {
        uVar1 = *(undefined2 *)pcVar5;
        pcVar5 = pcVar5 + 2;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
        sVar6 = sVar6 + -1;
      }
      *(int *)(DAT_03005264 + 4) = DAT_03005264 + 9;
      uVar2 = 0;
    }
  }
  return uVar2;
}

