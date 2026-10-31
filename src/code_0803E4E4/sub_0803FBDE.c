/* sub_0803FBDE  (original: 0x0803FBDE-0x0803FC3A in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049144();
extern int sub_0803F278();
extern int sub_080401F4();
extern int sub_080401DA();
extern int sub_0803F28E();
extern int sub_08040B5C();
extern int volatile DAT_03004a64;
extern undefined volatile DAT_03003898;
extern undefined2 volatile REG_IME;


void sub_0803FBDE(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (*param_1 != 0) {
    sub_08049144(DAT_03004a64 + param_2,param_3,param_4);
    sub_0803F278(&DAT_03003898);
    sub_080401DA();
    REG_IME = 0;
    iVar1 = 0;
    if (0 < param_4) {
      do {
        sub_08040B5C(param_2 + iVar1 >> 3 & 0xffff,param_3 + iVar1);
        iVar1 = iVar1 + 8;
      } while (iVar1 < param_4);
    }
    REG_IME = 1;
    sub_080401F4();
    sub_0803F28E(&DAT_03003898);
  }
  return;
}

