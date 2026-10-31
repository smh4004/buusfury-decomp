/* sub_08043774  (original: 0x08043774-0x080437C2 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08043706();
extern int __call_via_r2();
extern byte * volatile DAT_03005260;
extern undefined4 * volatile DAT_03005264;
extern undefined1 * volatile DAT_0300525c;


void sub_08043774(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_1 == 0xff) {
    if ((int)((uint)*DAT_03005260 << 0x1c) < 0) {
      __call_via_r2(0xff,param_2,*DAT_03005264,param_4,param_4);
    }
    uVar3 = 0;
    bVar1 = DAT_0300525c[2];
    bVar2 = DAT_0300525c[3];
    do {
      if ((1 << uVar3 & (uint)(bVar1 | bVar2)) != 0) {
        sub_08043706(uVar3,1);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 4);
    *DAT_0300525c = 0xff;
  }
  return;
}

