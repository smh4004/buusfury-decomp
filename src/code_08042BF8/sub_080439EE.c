/* sub_080439EE  (original: 0x080439EE-0x08043A1E in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080459A4();
extern int sub_08045CCE();
extern int sub_080435BE();
extern undefined2 volatile REG_IME;
extern undefined2 volatile DAT_04000128;


int sub_080439EE(void)

{
  short sVar1;
  int iVar2;
  
  sVar1 = REG_IME;
  if (sVar1 == 0) {
    iVar2 = -1;
  }
  else {
    sub_08045CCE();
    sub_080435BE();
    iVar2 = sub_080459A4(0x1e);
    if (iVar2 == 0) {
      DAT_04000128 = 0x2000;
    }
  }
  return iVar2;
}

