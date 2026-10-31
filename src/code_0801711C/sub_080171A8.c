/* sub_080171A8  (original: 0x080171A8-0x08017350 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@02000000.
 */
#include "ghidra_types.h"
extern int sub_0803FFE8();
extern int sub_08014124();
extern int sub_08013E64();
extern int sub_08016208();
extern int sub_0800664E();
extern undefined4 volatile gUnknown_0807012C;


void sub_080171A8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = sub_08013E64(0,param_1,0,0xc,0x84,0,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x1c,0x90,L"Select",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  iVar2 = sub_0803FFE8(&gUnknown_0807012C,L"Select");
  uVar1 = sub_08013E64(0,param_1,1,iVar2 + 0x1e,0x84,1,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,iVar2 + 0x2e,0x90,L"Cancel",5,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  if (2 < *(int *)(param_1 + 0x118)) {
    uVar1 = sub_08013E64(0,param_1,2,0xd4,0x28,2,0,0);
    *(undefined4 *)(param_1 + 0x124) = uVar1;
    uVar1 = sub_08013E64(0,param_1,3,0xd4,0x70,3,1,0);
    *(undefined4 *)(param_1 + 0x128) = uVar1;
    sub_0800664E(param_1,*(undefined4 *)(param_1 + 0x124));
    sub_0800664E(param_1,*(undefined4 *)(param_1 + 0x128));
  }
  uVar1 = sub_08013E64(0,param_1,6,8,8,6,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08013E64(0,param_1,7,0xd0,8,7,1,0);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0x22,0x14,L"Journal",2,0,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08014124(0,param_1,0xce,0x14,L"Inventory",2,2,&gUnknown_0807012C);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  return;
}

