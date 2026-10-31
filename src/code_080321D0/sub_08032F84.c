/* sub_08032F84  (original: 0x08032F84-0x08032FE0 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int __16__rt_sdiv();


undefined4 sub_08032F84(undefined4 param_1,int *param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_28 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_24 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0xc))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x10))
#define uStack_14 (*(undefined4 *)((char *)__frame + 0x14))
#define uStack_10 (*(undefined4 *)((char *)__frame + 0x18))
  if (*(int *)(param_3 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uStack_28 = *(undefined4 *)param_3;
    uStack_24 = *(undefined4 *)(param_3 + 4);
    uStack_20 = *(undefined4 *)(param_3 + 8);
    uStack_1c = *(undefined4 *)(param_3 + 0xc);
    uStack_18 = *(undefined4 *)(param_3 + 0x10);
    uStack_14 = *(undefined4 *)(param_3 + 0x14);
    uStack_10 = *(undefined4 *)(param_3 + 0x18);
    *(char *)(param_2 + 0xa4) = *param_3;
    if ((char)param_2[4] == *param_3) {
      uStack_10 = __16__rt_sdiv(4,uStack_10);
    }
    iVar2 = __call_via_r2(param_2,&uStack_28,*(int *)(*param_2 + 0x58) + *param_2);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}

