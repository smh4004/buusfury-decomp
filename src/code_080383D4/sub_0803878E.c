/* sub_0803878E  (original: 0x0803878E-0x080387C6 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int __call_via_r3();
extern undefined volatile DAT_06010000;


undefined4 sub_0803878E(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == 0xb) {
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 3) * 0x20),
                 *(int *)(param_1[0x11] + 8),0xc0);
  }
  else if (param_2 == 0xc) {
    iVar1 = *(int *)(*param_1 + 0x28);
    __call_via_r3(param_1,0,iVar1,iVar1 + *param_1,param_4);
  }
  return 0;
}

