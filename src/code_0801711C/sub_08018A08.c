/* sub_08018A08  (original: 0x08018A08-0x08018A92 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FACC();
extern int __call_via_r2();
extern undefined volatile gUnknown_086FDA20;


void sub_08018A08(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x10) = 0x10;
  if (param_2[0xa5] != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 2;
  }
  uVar2 = *(byte *)(param_2 + 0xa4) ^ 1;
  iVar1 = sub_0803FACC(0x40);
  uVar3 = (uint)(*(int *)(param_1 + 0xc) * (iVar1 + 0x60)) >> 7;
  *(uint *)(((int)uVar2 >> 1 ^ 1U) * 4 + param_1 + 4) =
       uVar3 * *(int *)(&gUnknown_086FDA20 + uVar2 * 4);
  iVar1 = sub_0803FACC(0x8000);
  *(int *)(((int)uVar2 >> 1) * 4 + param_1 + 4) = (int)(uVar3 * (iVar1 + -0x4000)) >> 0xc;
  *(char *)(param_2 + 4) = (char)uVar2;
  if (param_2[0x72] == 0) {
    __call_via_r2(param_2,9,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

