/* sub_08009108  (original: 0x08009108-0x08009124 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;


void sub_08009108(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + param_2 * 4);
  uVar2 = __call_via_r2(puVar1,param_2,*puVar1,param_4,param_4);
  sub_0801191A(&DAT_03001c4c,uVar2);
  return;
}

