/* sub_08010CD0  (original: 0x08010CD0-0x08010D0C in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_0800E97E();


void sub_08010CD0(int *param_1,int *param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  
  sub_0800E97E();
  iVar1 = __call_via_r1(param_1,*(int *)(*param_1 + 0x80) + *param_1);
  puVar2 = (ushort *)(iVar1 + 0x16);
  iVar3 = *param_2 + 0x3ff >> 10;
  if ((int)*(short *)(iVar1 + 0x18) < (short)*puVar2 + iVar3) {
    *puVar2 = *(ushort *)(iVar1 + 0x18);
  }
  else {
    iVar3 = ((uint)*puVar2 + iVar3) * 0x10000;
    do {
      *puVar2 = (ushort)((uint)iVar3 >> 0x10);
    } while ((int)(short)*puVar2 != iVar3 >> 0x10);
  }
  if ((int)((uint)*(byte *)(iVar1 + 0x13) << 0x1f) < 0) {
    sub_08013C66();
  }
  return;
}

