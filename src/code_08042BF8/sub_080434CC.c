/* sub_080434CC  (original: 0x080434CC-0x08043528 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049168();
extern int sub_08049144();
extern undefined2 volatile REG_IME;


undefined4 sub_080434CC(char *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (*param_1 == '\0') {
    REG_IME = 0;
    sub_08049144(param_2,(int)(param_1 + (uint)(byte)param_1[1] * 0x18 + 4),0x18);
    sub_08049168((int)(param_1 + (uint)(byte)param_1[1] * 0x18 + 4),0,0x18);
    param_1[3] = param_1[3] + -1;
    bVar1 = param_1[1] + 1U & 3;
    param_1[1] = bVar1;
    if (bVar1 == param_1[2]) {
      *param_1 = '\x01';
    }
    REG_IME = 1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

