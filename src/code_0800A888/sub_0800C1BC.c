/* sub_0800C1BC  (original: 0x0800C1BC-0x0800C1D2 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined volatile DAT_06010000;
extern undefined volatile gUIStringPtrs;
extern undefined volatile gUnknown_0807248C;


void sub_0800C1BC(int param_1)

{
  int a0;
  int iVar1;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define aiStack_24 ((int *)((char *)__frame + 0x0))
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x14)) {
      Wfz_LoadContainer(&gUnknown_0807248C,*(undefined4 *)(param_1 + 0x40));
      a0 = param_1 + 0x1c;
      sub_0803DADA(a0,*(undefined4 *)
                       (&gUIStringPtrs + ((uint)(*(int *)(param_1 + 0x18) << 0x10) >> 0xe)));
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
      aiStack_24[0] = 0;
      aiStack_24[1] = 0;
      aiStack_24[2] = 0x20;
      aiStack_24[3] = 0x10;
      iVar1 = 0;
      do {
        sub_0804915C(a0,(int)(&DAT_06010000 +
                             iVar1 * 0x200 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                     (int)aiStack_24);
        iVar1 = iVar1 + 1;
        aiStack_24[0] = aiStack_24[0] + 0x20;
        aiStack_24[2] = aiStack_24[2] + 0x20;
      } while (iVar1 < 7);
      aiStack_24[2] = 0xf0;
      sub_0804915C(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6010e00,(int)aiStack_24);
      return;
    }
  }
  return;
}

