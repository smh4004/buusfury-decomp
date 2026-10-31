/* sub_0800C144  (original: 0x0800C144-0x0800C1BC in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804915C();
extern int sub_0803DADA();
extern int Wfz_LoadContainer();
extern undefined volatile DAT_06010000;
extern undefined volatile gUIStringPtrs;
extern undefined volatile gUnknown_0807248C;


void sub_0800C144(int param_1)

{
  int a0;
  int iVar1;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 ((int *)((char *)__frame + 0x0))
  Wfz_LoadContainer(&gUnknown_0807248C,*(undefined4 *)(param_1 + 0x40));
  a0 = param_1 + 0x1c;
  sub_0803DADA(a0,*(undefined4 *)
                   (&gUIStringPtrs + ((uint)(*(int *)(param_1 + 0x18) << 0x10) >> 0xe)));
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0x20;
  local_24[3] = 0x10;
  iVar1 = 0;
  do {
    sub_0804915C(a0,(int)(&DAT_06010000 + iVar1 * 0x200 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 (int)local_24);
    iVar1 = iVar1 + 1;
    local_24[0] = local_24[0] + 0x20;
    local_24[2] = local_24[2] + 0x20;
  } while (iVar1 < 7);
  local_24[2] = 0xf0;
  sub_0804915C(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010e00,(int)local_24);
  return;
}

