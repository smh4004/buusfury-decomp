/* sub_080099B6  (original: 0x080099B6-0x08009A2A in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08047018();
extern int sub_08046DD0();
extern int sub_0803D5B8();
extern int volatile DAT_030019a0;


void sub_080099B6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_0803D5B8(0xc4);
  if (iVar1 != 0) {
    sub_08046DD0(iVar1,param_1,0x5c);
    sub_08047018(iVar1 + 0x5c,param_1 + 0x5c,param_1 + 0x8c,0xc,0x8050771);
    *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
    sub_08046DD0(iVar1 + 0x90,param_1 + 0x90,0x34);
  }
  DAT_030019a0 = iVar1;
  uVar2 = sub_0803D5B8(0x2000);
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  uVar2 = sub_0803D5B8(0x2000);
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  uVar2 = sub_0803D5B8(0x2000);
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}

