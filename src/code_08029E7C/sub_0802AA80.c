/* sub_0802AA80  (original: 0x0802AA80-0x0802AAA2 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0803D5B8();
extern undefined volatile _0804AA5C;


void sub_0802AA80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0x10),param_2,**(undefined4 **)(param_1 + 0x10),
                        param_4,param_4);
  puVar2 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804AA5C;
    puVar2[1] = uVar1;
    puVar2[3] = uVar3;
  }
  return;
}

