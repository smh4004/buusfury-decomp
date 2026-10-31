/* sub_0800301A  (original: 0x0800301A-0x08003030 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802FCA0();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;


void sub_0800301A(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = sub_0802FCA0(0,0,param_3,param_4,param_4);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}

