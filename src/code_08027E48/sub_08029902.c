/* sub_08029902  (original: 0x08029902-0x0802995E in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int __call_via_r2();
extern int * volatile DAT_03001b94;
extern uint volatile DAT_03000f94;


undefined4 sub_08029902(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_28 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x10))
#define uStack_10 (*(undefined4 *)((char *)__frame + 0x18))
  piVar1 = DAT_03001b94;
  if ((DAT_03001b94 == (int *)0x0) || (DAT_03001b94[0x73] == 0)) {
    uVar2 = 1;
  }
  else {
    iVar3 = __call_via_r1(DAT_03001b94,*(int *)(*DAT_03001b94 + 0x80) + *DAT_03001b94);
    if (*(short *)(iVar3 + 0x16) < 1) {
      uVar2 = 1;
    }
    else {
      if ((DAT_03000f94 & 0x3f) == 0) {
        uStack_10 = 0x400;
        uStack_18 = 0;
        iVar3 = *piVar1;
        __call_via_r2(piVar1,auStack_28,*(int *)(iVar3 + 0x5c) + iVar3);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

