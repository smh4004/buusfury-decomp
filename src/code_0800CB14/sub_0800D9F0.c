/* sub_0800D9F0  (original: 0x0800D9F0-0x0800DA26 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int sub_0801142A();
extern int volatile DAT_03001afc;
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049680;
extern undefined volatile _0804A85C;
extern undefined volatile _0804E454;


void sub_0800D9F0(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804A85C;
  DAT_03001afc = DAT_03001afc + -1;
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

