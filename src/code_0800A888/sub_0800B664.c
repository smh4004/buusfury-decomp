/* sub_0800B664  (original: 0x0800B664-0x0800B6A2 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern byte volatile DAT_03001068;
extern undefined volatile DAT_03001568;
extern undefined1 volatile DAT_03001574;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086B82EC;


undefined4 sub_0800B664(undefined4 param_1)

{
  if ((-1 < *(int *)(&DAT_03001568 + (uint)DAT_03001068 * 0x68)) &&
     ((int)((uint)(byte)(&gUnknown_086B82EC)
                        [(uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18] << 0x1c) < 0
     )) {
    return 1;
  }
  sub_08011944(&DAT_03001c4c,param_1);
  return 0;
}

