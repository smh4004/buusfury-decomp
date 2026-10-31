/* sub_0803A266  (original: 0x0803A266-0x0803A2B4 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern undefined volatile _0804D738;


bool sub_0803A266(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x1f0) + 0x1f8);
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    puVar1 = (undefined4 *)sub_0803D5B8(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &_0804D738;
    }
    sub_0800ECDA(iVar2,0x12);
    sub_0800ED18(iVar2,puVar1);
  }
  return *(int *)(*(int *)(iVar2 + 0x58) + 0x9c) != *(int *)(iVar2 + 0x50);
}

