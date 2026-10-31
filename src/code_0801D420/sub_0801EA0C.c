/* sub_0801EA0C  (original: 0x0801EA0C-0x0801EB40 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FFE8();
extern int sub_08014124();
extern int sub_08040160();
extern int sub_0800664E();
extern int sub_080505B0();
extern int sub_08016208();
extern int sub_08013E64();
extern int sub_08015C62();
extern undefined4 volatile gUnknown_0807012C;


void sub_0801EA0C(int param_1)

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
  uVar1 = sub_08015C62(0,param_1,0,0xffffffff,0xffffffff,0xffffffff,1,0x55,0x40,0x78,1,0);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08015C62(0,param_1,1,0xffffffff,0xffffffff,0,0xffffffff,0x56,0x82,0x78,0,1);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  sub_080505B0(0);
  sub_08040160();
  return;
}

