/* sub_0802A8AA  (original: 0x0802A8AA-0x0802A904 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_0802A8AA(int param_1)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x38) = uVar3;
  if (uVar3 >> 0x10 != 0) {
    pcVar2 = (char *)(*(int *)(param_1 + 0x34) + ((int)uVar3 >> 0x10) * 0xc);
    *(char **)(param_1 + 0x34) = pcVar2;
    iVar4 = *(int *)(param_1 + 0x3c) - ((int)uVar3 >> 0x10);
    *(int *)(param_1 + 0x3c) = iVar4;
    if (iVar4 < 1) {
      sub_08011944(&DAT_03001c4c,param_1);
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10) - (int)*pcVar2;
    *(int *)(param_1 + 0x20) = iVar4;
    iVar5 = *(int *)(param_1 + 0x14) - (int)pcVar2[1];
    *(int *)(param_1 + 0x24) = iVar5;
    bVar1 = pcVar2[2];
    *(uint *)(param_1 + 0x2c) = iVar5 + (uint)(byte)pcVar2[3];
    *(uint *)(param_1 + 0x28) = iVar4 + (uint)bVar1;
  }
  *(uint *)(param_1 + 0x38) = uVar3 & 0xffff;
  return;
}

