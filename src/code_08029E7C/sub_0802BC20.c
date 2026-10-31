/* sub_0802BC20  (original: 0x0802BC20-0x0802BC70 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_06010000;


undefined4 sub_0802BC20(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0xb) {
    iVar3 = 0;
    do {
      iVar4 = param_1 + iVar3;
      iVar3 = iVar3 + 1;
      *(undefined1 *)(iVar4 + 0x10) = 0xff;
    } while (iVar3 < 5);
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),0x8753008,0x400);
    uVar2 = 0;
  }
  else if (param_2 == 0x1b) {
    piVar1 = (int *)(param_1 + 0x1c);
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
    iVar4 = param_3[1];
    piVar1[iVar3 * 2 + 1] = *param_3;
    piVar1[iVar3 * 2 + 2] = iVar4;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

