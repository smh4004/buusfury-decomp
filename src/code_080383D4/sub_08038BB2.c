/* sub_08038BB2  (original: 0x08038BB2-0x08038BDC in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801142A();
extern int sub_0803D63C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049680;
extern undefined volatile _0804E454;


void sub_08038BB2(undefined4 *param_1,int param_2)

{
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

