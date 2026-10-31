/* sub_0801F3DC  (original: 0x0801F3DC-0x0801F44E in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


undefined4 sub_0801F3DC(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_3 + 4) == '\0') {
      iVar2 = -1;
    }
    else {
      iVar2 = 0;
      if (0 < *param_2) {
        do {
          if (((char)param_2[iVar2 * 2 + 2] == *(char *)(param_3 + 4)) &&
             (*(char *)((int)param_2 + iVar2 * 8 + 9) == *(char *)(param_3 + 5))) goto _0801F418;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *param_2);
      }
      iVar2 = -1;
    }
_0801F418:
    if (iVar2 < 0) {
      iVar2 = *param_2;
      if (iVar2 == 0x14e) {
        uVar1 = 0;
      }
      else {
        *param_2 = iVar2 + 1;
        param_2[iVar2 * 2 + 2] = *(int *)(param_3 + 4);
        param_2[iVar2 * 2 + 1] = param_4;
        uVar1 = 1;
      }
    }
    else {
      param_2[iVar2 * 2 + 1] = param_2[iVar2 * 2 + 1] + param_4;
      uVar1 = 1;
    }
  }
  return uVar1;
}

