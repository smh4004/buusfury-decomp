/* sub_08030950  (original: 0x08030950-0x08030980 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FFE8();
extern int sub_08011732();
extern int sub_08030860();
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile gUnknown_0806EE6C;
extern undefined volatile gUIStringPtrs;


void sub_08030950(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = *(undefined4 *)(&gUIStringPtrs + param_1 * 4);
  iVar1 = sub_0803FFE8(&gUnknown_0806EE6C,uVar2,param_3,param_4,param_4);
  uVar3 = iVar1 + 0x21U & 0xffffffe0;
  sub_08011732(&DAT_03001c4c,uVar3 << 4);
  sub_08030860(0,uVar3,uVar2,param_2);
  return;
}

