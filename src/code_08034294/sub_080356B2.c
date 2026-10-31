/* sub_080356B2  (original: 0x080356B2-0x080356DC in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801142A();
extern int sub_0803D63C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049680;
extern undefined volatile _0804E454;


void sub_080356B2(undefined4 *param_1,int param_2)

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

