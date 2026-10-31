/* sub_08011568  (original: 0x08011568-0x0801157E in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801142A();
extern undefined volatile DAT_03001c4c;


void sub_08011568(int param_1)

{
  sub_0801142A(&DAT_03001c4c,*(undefined2 *)(param_1 + 0xc));
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  return;
}

