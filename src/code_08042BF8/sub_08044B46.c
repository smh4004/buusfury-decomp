/* sub_08044B46  (original: 0x08044B46-0x08044BB2 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern char * volatile DAT_0300525c;
extern undefined4 volatile DAT_03005278;
extern undefined2 volatile REG_IME;


undefined4 sub_08044B46(uint param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  short *psVar4;
  char *pcVar5;
  
  if (param_1 < 4) {
    psVar4 = (short *)(&DAT_03005278)[param_1];
    if (*psVar4 == -0x7fdc) {
      if (*DAT_0300525c == '\x01') {
        pcVar5 = DAT_0300525c + 0xf;
        bVar1 = DAT_0300525c[0xf];
      }
      else {
        bVar1 = DAT_0300525c[param_1 + 0x10];
        pcVar5 = DAT_0300525c + param_1 + 0x10;
      }
      if (((uint)bVar1 + (uint)(ushort)psVar4[2] & 0xff) < param_3) {
        uVar3 = 0x500;
      }
      else {
        uVar2 = REG_IME;
        REG_IME = 0;
        *(undefined4 *)(psVar4 + 4) = param_2;
        *pcVar5 = (char)((uint)bVar1 + (uint)(ushort)psVar4[2]) - (char)param_3;
        psVar4[2] = (short)param_3;
        *(undefined1 *)(psVar4 + 1) = 1;
        REG_IME = uVar2;
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0x403;
    }
  }
  else {
    uVar3 = 0x400;
  }
  return uVar3;
}

