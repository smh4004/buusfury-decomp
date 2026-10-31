/* sub_0800C06C  (original: 0x0800C06C-0x0800C094 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801191A();
extern int sub_08011944();
extern int sub_0800C0C8();
extern int volatile DAT_03001a34;
extern undefined volatile DAT_03001c4c;


void sub_0800C06C(undefined4 param_1)

{
  undefined4 uVar1;
  
  sub_08011944(&DAT_03001c4c,param_1);
  if (DAT_03001a34 != 0) {
    uVar1 = sub_0800C0C8(0);
    sub_0801191A(&DAT_03001c4c,uVar1);
  }
  return;
}

