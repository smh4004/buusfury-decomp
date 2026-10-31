/* sub_08036328  (original: 0x08036328-0x0803634E in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0803D5B8();
extern undefined volatile _0804DF84;


void sub_08036328(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = __call_via_r2(*(undefined4 **)(param_1 + 0xc),param_2,**(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)sub_0803D5B8(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = 2;
    puVar2[1] = uVar1;
    puVar2[4] = 0;
    *puVar2 = &_0804DF84;
  }
  return;
}

