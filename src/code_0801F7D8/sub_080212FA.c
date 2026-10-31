/* sub_080212FA  (original: 0x080212FA-0x0802133A in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E302();
extern int sub_0801142A();
extern int sub_0803D63C();
extern undefined volatile _0804A33C;
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_03003e5c;
extern undefined volatile _08049680;
extern undefined volatile _0804E454;
extern undefined volatile gUnknown_083192CC;


void sub_080212FA(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804A33C;
  if (param_1[0x11] == 0) {
    sub_0803E302(&DAT_03003e5c,&gUnknown_083192CC);
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

