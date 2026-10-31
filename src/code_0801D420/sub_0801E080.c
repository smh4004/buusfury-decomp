/* sub_0801E080  (original: 0x0801E080-0x0801E122 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019B4E();
extern int sub_0800FE34();
extern undefined volatile gUnknown_087202E8;


void sub_0801E080(int param_1)

{
  int iVar1;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_20 (*(int *)((char *)__frame + 0x0))
#define iStack_1c (*(int *)((char *)__frame + 0x4))
#define iStack_18 (*(int *)((char *)__frame + 0x8))
#define iStack_14 (*(int *)((char *)__frame + 0xc))
#define iStack_10 (*(int *)((char *)__frame + 0x10))
#define iStack_c (*(int *)((char *)__frame + 0x14))
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x44) == 0) {
    if (iVar1 < 0x18) {
      if (0 < iVar1) {
        *(int *)(param_1 + 0x40) = iVar1 + -1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0x17;
    }
  }
  else {
    *(int *)(param_1 + 0x40) = iVar1 + 1;
    if (0x37 < iVar1 + 1) {
      *(undefined4 *)(param_1 + 0x40) = 0x18;
    }
  }
  sub_0800FE34(&iStack_20,*(undefined4 *)(param_1 + 0x1c));
  iStack_c = iStack_1c + iStack_14 >> 1;
  iStack_10 = iStack_20 + iStack_18 >> 1;
  *(int *)(param_1 + 0x20) = iStack_10 << 8;
  *(int *)(param_1 + 0x24) = iStack_c << 8;
  *(undefined **)(param_1 + 0x18) = &gUnknown_087202E8 + (*(int *)(param_1 + 0x40) >> 3) * 0xc;
  sub_08019B4E(param_1);
  *(uint *)(param_1 + 4) =
       (*(int *)(*(int *)(param_1 + 0x1c) + 0x1a4) >> 8) +
       (uint)(*(byte *)(*(int *)(param_1 + 0x1c) + 0x19d) >> 1) + 1;
  return;
}

