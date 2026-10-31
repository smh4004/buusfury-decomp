/* sub_08024768  (original: 0x08024768-0x080247BE in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801142A();
extern int sub_0803D63C();
extern char volatile DAT_03002fb8;
extern short volatile DAT_03002fba;
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804BFCC;
extern undefined volatile _08049680;
extern undefined volatile _0804E454;


void sub_08024768(undefined4 *param_1,int param_2)

{
  *param_1 = &_0804BFCC;
  DAT_03002fb8 = DAT_03002fb8 + -1;
  if ((DAT_03002fb8 == '\0') && (DAT_03002fba != -1)) {
    sub_0801142A(&DAT_03001c4c,(int)DAT_03002fba);
    DAT_03002fba = -1;
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

