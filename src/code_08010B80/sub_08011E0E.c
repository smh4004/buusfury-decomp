/* sub_08011E0E  (original: 0x08011E0E-0x08011E80 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 67% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E4A0();
extern int sub_08046DD0();
extern int sub_0803D63C();
extern int sub_08011C0C();
extern int sub_08011B04();
extern undefined volatile DAT_03003e5c;


void sub_08011E0E(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar3 = (int *)(param_1 + 0x610);
  iVar1 = 0;
  if (0 < *piVar3) {
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0xbf8) + 0x610);
      iVar5 = piVar3[iVar1 + 1];
      iVar4 = *piVar2;
      iVar1 = iVar1 + 1;
      *piVar2 = iVar4 + 1;
      piVar2[iVar4 + 1] = iVar5;
    } while (iVar1 < *piVar3);
  }
  *piVar3 = 0;
  sub_08011B04(param_1);
  uVar6 = *(undefined4 *)(param_1 + 0xbf8);
  sub_08046DD0(param_1,uVar6,0xe00);
  sub_0803D63C(uVar6);
  sub_0803E4A0(&DAT_03003e5c,*(undefined4 *)(param_1 + 0xbfc));
  sub_08011C0C(param_1,0xb,0);
  return;
}

