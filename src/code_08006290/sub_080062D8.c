/* sub_080062D8  (original: 0x080062D8-0x080064E6 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@02000000.
 */
#include "ghidra_types.h"
extern int sub_0803FFE8();
extern int sub_0800664E();
extern int sub_080060A8();
extern int sub_08014124();
extern int sub_08013E64();
extern int sub_08006880();
extern int sub_08016208();
extern undefined4 volatile gUnknown_0807012C;


void sub_080062D8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x1c,0x90,L"Select",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  iVar2 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  uVar1 = sub_08013E64(0,param_1,1,iVar2 + 0x1e,0x84,1,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,iVar2 + 0x2e,0x90,L"Cancel",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = param_1 + 0x114;
  }
  uVar1 = sub_08006880(0,param_1,0,iVar2,0,0x6d,0x21,0xdd);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08006880(0,param_1,1,iVar2,1,0x6d,0x33,0xdd);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08006880(0,param_1,2,iVar2,2,0x6d,0x45,0xdd);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_080060A8(0,param_1,0,3,1,0xffffffff,0xffffffff,0x10,0x10,0x28,0xffffffff,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_080060A8(0,param_1,1,0,2,0xffffffff,0xffffffff,0x11,0x10,0x3a,0xffffffff,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_080060A8(0,param_1,2,1,3,0xffffffff,0xffffffff,0x12,0x10,0x4c,0xffffffff,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_080060A8(0,param_1,3,2,0,0xffffffff,0xffffffff,0x14,0x78,0x70,0xffffffff,1);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  return;
}

