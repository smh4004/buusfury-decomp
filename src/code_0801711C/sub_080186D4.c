/* sub_080186D4  (original: 0x080186D4-0x0801870E in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011568();
extern int sub_0801142A();
extern undefined volatile DAT_03001c4c;


void sub_080186D4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar2 = *(char **)(*(int *)(param_1 + 0x10) + 8);
    cVar1 = *pcVar2;
    *pcVar2 = cVar1 + -1;
    if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
      sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar2 + 2),param_3,2,param_4);
      pcVar2[2] = -1;
      pcVar2[3] = -1;
    }
  }
  sub_08011568(param_1);
  return;
}

