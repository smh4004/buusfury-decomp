/* sub_08019858  (original: 0x08019858-0x08019888 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801191A();
extern int sub_080197B4();
extern int sub_080116FC();
extern undefined volatile DAT_03001c4c;


void sub_08019858(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0xff < iVar1) {
    uVar2 = sub_080197B4(0,param_1,param_2,param_3,param_4);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}

