/* sub_08051DE4  (original: 0x08051DE4-0x08051E28 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803F58C();
extern int sub_0801142A();
extern int sub_0803D63C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049680;
extern undefined volatile _0804E454;


void sub_08051DE4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0803F58C(param_1 + 6,0,param_3,param_4,param_4);
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

