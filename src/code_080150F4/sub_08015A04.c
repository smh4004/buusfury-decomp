/* sub_08015A04  (original: 0x08015A04-0x08015A30 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_083192A8;


void sub_08015A04(int param_1)

{
  sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + *(int *)(param_1 + 8) * 0xc,0x40,0);
  return;
}

