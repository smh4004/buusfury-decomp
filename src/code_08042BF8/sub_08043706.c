/* sub_08043706  (original: 0x08043706-0x08043774 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080433E0();
extern char * volatile DAT_0300525c;


void sub_08043706(uint param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(uint *)((char *)__frame + 0x0))
  pcVar3 = DAT_0300525c;
  uVar4 = 1 << (param_1 & 0xff);
  uVar5 = uVar4 & 0xff;
  pbVar1 = (byte *)(DAT_0300525c + 2);
  if (((*pbVar1 & uVar5) != 0) && (DAT_0300525c[1] != '\0')) {
    DAT_0300525c[1] = DAT_0300525c[1] + -1;
  }
  uVar5 = (uint)*pbVar1 & ~uVar5;
  pcVar3[2] = (char)uVar5;
  bVar2 = (byte)uVar4;
  pcVar3[3] = pcVar3[3] | bVar2;
  if ((*pcVar3 == '\0') && (uVar5 == 0)) {
    *pcVar3 = -1;
  }
  if (param_2 != 0) {
    local_18 = param_4 & 0xffff0000;
    sub_080433E0(&local_18,pcVar3 + param_1 * 0x20 + 0x14,0x1000010);
    pcVar3 = DAT_0300525c;
    DAT_0300525c[3] = DAT_0300525c[3] & ~bVar2;
    pcVar3[7] = pcVar3[7] & ~bVar2;
    pcVar3[param_1 + 10] = '\0';
  }
  return;
}

