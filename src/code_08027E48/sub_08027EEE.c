/* sub_08027EEE  (original: 0x08027EEE-0x08027F74 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804915C();
extern int sub_08027E48();
extern undefined volatile DAT_06010000;


void sub_08027EEE(int param_1)

{
  uint uVar1;
  int a0;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(undefined4 *)((char *)__frame + 0x0))
#define local_20 (*(undefined4 *)((char *)__frame + 0x4))
#define local_1c (*(undefined4 *)((char *)__frame + 0x8))
#define local_18 (*(undefined4 *)((char *)__frame + 0xc))
  uVar1 = *(int *)(param_1 + 0x18) + 1;
  *(uint *)(param_1 + 0x18) = uVar1;
  if (0x1f < (int)uVar1) {
    *(undefined4 *)(param_1 + 0x30) = 0x8027eb1;
  }
  if ((uVar1 & 7) == 0) {
    if ((int)(uVar1 * 0x10000000) < 0) {
      a0 = param_1 + 0x68;
      local_1c = 0x40;
      local_18 = 0x40;
      local_24 = 0;
      local_20 = 0;
      sub_0804915C(a0,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),(int)&local_24)
      ;
      local_24 = 0x40;
      local_1c = 0x80;
      local_20 = 0;
      local_18 = 0x40;
      sub_0804915C(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6011000,(int)&local_24);
      local_20 = 0;
      local_24 = 0x80;
      local_1c = 0xa0;
      local_18 = 0x40;
      sub_0804915C(a0,(uint)*(ushort *)(param_1 + 0xc) * 0x20 + 0x6012000,(int)&local_24);
    }
    else {
      sub_08027E48(param_1);
    }
  }
  return;
}

