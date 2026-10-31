/* sub_08027EB0  (original: 0x08027EB0-0x08027EEE in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08046C54();
extern undefined volatile gUnknown_0874EA60;


void sub_08027EB0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    iVar1 = sub_08046C54(param_1 + 0x29,&gUnknown_0874EA60,5);
    if (iVar1 != 0) {
      iVar1 = sub_08046C54(param_1 + 0x29,param_1 + 0x24,5);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 2;
        return;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  return;
}

