/* sub_08024120  (original: 0x08024120-0x0802426E in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08014124();
extern int sub_0803DA10();
extern int sub_0804912C();
extern int sub_08013E64();
extern int sub_0800664E();
extern undefined4 volatile gUnknown_0807012C;
extern undefined volatile DAT_0600f800;
extern undefined2 volatile REG_DISPCNT;
extern undefined2 volatile REG_BG0CNT;


void sub_08024120(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(undefined4 *)((char *)__frame + 0x0))
#define local_20 (*(undefined4 *)((char *)__frame + 0x4))
#define local_1c (*(undefined4 * *)((char *)__frame + 0x8))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0xc))
  local_1c = (undefined4 *)0x0;
  local_24 = 1;
  local_20 = 1;
  uVar3 = sub_08013E64(0,param_1,1,0xc,0x1c);
  sub_0800664E(param_1,uVar3);
  local_20 = 0;
  local_1c = &gUnknown_0807012C;
  local_24 = 5;
  uVar3 = sub_08014124(0,param_1,0x1c,0x28,L"Cancel");
  sub_0800664E(param_1,uVar3);
  cVar1 = *(char *)(param_1 + 0x114);
  if (cVar1 == '\0') {
    local_20 = 0;
    local_1c = &gUnknown_0807012C;
    local_24 = 5;
    uVar3 = sub_08014124(0,param_1,0x10,0x10,L"Waiting for a friend...");
    sub_0800664E(param_1,uVar3);
  }
  else if (cVar1 == '\x01') {
    local_20 = 0;
    local_1c = &gUnknown_0807012C;
    local_24 = 5;
    uVar3 = sub_08014124(0,param_1,0x10,0x10,L"Please select a saved game");
    sub_0800664E(param_1,uVar3);
  }
  else if (cVar1 == '\x02') {
    local_20 = 0;
    local_1c = &gUnknown_0807012C;
    local_24 = 5;
    uVar3 = sub_08014124(0,param_1,0x10,0x10,L"No Saved Games");
    sub_0800664E(param_1,uVar3);
  }
  else if (cVar1 == '\x03') {
    local_20 = 0;
    local_1c = &gUnknown_0807012C;
    local_24 = 5;
    uVar3 = sub_08014124(0,param_1,0x10,0x10,L"Disconnected");
    sub_0800664E(param_1,uVar3);
  }
  sub_0804912C(0x600f800,0,0x800);
  sub_0804912C(0x6009640,0,0x1dc0);
  local_24 = 7;
  local_20 = 8;
  local_1c = (undefined4 *)0x18;
  uStack_18 = 0xf;
  sub_0803DA10(&local_24,&DAT_0600f800,0x259);
  REG_BG0CNT = 0x1f80;
  uVar2 = REG_DISPCNT;
  REG_DISPCNT = uVar2 | 0x100;
  return;
}

