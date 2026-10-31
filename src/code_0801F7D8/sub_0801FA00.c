/* sub_0801FA00  (original: 0x0801FA00-0x0801FA3C in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int sub_0801F3DC();


void sub_0801FA00(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int *a0;
  
  a0 = param_3 + param_4 * 2 + 1;
  iVar1 = sub_0801F3DC(param_1,param_2,a0,param_5);
  if ((iVar1 != 0) && (iVar1 = *a0, *a0 = iVar1 - param_5, iVar1 - param_5 == 0)) {
    iVar1 = *param_3;
    *param_3 = iVar1 + -1;
    iVar1 = (iVar1 + -1) - param_4;
    if (iVar1 != 0) {
      sub_08049138((int)a0,(int)(param_3 + param_4 * 2 + 3),iVar1 * 8);
    }
  }
  return;
}

