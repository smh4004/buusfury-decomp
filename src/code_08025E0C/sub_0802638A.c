/* sub_0802638A  (original: 0x0802638A-0x080263BE in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 2/2 snapshots, 47% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08024C04();
extern int sub_08025E50();
extern int sub_0802745E();
extern int sub_0803D850();
extern int sub_08027454();


undefined4 sub_0802638A(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x510) == 0) {
    uVar1 = sub_08024C04();
  }
  else {
    uVar1 = sub_0802745E(*(undefined4 *)(param_1 + 0x514));
    uVar2 = sub_08027454(*(undefined4 *)(param_1 + 0x514));
    sub_08025E50(0,uVar2,uVar1);
    sub_0803D850();
    uVar1 = 0;
  }
  return uVar1;
}

