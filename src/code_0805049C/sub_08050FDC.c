/* sub_08050FDC  (original: 0x08050FDC-0x08051030 in asm/code_0805049C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801142A();
extern int sub_0803D63C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _0804ABA0;
extern undefined volatile _0804E454;


void sub_08050FDC(undefined4 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = &_0804ABA0;
  pcVar2 = (char *)param_1[3];
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
    sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar2 + 2));
    pcVar2[2] = -1;
    pcVar2[3] = -1;
  }
  *param_1 = &_0804E454;
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

