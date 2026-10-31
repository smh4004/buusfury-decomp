/* sub_08009172  (original: 0x08009172-0x08009196 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int volatile DAT_03002a64;
extern undefined4 volatile DAT_03002a68;


void sub_08009172(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x10) + param_2 * 8 + 4);
  uVar2 = __call_via_r1(puVar1,*puVar1);
  puVar1 = &DAT_03002a68 + DAT_03002a64;
  DAT_03002a64 = DAT_03002a64 + 1;
  *puVar1 = uVar2;
  return;
}

