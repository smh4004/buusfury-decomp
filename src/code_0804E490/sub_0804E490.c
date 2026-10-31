/* sub_0804E490  (original: 0x0804E490-0x0804E4CC in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, r0-void.
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int sub_0801124C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_06010000;


void sub_0804E490(char *param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  
  cVar1 = *param_1;
  *param_1 = cVar1 + '\x01';
  if (cVar1 == '\0') {
    sVar2 = sub_0801124C(&DAT_03001c4c,param_3);
    *(short *)(param_1 + 2) = sVar2;
    sub_08049138((int)(&DAT_06010000 + sVar2 * 0x20),param_2,param_3);
  }
  return;
}

