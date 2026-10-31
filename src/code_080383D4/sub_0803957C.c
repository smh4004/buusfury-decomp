/* sub_0803957C  (original: 0x0803957C-0x0803966C in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800664E();
extern int sub_08014124();
extern int sub_0803FFE8();
extern int sub_0803DA10();
extern int sub_0804912C();
extern int sub_08013E64();
extern undefined4 volatile gUnknown_0807012C;
extern undefined volatile DAT_0600f800;
extern undefined2 volatile REG_DISPCNT;
extern undefined2 volatile REG_BG0CNT;


void sub_0803957C(undefined4 param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(undefined4 *)((char *)__frame + 0x0))
#define local_20 (*(undefined4 *)((char *)__frame + 0x4))
#define local_1c (*(undefined4 * *)((char *)__frame + 0x8))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0xc))
  local_1c = (undefined4 *)0x0;
  local_20 = 1;
  local_24 = 0;
  uVar2 = sub_08013E64(0,param_1,0,0xc,0x3c);
  sub_0800664E(param_1,uVar2);
  local_20 = 0;
  local_1c = &gUnknown_0807012C;
  local_24 = 5;
  uVar2 = sub_08014124(0,param_1,0x1c,0x48,L"Delete");
  sub_0800664E(param_1,uVar2);
  iVar3 = sub_0803FFE8(&gUnknown_0807012C,L"Delete");
  local_1c = (undefined4 *)0x0;
  local_24 = 1;
  local_20 = 1;
  uVar2 = sub_08013E64(0,param_1,1,iVar3 + 0x1e,0x3c);
  sub_0800664E(param_1,uVar2);
  local_20 = 0;
  local_1c = &gUnknown_0807012C;
  local_24 = 5;
  uVar2 = sub_08014124(0,param_1,iVar3 + 0x2e,0x48,L"Cancel");
  sub_0800664E(param_1,uVar2);
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0x3700);
  local_24 = 5;
  local_20 = 5;
  local_1c = (undefined4 *)0x19;
  uStack_18 = 0x10;
  sub_0803DA10(&local_24,&DAT_0600f800,0x259);
  REG_BG0CNT = 0x1f80;
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 | 0x100;
  return;
}

