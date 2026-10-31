/* sub_08011DB4  (original: 0x08011DB4-0x08011E0E in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08046DD0();
extern int sub_0803E44C();
extern int sub_08011C0C();
extern int sub_0803D5B8();
extern int sub_08011D36();
extern int sub_08011B04();
extern undefined volatile DAT_03003e5c;


void sub_08011DB4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  sub_08011C0C(param_1,10,0,param_4,param_4);
  sub_08011D36(param_1);
  uVar1 = sub_0803E44C(&DAT_03003e5c);
  *(undefined4 *)(param_1 + 0xbfc) = uVar1;
  iVar2 = sub_0803D5B8(0xe00);
  if (iVar2 != 0) {
    sub_08046DD0(iVar2,param_1,0xe00);
  }
  *(int *)(param_1 + 0xbf8) = iVar2;
  *(undefined4 *)(param_1 + 0x610) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  sub_08011B04(param_1);
  return;
}

