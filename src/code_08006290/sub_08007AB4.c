/* sub_08007AB4  (original: 0x08007AB4-0x08007B26 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_0600e000;


void sub_08007AB4(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int a2;
  uint uVar4;
  
  iVar2 = (param_2 << 0x17) >> 0x1f;
  uVar4 = param_2 >> 3 & 0x1e;
  bVar1 = *(byte *)(param_1 + 4);
  iVar3 = 0;
  a2 = uVar4 * 2;
  do {
    sub_08049138((int)(&DAT_0600e000 + a2 + iVar3 * 0x40 + (uint)bVar1 * 0x800),
                 iVar2 * -0x800 + param_1 + iVar3 * 0x40 + a2 + 8,(0x20 - uVar4) * 2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  if (uVar4 != 0) {
    iVar3 = 0;
    do {
      sub_08049138((int)(&DAT_0600e000 + iVar3 * 0x40 + (uint)bVar1 * 0x800),
                   (-iVar2 ^ 1U) * 0x800 + param_1 + iVar3 * 0x40 + 8,a2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
  }
  return;
}

