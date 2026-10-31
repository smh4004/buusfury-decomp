/* sub_0801DFAC  (original: 0x0801DFAC-0x0801DFE0 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern ushort volatile DAT_03003304;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_08319488;


undefined4 sub_0801DFAC(void)

{
  if ((int)((uint)DAT_03003304 << 0x1c) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    return 1;
  }
  return 0;
}

