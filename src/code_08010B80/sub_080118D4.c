/* sub_080118D4  (original: 0x080118D4-0x0801191A in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804E490();
extern int sub_0801142A();
extern undefined volatile DAT_03001c4c;


undefined4 sub_080118D4(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 == 10) {
    pcVar2 = *(char **)(param_1 + 0xc);
    cVar1 = *pcVar2;
    *pcVar2 = cVar1 + -1;
    if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar2 + 2) != -1)) {
      sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar2 + 2));
      pcVar2[2] = -1;
      pcVar2[3] = -1;
    }
    return 0;
  }
  if (param_2 == 0xb) {
    sub_0804E490(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x14));
    return 0;
  }
  return 0;
}

