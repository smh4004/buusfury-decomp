/* sub_08042E3E  (original: 0x08042E3E-0x08042E5E in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804333C();
extern char volatile DAT_03004cca;


void sub_08042E3E(void)

{
  if (DAT_03004cca == '\0') {
    sub_0804333C(0x45,0);
  }
  else if (DAT_03004cca == '\x01') {
    DAT_03004cca = 2;
    return;
  }
  return;
}

