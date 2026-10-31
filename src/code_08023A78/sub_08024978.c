/* sub_08024978  (original: 0x08024978-0x080249E0 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019CC4();
extern int sub_0801124C();
extern int sub_0801142A();
extern int sub_08049138();
extern char volatile DAT_03002fb8;
extern short volatile DAT_03002fba;
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_06010000;


undefined4 sub_08024978(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2 == 10) {
    cVar2 = DAT_03002fb8 + -1;
    bVar3 = DAT_03002fb8 == '\x01';
    DAT_03002fb8 = cVar2;
    if ((bVar3) && (DAT_03002fba != -1)) {
      sub_0801142A(&DAT_03001c4c,(int)DAT_03002fba,param_3,2,param_4);
      DAT_03002fba = -1;
    }
    uVar1 = 0;
  }
  else if (param_2 == 0xb) {
    cVar2 = DAT_03002fb8 + '\x01';
    bVar3 = DAT_03002fb8 == '\0';
    DAT_03002fb8 = cVar2;
    if (bVar3) {
      DAT_03002fba = sub_0801124C(&DAT_03001c4c,0x1300);
      sub_08049138((int)(&DAT_06010000 + DAT_03002fba * 0x20),0x872c3b8,0x1300);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = sub_08019CC4();
  }
  return uVar1;
}

