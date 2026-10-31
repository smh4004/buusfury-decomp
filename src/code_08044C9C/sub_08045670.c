/* sub_08045670  (original: 0x08045670-0x080456E0 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern char * volatile DAT_0300525c;
extern int volatile DAT_03005260;


void sub_08045670(uint param_1,short *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  
  if (*DAT_0300525c == '\x01') {
    bVar3 = 3;
    pbVar2 = (byte *)(DAT_0300525c + 0xf);
  }
  else {
    bVar3 = 2;
    pbVar2 = (byte *)(DAT_0300525c + param_1 + 0x10);
  }
  bVar1 = (byte)(1 << (param_1 & 0xff));
  if (*param_2 == 0) {
    if (*pbVar2 < bVar3) {
      *param_2 = 0x49;
      param_2[0xc] = 0x702;
      *(byte *)(DAT_03005260 + 4) = bVar1 | *(byte *)(DAT_03005260 + 4);
    }
    else {
      param_2[0xc] = 0;
      *pbVar2 = *pbVar2 - bVar3;
      *(int *)(param_2 + 2) = (int)param_2 + 0x2d;
      param_2[10] = 7;
      param_2[0xb] = 0;
      *(undefined1 *)((int)param_2 + 0x1f) = 1;
      param_2[0x17] = 0;
      *(byte *)(param_2 + 0xd) = bVar1;
      *param_2 = -0x7fbf;
      DAT_0300525c[5] = bVar1 | DAT_0300525c[5];
    }
  }
  return;
}

