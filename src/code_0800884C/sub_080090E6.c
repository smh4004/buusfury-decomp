/* sub_080090E6  (original: 0x080090E6-0x08009108 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800DCDC();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;


void sub_080090E6(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 6)) {
    uVar1 = sub_0800DCDC(0,*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + param_2 * 4));
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  return;
}

