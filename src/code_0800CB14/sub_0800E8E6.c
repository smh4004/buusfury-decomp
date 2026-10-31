/* sub_0800E8E6  (original: 0x0800E8E6-0x0800E8FE in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int volatile DAT_03000f94;
extern undefined volatile _0804A7A0;


undefined4 sub_0800E8E6(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_28 (*(int *)((char *)__frame + 0x0))
#define uStack_24 (*(undefined4 *)((char *)__frame + 0x4))
#define iStack_20 (*(int *)((char *)__frame + 0x8))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0xc))
#define iStack_18 (*(int *)((char *)__frame + 0x10))
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A7A0;
    *(undefined1 *)(puVar1 + 1) = 0xc;
  }
  sub_0800ED80(param_1,puVar1);
  sub_0800FE78(&iStack_20,param_1);
  iStack_28 = iStack_20 + iStack_18 >> 1;
  uStack_24 = uStack_1c;
  piVar3 = (int *)(param_2 + 0x18);
  if ((DAT_03000f94 - *(int *)(param_1 + 0x1d4) < 8) &&
     (iVar4 = *(int *)(param_1 + 0x1d8), iVar4 != 0)) {
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + *piVar3;
    sub_0800AB54();
  }
  else {
    *(int *)(param_1 + 0x1d4) = DAT_03000f94;
    if (*(int *)(param_2 + 0x10) == 0) {
      uVar2 = sub_0800AD3E(&iStack_28,piVar3,3,0);
    }
    else {
      uVar2 = sub_0800AD3E(&iStack_28,piVar3,4,1);
    }
    *(undefined4 *)(param_1 + 0x1d8) = uVar2;
  }
  return 0;
}

