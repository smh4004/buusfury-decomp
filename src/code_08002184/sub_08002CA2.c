/* sub_08002CA2  (original: 0x08002CA2-0x08002D3E in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08000158();
extern int sub_0801712C();
extern int __call_via_r2();
extern int sub_0800EDF8();
extern int sub_08013DD6();
extern int sub_08010DAA();
extern int sub_0801711C();
extern int * volatile DAT_03001c34;
extern byte volatile DAT_03001068;
extern undefined1 volatile DAT_03001560;
extern undefined1 volatile DAT_03001574;
extern undefined volatile gUnknown_086B82EC;


void sub_08002CA2(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar5 = param_1[iVar2];
  *param_1 = iVar2 + -2;
  uVar4 = param_1[iVar2 + -1];
  piVar3 = (int *)0x0;
  if (DAT_03001068 == uVar4) {
    sub_0801712C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18)
    ;
    piVar3 = DAT_03001c34;
  }
  sub_08013DD6(&DAT_03001560 + uVar4 * 0x68,iVar5);
  if (piVar3 != (int *)0x0) {
    uVar1 = sub_08000158(iVar5);
    sub_0800EDF8(piVar3,uVar1);
    __call_via_r2(piVar3,0,*(int *)(*piVar3 + 0x28) + *piVar3);
    sub_08010DAA();
    sub_0801711C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18)
    ;
  }
  return;
}

