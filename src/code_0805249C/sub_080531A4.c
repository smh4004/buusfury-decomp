/* sub_080531A4  (original: 0x080531A4-0x0805324E in asm/code_0805249C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 79% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08052EE0();


void sub_080531A4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
_080531A6:
  if (param_1 < param_2) {
    puVar3 = param_1 + ((int)param_2 - (int)param_1 >> 3);
    if (param_1 != puVar3) {
      iVar1 = sub_08052EE0(puVar3,param_1);
      if (iVar1 != 0) {
        uVar2 = *param_1;
        *param_1 = *puVar3;
        *puVar3 = uVar2;
      }
      iVar1 = sub_08052EE0(param_1,param_2);
      puVar3 = param_2;
      puVar4 = param_1;
      if (iVar1 != 0) {
        uVar2 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar2;
      }
      do {
        iVar1 = sub_08052EE0(puVar3,param_1);
        while (iVar1 != 0) {
          puVar3 = puVar3 + -1;
          iVar1 = sub_08052EE0(puVar3,param_1);
        }
        do {
          puVar4 = puVar4 + 1;
          if (puVar3 <= puVar4) {
            uVar2 = *param_1;
            *param_1 = *puVar3;
            *puVar3 = uVar2;
            sub_080531A4(param_1,puVar3 + -1);
            param_1 = puVar3 + 1;
            goto _080531A6;
          }
          iVar1 = sub_08052EE0(param_1,puVar4);
        } while (iVar1 != 0);
        uVar2 = *puVar4;
        *puVar4 = *puVar3;
        *puVar3 = uVar2;
        puVar3 = puVar3 + -1;
      } while( true );
    }
    iVar1 = sub_08052EE0(param_1,param_2);
    if (iVar1 != 0) {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
  }
  return;
}

