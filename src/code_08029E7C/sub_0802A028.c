/* sub_0802A028  (original: 0x0802A028-0x0802A09E in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803BB48();
extern int __call_via_r2();
extern int volatile DAT_03001c34;


undefined4 sub_0802A028(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_03001c34 == 0) {
    uVar1 = 0;
  }
  else {
    puVar4 = (undefined4 *)(DAT_03001c34 + 0x1a4);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(DAT_03001c34 + 0x1a0);
    *(undefined4 *)(param_1 + 0x20) = *puVar4;
    iVar3 = *(int *)(param_1 + 0x1c) - param_2[0x68];
    iVar2 = *(int *)(param_1 + 0x20) - param_2[0x69];
    if ((iVar3 * iVar3 >> 8) + (iVar2 * iVar2 >> 8) < 0x401) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = sub_0803BB48();
    }
  }
  return uVar1;
}

