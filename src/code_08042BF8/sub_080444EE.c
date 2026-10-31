/* sub_080444EE  (original: 0x080444EE-0x08044554 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804442C();
extern int sub_080461CE();
extern int sub_08045FB4();
extern int sub_08045D7A();
extern int sub_08045A5E();
extern int sub_080437C2();
extern char * volatile DAT_0300525c;
extern byte * volatile DAT_03005260;


void sub_080444EE(uint param_1)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = DAT_03005260;
  pcVar1 = DAT_0300525c;
  if (((byte)(DAT_0300525c[2] | DAT_0300525c[3]) & param_1) != 0) {
    DAT_03005260[5] = (byte)param_1;
    if ((*pcVar1 == -1) && ((int)((uint)*pbVar2 << 0x18) < 0)) {
      if (((byte)pcVar1[3] & param_1) != 0) {
        sub_0804442C(0x30,0);
      }
    }
    else {
      if (pbVar2[9] != 0) {
        sub_08045A5E(0x8043775);
        sub_08045FB4();
        iVar3 = sub_08045D7A();
        if (iVar3 != 0) {
          sub_080437C2(0x1b,iVar3);
          return;
        }
      }
      sub_08045A5E(0x804442d);
      sub_080461CE(param_1);
    }
  }
  return;
}

