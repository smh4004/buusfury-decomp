/* sub_08013492  (original: 0x08013492-0x080134B8 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_086B82EC;


uint sub_08013492(int param_1)

{
  if ((int)((uint)(byte)(&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] << 0x1e) < 0) {
    return (uint)*(ushort *)(param_1 + 0x20);
  }
  if (((&gUnknown_086B82EC)[(uint)*(byte *)(param_1 + 0x14) * 0x18] & 1) != 0) {
    return (uint)*(ushort *)(param_1 + 0x1e);
  }
  return (int)*(short *)(param_1 + 0x1a);
}

