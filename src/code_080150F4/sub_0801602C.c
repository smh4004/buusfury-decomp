/* sub_0801602C  (original: 0x0801602C-0x08016080 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();


void sub_0801602C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar3 = (int *)(param_1 + 0x4c);
    do {
      if (piVar3[iVar1 * 3 + 1] == param_2) {
        iVar2 = *piVar3;
        *piVar3 = iVar2 + -1;
        iVar2 = (iVar2 + -1) - iVar1;
        if (iVar2 != 0) {
          sub_08049138((int)(piVar3 + iVar1 * 3 + 1),(int)(piVar3 + iVar1 * 3 + 4),iVar2 * 0xc);
        }
        *(undefined4 *)(param_1 + 0x110) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return;
}

