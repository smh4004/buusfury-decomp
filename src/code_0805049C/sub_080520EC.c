/* sub_080520EC  (original: 0x080520EC-0x08052134 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801142A();
extern int sub_0803D63C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804C070;
extern undefined volatile _08049680;
extern undefined volatile _0804E454;


void sub_080520EC(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804C070;
  *(undefined4 *)(param_1[6] + 0x18) = 0;
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

