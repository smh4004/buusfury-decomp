/* sub_0801E7B4  (original: 0x0801E7B4-0x0801E84A in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080401C2();
extern int sub_080502FC();
extern int sub_08040160();
extern int sub_0800664E();
extern int sub_08016208();
extern int sub_08050878();


void sub_0801E7B4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_08050878(0,param_1,0,1,1,0xffffffff,0xffffffff,0x5f,0x78,0x78,0,1);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08050878(0,param_1,1,0,0,0xffffffff,0xffffffff,0x4f,0x78,0x86,1,1);
  sub_0800664E(param_1,uVar1);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  sub_080401C2();
  sub_080502FC(0,0);
  sub_08040160();
  return;
}

