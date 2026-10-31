/* sub_0800A7DE  (original: 0x0800A7DE-0x0800A810 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800A278();
extern int __call_via_r2();
extern int sub_0803D5B8();
extern undefined volatile _0804BF80;


undefined4 * sub_0800A7DE(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2,param_4,param_4);
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    sub_0800A278(puVar1,uVar2);
    *puVar1 = &_0804BF80;
  }
  return puVar1;
}

