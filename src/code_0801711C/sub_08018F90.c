/* sub_08018F90  (original: 0x08018F90-0x08018FDA in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int __call_via_r2();
extern undefined volatile _0804AAF4;
extern undefined volatile _0804930C;


undefined4 * sub_08018F90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)sub_0803D5B8(*(int *)(param_1 + 0xc) * 4 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    iVar5 = 0;
    *puVar1 = &_0804930C;
    *puVar1 = &_0804AAF4;
    puVar1[1] = 0;
    iVar2 = *(int *)(param_1 + 0xc);
    puVar1[2] = iVar2;
    if (0 < iVar2) {
      do {
        puVar3 = *(undefined4 **)(iVar5 * 4 + param_1 + 0x10);
        uVar4 = __call_via_r2(puVar3,param_2,*puVar3);
        puVar1[iVar5 + 3] = uVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)puVar1[2]);
    }
  }
  return puVar1;
}

