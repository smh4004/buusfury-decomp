/* sub_0801A1E4  (original: 0x0801A1E4-0x0801A216 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern int sub_08013598();
extern undefined volatile _0804DC80;


void sub_0801A1E4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  sub_08013598(param_1,0xa0,param_3,param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DC80;
    puVar1[2] = 0;
    puVar1[1] = 0;
  }
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,puVar1);
  return;
}

