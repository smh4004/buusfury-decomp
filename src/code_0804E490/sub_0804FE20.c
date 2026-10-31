/* sub_0804FE20  (original: 0x0804FE20-0x0804FE54 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801142A();
extern undefined volatile DAT_03001c4c;


void sub_0804FE20(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = cVar1 + -1;
  if (((char)(cVar1 + -1) == '\0') && (*(short *)(param_1 + 2) != -1)) {
    sub_0801142A(&DAT_03001c4c,(int)*(short *)(param_1 + 2));
    param_1[2] = -1;
    param_1[3] = -1;
  }
  return;
}

