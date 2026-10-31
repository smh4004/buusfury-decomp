/* sub_0803BED0  (original: 0x0803BED0-0x0803BEF6 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern undefined volatile _0804D6CC;


void sub_0803BED0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804D6CC;
  }
  sub_0800ECDA(param_2,0x10);
  sub_0800ED18(param_2,puVar1);
  return;
}

