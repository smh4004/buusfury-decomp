/* sub_0800A8E8  (original: 0x0800A8E8-0x0800A90E in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0803D5B8();
extern undefined volatile _0804B338;


undefined4 * sub_0800A8E8(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804B338;
    puVar1[1] = uVar2;
  }
  return puVar1;
}

