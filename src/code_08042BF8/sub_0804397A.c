/* sub_0804397A  (original: 0x0804397A-0x080439EE in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080459A4();
extern int sub_08045CCE();
extern int sub_080437C2();
extern int sub_08045A5E();
extern int sub_0804628A();
extern int sub_080435BE();
extern int volatile DAT_03005294;
extern undefined2 volatile REG_IME;
extern undefined2 volatile DAT_04000128;
extern undefined2 volatile REG_TM0CNT;


void sub_0804397A(void)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  
  sVar1 = REG_IME;
  if (sVar1 == 0) {
    sub_080437C2(0x3d,6);
    *(undefined2 *)(DAT_03005294 + 0x12) = 6;
  }
  else {
    sub_08045CCE();
    sub_080435BE();
    iVar2 = sub_080459A4(8);
    if (iVar2 == 0x8001) {
      piVar3 = (int *)(&REG_TM0CNT + (uint)*(byte *)(DAT_03005294 + 10) * 2);
      *piVar3 = 0;
      *piVar3 = 0x830000;
      do {
      } while ((uint)(*piVar3 << 0x10) < 0x1060000);
      *piVar3 = 0;
      sub_08045A5E(0x804554d);
      sub_0804628A();
    }
    else {
      DAT_04000128 = 0x2000;
      sub_080437C2(0x3d,0);
    }
  }
  return;
}

