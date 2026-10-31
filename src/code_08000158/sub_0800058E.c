/* sub_0800058E  (original: 0x0800058E-0x080005C4 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte volatile DAT_03001068;
extern undefined2 volatile DAT_0300157a;
extern undefined2 volatile DAT_0300157c;


void sub_0800058E(short param_1)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_03001068;
  do {
    (&DAT_0300157a)[uVar1 * 0x34] = param_1;
  } while ((&DAT_0300157a)[uVar1 * 0x34] != param_1);
  do {
    (&DAT_0300157c)[uVar1 * 0x34] = param_1;
  } while ((&DAT_0300157c)[uVar1 * 0x34] != param_1);
  return;
}

