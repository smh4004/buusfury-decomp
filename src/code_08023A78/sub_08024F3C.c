/* sub_08024F3C  (original: 0x08024F3C-0x08025004 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08024A7C();
extern int sub_0803D5B8();
extern undefined1 volatile DAT_0300112d;
extern undefined volatile gUnknown_0874D380;
extern undefined volatile _0804A950;


undefined4 * sub_08024F3C(undefined4 *param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xb20), param_1 != (undefined4 *)0x0)) {
    sub_08024A7C(param_1);
    *param_1 = &_0804A950;
    uVar2 = 0;
    piVar3 = param_1 + 4;
    piVar4 = param_1 + 0xed;
    param_1[4] = 0;
    *piVar4 = 0;
    do {
      if (((uint)(byte)(&DAT_0300112d)[(int)uVar2 >> 3] & 1 << (uVar2 & 7)) != 0) {
        iVar6 = *piVar3;
        *piVar3 = iVar6 + 1;
        piVar3[iVar6 + 1] = uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0xe8);
    sVar5 = 0;
    iVar6 = 0;
    if (0 < (int)param_1[4]) {
      do {
        sVar1 = *(short *)(&gUnknown_0874D380 + piVar3[iVar6 + 1] * 0x10);
        if (sVar5 == sVar1) {
          piVar4[*piVar4 * 2] = iVar6;
        }
        else {
          iVar7 = *piVar4;
          *piVar4 = iVar7 + 1;
          piVar4[iVar7 * 2 + 1] = iVar6;
          piVar4[iVar7 * 2 + 2] = iVar6;
          sVar5 = sVar1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_1[4]);
    }
    param_1[0x2be] = 0;
    param_1[0x2c3] = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    param_1[0x2c4] = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    if (*piVar4 == 0) {
      param_1[0x2c5] = 0xffffffff;
    }
    else {
      param_1[0x2c5] = param_1[0xee];
    }
  }
  return param_1;
}

