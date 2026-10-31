/* sub_0800CE96  (original: 0x0800CE96-0x0800CEAC in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801142A();
extern undefined volatile DAT_03001c4c;


void sub_0800CE96(int param_1)

{
  sub_0801142A(&DAT_03001c4c,*(undefined2 *)(param_1 + 0x16));
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  return;
}

