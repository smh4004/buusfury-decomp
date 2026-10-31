/* sub_0801F3A4  (original: 0x0801F3A4-0x0801F3DC in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


int sub_0801F3A4(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(param_3 + 4) != '\0') {
    iVar1 = 0;
    if (0 < *param_2) {
      do {
        if (((char)param_2[iVar1 * 2 + 2] == *(char *)(param_3 + 4)) &&
           (*(char *)((int)param_2 + iVar1 * 8 + 9) == *(char *)(param_3 + 5))) {
          return iVar1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *param_2);
    }
  }
  return -1;
}

