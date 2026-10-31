/* sub_080284AA  (original: 0x080284AA-0x080284C0 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile gUnknown_087B6EEC;


void sub_080284AA(undefined4 param_1,int param_2)

{
  *(short *)(param_2 + 0x176) =
       (short)(-*(int *)(&gUnknown_087B6EEC + (((uint)*(ushort *)(param_2 + 0x12) << 0x18) >> 0x16))
              >> 0xd);
  return;
}

