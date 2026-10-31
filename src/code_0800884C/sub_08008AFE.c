/* sub_08008AFE  (original: 0x08008AFE-0x08008B30 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08004784();
extern int sub_0800C7E2();


void sub_08008AFE(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 5) != '\0') {
    do {
      puVar3 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + iVar2 * 4);
      iVar1 = sub_08004784(*puVar3);
      if (iVar1 != 0) {
        sub_0800C7E2(puVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 5));
  }
  return;
}

