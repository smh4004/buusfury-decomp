/* sub_08005228  (original: 0x08005228-0x080052C4 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080060A8();
extern int sub_0800664E();
extern int sub_0803D5B8();
extern int sub_08016208();
extern undefined volatile _0804D82C;


void sub_08005228(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    sub_080060A8(puVar1,param_1,0,1,1,0xffffffff,0xffffffff,1,0x78,0x78,0,1);
    *puVar1 = &_0804D82C;
  }
  sub_0800664E(param_1,puVar1);
  puVar1 = (undefined4 *)sub_0803D5B8(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    sub_080060A8(puVar1,param_1,1,0,0,0xffffffff,0xffffffff,2,0x78,0x86,1,1);
    *puVar1 = &_0804D82C;
  }
  sub_0800664E(param_1,puVar1);
  uVar2 = sub_08016208(0,param_1);
  sub_0800664E(param_1,uVar2);
  return;
}

