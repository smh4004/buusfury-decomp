/* sub_080331EC  (original: 0x080331EC-0x080332E0 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0800FDFA();
extern undefined4 volatile DAT_03001c34;


int sub_080331EC(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_40 (*(int *)((char *)__frame + 0x0))
#define iStack_3c (*(int *)((char *)__frame + 0x4))
#define iStack_38 (*(int *)((char *)__frame + 0x8))
#define iStack_34 (*(int *)((char *)__frame + 0xc))
#define iStack_30 (*(int *)((char *)__frame + 0x10))
#define iStack_2c (*(int *)((char *)__frame + 0x14))
#define iStack_28 (*(int *)((char *)__frame + 0x18))
#define iStack_24 (*(int *)((char *)__frame + 0x1c))
#define iStack_20 (*(int *)((char *)__frame + 0x20))
#define iStack_1c (*(int *)((char *)__frame + 0x24))
  iVar2 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2);
  if (iVar2 != 0) {
    sub_0800FDFA(&iStack_40,DAT_03001c34);
    iStack_2c = iStack_3c + iStack_34 >> 1;
    iStack_30 = iStack_40 + iStack_38 >> 1;
    sub_0800FDFA(&iStack_28,param_2);
    iStack_30 = iStack_30 - (iStack_28 + iStack_20 >> 1);
    iStack_2c = iStack_2c - (iStack_24 + iStack_1c >> 1);
    iVar2 = iStack_30;
    if (iStack_30 < 0) {
      iVar2 = -iStack_30;
    }
    iVar3 = iStack_2c;
    if (iStack_2c < 0) {
      iVar3 = -iStack_2c;
    }
    cVar1 = (char)param_2[4];
    if (cVar1 == '\0') {
      if ((iVar2 < 0x10) && (0x10 < iStack_2c)) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
    else if (cVar1 == '\x01') {
      if ((iVar2 < 0x10) && (iStack_2c < -0x10)) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
    else if (cVar1 == '\x02') {
      if ((iVar3 < 0x10) && (iStack_30 < -0x10)) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
    else if (cVar1 == '\x03') {
      if ((iVar3 < 0x10) && (0x10 < iStack_30)) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

