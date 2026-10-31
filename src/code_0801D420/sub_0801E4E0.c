/* sub_0801E4E0  (original: 0x0801E4E0-0x0801E578 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080060A8();
extern int sub_0800664E();
extern int sub_0803D5B8();
extern int sub_08050878();
extern int sub_08016208();
extern undefined volatile _0804E358;


void sub_0801E4E0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = sub_08050878(0,param_1,0,1,1,0xffffffff,0xffffffff,3,0x78,0x78,0,1);
  sub_0800664E(param_1,uVar1);
  puVar2 = (undefined4 *)sub_0803D5B8(0x34);
  if (puVar2 != (undefined4 *)0x0) {
    sub_080060A8(puVar2,param_1,1,0,0,0xffffffff,0xffffffff,4,0x78,0x86,1,1);
    *puVar2 = &_0804E358;
    puVar2[0xc] = 1;
  }
  *(undefined4 **)(param_1 + 0x114) = puVar2;
  sub_0800664E(param_1,puVar2);
  uVar1 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar1);
  return;
}

