/* sub_0800B8B2  (original: 0x0800B8B2-0x0800B8FC in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern int sub_0803D63C();
extern int sub_0801142A();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049FEC;
extern undefined volatile _08049680;
extern undefined volatile _0804E454;


void sub_0800B8B2(undefined4 *param_1,int param_2)

{
  *param_1 = &_08049FEC;
  if (param_1[6] != 0) {
    sub_08011944(&DAT_03001c4c,param_1[6]);
  }
  if (param_1[0xb] != 0) {
    sub_08011944(&DAT_03001c4c,param_1[0xb]);
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

