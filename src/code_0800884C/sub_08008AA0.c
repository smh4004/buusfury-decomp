/* sub_08008AA0  (original: 0x08008AA0-0x08008AFE in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int sub_080089CC();
extern int __call_via_r1();
extern int sub_08004784();
extern int sub_08012900();
extern int sub_08012628();
extern int sub_08009670();
extern undefined4 volatile DAT_03002a64;
extern undefined4 volatile DAT_030019a4;
extern undefined4 volatile DAT_03002a68;


void sub_08008AA0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    sub_08012900(&DAT_03002a64);
  }
  else {
    sub_08012628();
  }
  uVar1 = sub_080089CC(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 2));
  sub_08009670(&DAT_030019a4,uVar1);
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 4) + 3);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    puVar4 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + uVar3 * 8);
    iVar2 = sub_08004784(*puVar4);
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)puVar4[1];
      uVar1 = __call_via_r1(puVar4,*puVar4);
      puVar4 = &DAT_03002a68 + DAT_03002a64;
      DAT_03002a64 = DAT_03002a64 + 1;
      *puVar4 = uVar1;
    }
  }
  return;
}

