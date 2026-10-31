/* sub_0803E3A8  (original: 0x0803E3A8-0x0803E3CA in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();


void sub_0803E3A8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(byte *)(iVar1 * 0x40 + param_1 + 0x10) & 1) == 0) {
      sub_08049138(iVar1 * 0x40 + param_1,param_2,0x40);
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}

