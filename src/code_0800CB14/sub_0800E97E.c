/* sub_0800E97E  (original: 0x0800E97E-0x0800E9D8 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800AB54();
extern int sub_0800FE78();
extern int sub_0800AD3E();
extern int volatile DAT_03000f94;


void sub_0800E97E(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
#define local_14 (*(int *)((char *)__frame + 0x10))
  sub_0800FE78(&local_1c,param_1);
  local_24 = local_1c + local_14 >> 1;
  local_20 = local_18 + -2;
  if ((DAT_03000f94 - *(int *)(param_1 + 0x1dc) < 8) &&
     (iVar2 = *(int *)(param_1 + 0x1e0), iVar2 != 0)) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *param_2;
    sub_0800AB54();
  }
  else {
    *(int *)(param_1 + 0x1dc) = DAT_03000f94;
    uVar1 = sub_0800AD3E(&local_24,param_2,6,0);
    *(undefined4 *)(param_1 + 0x1e0) = uVar1;
  }
  return;
}

