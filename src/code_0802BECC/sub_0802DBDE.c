/* sub_0802DBDE  (original: 0x0802DBDE-0x0802DC1A in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801142A();
extern int sub_08011944();
extern int sub_0803D63C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049680;
extern undefined volatile _0804E454;
extern undefined volatile _0804C99C;


void sub_0802DBDE(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804C99C;
  if (param_1[0x14] != 0) {
    sub_08011944(&DAT_03001c4c,param_1[0x14]);
  }
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

