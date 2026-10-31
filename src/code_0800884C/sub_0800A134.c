/* sub_0800A134  (original: 0x0800A134-0x0800A168 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009D24();
extern int sub_0803D5B8();
extern int __call_via_r2();
extern undefined volatile _0804BF70;


undefined4 * sub_0800A134(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sub_08009D24(puVar1,param_1,param_2);
  *puVar1 = &_0804BF70;
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  return puVar1;
}

