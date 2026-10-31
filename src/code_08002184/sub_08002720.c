/* sub_08002720  (original: 0x08002720-0x080027C2 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0805058C();
extern int sub_08011DB4();
extern int sub_0803D8A0();
extern int sub_0803D5B8();
extern int sub_08005460();
extern int volatile DAT_03001c34;
extern undefined4 volatile DAT_03001910;
extern undefined4 volatile DAT_030019a4;
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049504;


void sub_08002720(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = param_1[iVar1];
  if (DAT_03001c34 != 0) {
    iVar4 = *(int *)(DAT_03001c34 + 0x1a0);
    iVar2 = *(int *)(DAT_03001c34 + 0x1a4);
    sub_0805058C(0);
    sub_0803D8A0();
    sub_08011DB4(&DAT_03001c4c);
    puVar3 = (undefined4 *)sub_0803D5B8(0x304);
    if (puVar3 != (undefined4 *)0x0) {
      sub_08005460(puVar3,7,0xd,0);
      *puVar3 = &_08049504;
      puVar3[0xbf] = iVar4 >> 8;
      puVar3[0xc0] = iVar2 >> 8;
      puVar3[0x43] = DAT_03001910;
      puVar3[0xbe] = (uint)(iVar1 != 0);
    }
    iVar1 = sub_0803D8A0(puVar3);
    iVar2 = *param_1;
    *param_1 = iVar2 + 1;
    param_1[iVar2 + 1] = iVar1 + -1;
    sub_08011E0E(&DAT_03001c4c);
    sub_0800938C(&DAT_030019a4,1);
    sub_08050568(0);
    sub_0803D8A0();
  }
  return;
}

