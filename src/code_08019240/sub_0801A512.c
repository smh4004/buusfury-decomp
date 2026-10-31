/* sub_0801A512  (original: 0x0801A512-0x0801A55E in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern int __call_via_r2();
extern undefined volatile _0804E2B0;
extern undefined volatile gUnknown_086B82EC;


void sub_0801A512(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  if (((&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] & 1) == 0) {
    puVar1 = (undefined4 *)sub_0803D5B8(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar1 + 1) = 4;
      *puVar1 = &_0804E2B0;
    }
    sub_0800ECDA(param_2,10);
    sub_0800ED18(param_2,puVar1);
  }
  else {
    __call_via_r2(param_2,0x18,*(int *)(*param_2 + 0x28) + *param_2,
                  (uint)*(byte *)(param_1 + 0x14) * 2,param_4);
  }
  return;
}

