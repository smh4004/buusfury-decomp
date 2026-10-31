/* sub_08016384  (original: 0x08016384-0x080163C4 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int sub_0801142A();
extern int sub_0803D63C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804A298;
extern undefined volatile _08049680;
extern undefined volatile _0804E454;


void sub_08016384(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804A298;
  if (param_1[5] != 0) {
    *(undefined4 *)(param_1[5] + 0xc) = 1;
  }
  sub_0803D63C(param_1[9]);
  *param_1 = &_08049680;
  if (*(short *)(param_1 + 3) != -1) {
    sub_0801142A(&DAT_03001c4c);
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

