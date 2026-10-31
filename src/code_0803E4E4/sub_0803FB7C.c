/* sub_0803FB7C  (original: 0x0803FB7C-0x0803FBDE in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0803F278();
extern int sub_080401F4();
extern int sub_080407A0();
extern int sub_080401DA();
extern int sub_0803F28E();
extern int sub_08040868();
extern int sub_0803D5B8();
extern int volatile DAT_03004a64;
extern undefined volatile DAT_03003898;
extern undefined2 volatile REG_IME;


void sub_0803FB7C(uint *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_080407A0(0x40);
  *param_1 = (uint)(iVar1 == 0);
  if ((iVar1 == 0) != 0) {
    iVar1 = sub_0803D5B8(0x2000);
    DAT_03004a64 = iVar1;
    sub_0803F278(&DAT_03003898);
    sub_080401DA();
    REG_IME = 0;
    iVar2 = 0;
    do {
      sub_08040868(iVar2 >> 3 & 0xffff,iVar1 + iVar2);
      iVar2 = iVar2 + 8;
    } while (iVar2 < 0x2000);
    REG_IME = 1;
    sub_080401F4();
    sub_0803F28E(&DAT_03003898);
  }
  return;
}

