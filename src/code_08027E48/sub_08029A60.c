/* sub_08029A60  (original: 0x08029A60-0x08029B30 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FE78();
extern int __call_via_r2();
extern int volatile DAT_03001b94;


undefined4 sub_08029A60(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_2c (*(int *)((char *)__frame + 0x0))
#define iStack_28 (*(int *)((char *)__frame + 0x4))
#define iStack_24 (*(int *)((char *)__frame + 0x8))
#define iStack_20 (*(int *)((char *)__frame + 0xc))
#define iStack_1c (*(int *)((char *)__frame + 0x10))
#define iStack_18 (*(int *)((char *)__frame + 0x14))
#define iStack_14 (*(int *)((char *)__frame + 0x18))
#define iStack_10 (*(int *)((char *)__frame + 0x1c))
  iVar2 = DAT_03001b94;
  if (DAT_03001b94 == 0) {
    uVar3 = 0;
  }
  else if (*(byte *)(param_2 + 0x10) == (*(byte *)(DAT_03001b94 + 0x10) ^ 1)) {
    iVar4 = **(int **)(DAT_03001b94 + 0x14);
    iVar4 = __call_via_r2(*(int **)(DAT_03001b94 + 0x14),DAT_03001b94,*(int *)(iVar4 + 0x1c) + iVar4
                         );
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      sub_0800FE78(&iStack_1c,iVar2);
      sub_0800FE78(&iStack_2c,param_2);
      cVar1 = *(char *)(iVar2 + 0x10);
      if (cVar1 == '\0') {
        iStack_1c = iStack_1c + -4;
        iStack_14 = iStack_14 + 4;
        iStack_10 = iStack_10 + 0xf0;
      }
      else if (cVar1 == '\x01') {
        iStack_1c = iStack_1c + -4;
        iStack_14 = iStack_14 + 4;
        iStack_18 = iStack_18 + -0xf0;
      }
      else if (cVar1 == '\x02') {
        iStack_18 = iStack_18 + -4;
        iStack_10 = iStack_10 + 4;
        iStack_1c = iStack_1c + -0xf0;
      }
      else if (cVar1 == '\x03') {
        iStack_18 = iStack_18 + -4;
        iStack_10 = iStack_10 + 4;
        iStack_14 = iStack_14 + 0xf0;
      }
      if ((((iStack_2c < iStack_14) && (iStack_1c < iStack_24)) && (iStack_28 < iStack_10)) &&
         (iStack_18 < iStack_20)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

