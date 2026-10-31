/* sub_080027E0  (original: 0x080027E0-0x08002862 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0805058C();
extern int sub_0800EDF8();
extern int sub_08011DB4();
extern int sub_08050568();
extern int sub_0800938C();
extern int sub_0803D8A0();
extern int sub_0802E83C();
extern int sub_0801064C();
extern int __call_via_r2();
extern int sub_08011E0E();
extern int sub_0801713C();
extern byte volatile DAT_03001068;
extern undefined1 volatile DAT_03001574;
extern undefined4 volatile DAT_030019a4;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086B82EC;


void sub_080027E0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)0x0) {
    sub_0805058C(0);
    sub_0803D8A0();
    sub_08011DB4(&DAT_03001c4c);
    sub_0802E83C(0,piVar3);
    iVar1 = sub_0803D8A0();
    sub_08011E0E(&DAT_03001c4c);
    if (iVar1 == 2) {
      uVar2 = sub_0801713C(&gUnknown_086B82EC +
                           (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
      sub_0800EDF8(piVar3,uVar2);
      sub_0801064C(piVar3);
      __call_via_r2(piVar3,0,*(int *)(*piVar3 + 0x28) + *piVar3);
    }
    sub_0800938C(&DAT_030019a4,1);
    sub_08050568(0);
    sub_0803D8A0();
  }
  return;
}

