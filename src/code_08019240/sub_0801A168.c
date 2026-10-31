/* sub_0801A168  (original: 0x0801A168-0x0801A19E in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03002c04;
extern int volatile DAT_03001988;
extern undefined volatile gUnknown_086B82EC;


undefined4 sub_0801A168(int param_1)

{
  if (DAT_03002c04 != 0) {
    return 0;
  }
  if (DAT_03001988 == 0) {
    return 0;
  }
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] << 0x1e) < 0) {
    return 0;
  }
  return 1;
}

