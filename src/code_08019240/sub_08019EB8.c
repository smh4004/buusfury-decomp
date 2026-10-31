/* sub_08019EB8  (original: 0x08019EB8-0x08019EEE in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern int sub_08013598();
extern undefined volatile _0804D9B0;


void sub_08019EB8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  sub_08013598(param_1,300,param_3,param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804D9B0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,puVar1);
  return;
}

