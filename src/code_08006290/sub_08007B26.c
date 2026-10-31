/* sub_08007B26  (original: 0x08007B26-0x08007B54 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08007AB4();
extern undefined2 volatile REG_BG0VOFS;
extern undefined2 volatile REG_BG0HOFS;


void sub_08007B26(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (*(int *)(param_2 + 0xc) << 3) >> 10;
  bVar1 = *(byte *)(param_1 + 4);
  (&REG_BG0HOFS)[(uint)bVar1 * 2] = (short)iVar2;
  (&REG_BG0VOFS)[(uint)bVar1 * 2] = 0;
  sub_08007AB4(param_1,iVar2);
  return;
}

