/* sub_08014BBC  (original: 0x08014BBC-0x08014BE2 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 50% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern ushort volatile DAT_03003304;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_08319488;


undefined4 sub_08014BBC(void)

{
  if ((int)((uint)DAT_03003304 << 0x1c) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    return 1;
  }
  return 0;
}

