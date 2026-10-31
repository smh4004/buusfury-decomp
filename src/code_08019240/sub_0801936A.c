/* sub_0801936A  (original: 0x0801936A-0x080193AE in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_0803D8A0();
extern int __call_via_r2();
extern undefined volatile _0804C0C4;


void sub_0801936A(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 == (int *)0x0) {
    if (param_2 != (int *)0x0) {
      __call_via_r2(param_2,1,*(int *)*param_2 + *param_2,param_4,param_4);
    }
  }
  else {
    iVar2 = *param_3;
    while (iVar2 != 0) {
      param_3 = (int *)(*param_3 + 4);
      iVar2 = *param_3;
    }
    *param_3 = (int)param_2;
    if (*param_1 == 0) {
      puVar1 = (undefined4 *)sub_0803D5B8(4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &_0804C0C4;
      }
      sub_0803D8A0();
    }
  }
  return;
}

