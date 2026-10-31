/* sub_08027F74  (original: 0x08027F74-0x08027FB8 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803DADA();
extern int sub_08027E48();
extern int sub_08049138();


void sub_08027F74(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (0xf < iVar1) {
    sub_08049138(*(int *)(param_1 + 0x58),*(int *)(param_1 + 0x8c),0x2800);
    *(undefined4 *)(param_1 + 0x38) = 0x50;
    *(undefined4 *)(param_1 + 0x3c) = 0x1c;
    sub_0803DADA(param_1 + 0x34,L"Fusion-Ha!");
    sub_08027E48(param_1);
    *(undefined4 *)(param_1 + 0x30) = 0x8027eef;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

