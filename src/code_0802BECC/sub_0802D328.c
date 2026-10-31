/* sub_0802D328  (original: 0x0802D328-0x0802D3BA in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EDF8();
extern int __call_via_r2();
extern int sub_0800FA16();
extern int sub_08000158();


undefined4 sub_0802D328(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  if (param_2[0x7d] == 0) {
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) ^ 1;
    if (param_2 != (int *)0x0) {
      do {
        param_2[0x73] = 0;
        param_2[0x81] = 0xf;
        param_2 = (int *)param_2[0x7c];
      } while (param_2 != (int *)0x0);
    }
  }
  else {
    do {
      piVar1 = (int *)piVar1[0x7d];
    } while (piVar1[0x7d] != 0);
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7c]) {
      piVar1[0x73] = 0;
      param_2[0x81] = 0xf;
    }
    *(undefined4 *)(param_2[0x7d] + 0x1f0) = 0;
    param_2[0x7d] = 0;
    uVar2 = sub_08000158(0x128);
    sub_0800EDF8(param_2,uVar2);
    sub_0800FA16(param_2,0x8e);
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return 1;
}

