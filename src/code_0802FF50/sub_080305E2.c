/* sub_080305E2  (original: 0x080305E2-0x080305FE in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08010BB8();
extern int __call_via_r2();
extern int * volatile DAT_03001c34;
extern undefined4 volatile DAT_03001c3c;


void sub_080305E2(void)

{
  __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
  sub_08010BB8(DAT_03001c34,&DAT_03001c3c);
  return;
}

