/* sub_0802DF44  (original: 0x0802DF44-0x0802DFCA in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03001c34;


void sub_0802DF44(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(int *)(DAT_03001c34 + 0x1a0) >> 8) - (*(int *)(param_2 + 0x1a0) >> 8);
  iVar3 = (*(int *)(DAT_03001c34 + 0x1a4) >> 8) - (*(int *)(param_2 + 0x1a4) >> 8);
  if (iVar2 + iVar3 < 0 == SBORROW4(iVar2,-iVar3)) {
    iVar1 = iVar2 * 0xf;
    if (iVar1 + iVar3 * 4 < 0 == SBORROW4(iVar1,iVar3 * -4)) {
      if (iVar3 < iVar2) {
        *(undefined1 *)(param_2 + 0x11) = 9;
      }
      else if (iVar1 == iVar3 * 4 || iVar1 + iVar3 * -4 < 0 != SBORROW4(iVar1,iVar3 * 4)) {
        *(undefined1 *)(param_2 + 0x11) = 5;
      }
      else {
        *(undefined1 *)(param_2 + 0x11) = 7;
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x11) = 3;
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x11) = 1;
  }
  return;
}

