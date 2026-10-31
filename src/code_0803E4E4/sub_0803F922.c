/* sub_0803F922  (original: 0x0803F922-0x0803F95C in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"


void sub_0803F922(int param_1,char *param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x28);
  pcVar2 = (char *)(iVar3 * param_3[1] + *(int *)(param_1 + 0x24) + *param_3);
  iVar6 = param_3[2] - *param_3;
  iVar5 = param_3[3] - param_3[1];
  iVar4 = iVar6;
  do {
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if (cVar1 != '\0') {
        *pcVar2 = cVar1;
      }
      pcVar2 = pcVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pcVar2 = pcVar2 + (iVar3 - iVar6);
    iVar5 = iVar5 + -1;
    iVar4 = iVar6;
  } while (iVar5 != 0);
  return;
}

