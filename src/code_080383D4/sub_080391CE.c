/* sub_080391CE  (original: 0x080391CE-0x080391EC in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EEB0();
extern undefined * volatile gUnknown_0877ADD8;


undefined4 sub_080391CE(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(undefined **)(param_1 + 0x14) == (&gUnknown_0877ADD8)[param_2]) &&
     (iVar1 = sub_0800EEB0(), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

