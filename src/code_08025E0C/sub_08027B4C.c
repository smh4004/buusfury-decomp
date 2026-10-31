/* sub_08027B4C  (original: 0x08027B4C-0x08027BCC in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801191A();
extern int sub_0800FF44();
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_08027CBC();
extern int sub_080192CE();
extern undefined4 volatile DAT_03001b10;
extern undefined volatile DAT_03001c4c;


void sub_08027B4C(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_28 ((undefined1 *)((char *)__frame + 0x0))
#define iStack_20 (*(int *)((char *)__frame + 0x8))
#define iStack_1c (*(int *)((char *)__frame + 0xc))
#define local_18 (*(undefined4 *)((char *)__frame + 0x10))
  uVar5 = *(undefined4 *)(param_2 + 4);
  iStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  sub_0800FF44(auStack_28,uVar5);
  sub_080192CE(auStack_28,local_18,param_1 + 0x10,param_1 + 8,*(undefined4 *)(param_1 + 0x14));
  sub_0800ECDA(uVar5,3);
  sub_0800ED18(uVar5,&DAT_03001b10);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = -iVar1;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  if (iVar4 < iVar2) {
    uVar5 = 3;
    if (iVar1 < 1) {
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 1;
    if (0 < iVar3) {
      uVar5 = 0;
    }
  }
  uVar5 = sub_08027CBC(0,auStack_28,param_1 + 8,uVar5);
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  sub_0801191A(&DAT_03001c4c,uVar5);
  return;
}

