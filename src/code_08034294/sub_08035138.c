/* sub_08035138  (original: 0x08035138-0x0803516E in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C70();
extern int sub_0803D63C();
extern undefined4 volatile DAT_03001c50;
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile DAT_03001c54;


void sub_08035138(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_03001c50) {
    do {
      if ((&DAT_03001c54)[iVar1] == *(int *)(param_1 + 4)) {
        sub_08011C70(&DAT_03001c4c,0x26,*(int *)(param_1 + 4),&DAT_03001c50,param_4);
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_03001c50);
  }
  sub_0803D63C(param_1);
  return;
}

