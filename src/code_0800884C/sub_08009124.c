/* sub_08009124  (original: 0x08009124-0x08009172 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;


int * sub_08009124(int param_1,int param_2,int *param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + param_2 * 4);
  piVar2 = (int *)__call_via_r2(puVar1,param_2,*puVar1);
  __call_via_r1(piVar2,*(int *)(*piVar2 + 0x3c) + *piVar2);
  piVar2[0x68] = *param_3 << 8;
  piVar2[0x69] = param_3[1] << 8;
  __call_via_r1(piVar2,*(int *)(*piVar2 + 0x40) + *piVar2);
  *(undefined1 *)(piVar2 + 4) = param_4;
  sub_0801191A(&DAT_03001c4c,piVar2);
  return piVar2;
}

