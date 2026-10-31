/* sub_080187A8  (original: 0x080187A8-0x080187D4 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();


undefined4 sub_080187A8(int param_1,undefined1 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_3 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x290) = *param_2;
    iVar2 = __call_via_r3();
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}

