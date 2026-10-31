/* sub_080502BC  (original: 0x080502BC-0x080502FC in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08046DD0();
extern int sub_08047018();


int sub_080502BC(int param_1,int param_2)

{
  undefined4 uVar1;
  
  sub_08046DD0(param_1,param_2,0x4f8);
  sub_08047018(param_1 + 0x4f8,param_2 + 0x4f8,param_2 + 0x8a0,0x68,0x805023d);
  uVar1 = *(undefined4 *)(param_2 + 0x8a0);
  *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_2 + 0x8a4);
  *(undefined4 *)(param_1 + 0x8a0) = uVar1;
  return param_1;
}

