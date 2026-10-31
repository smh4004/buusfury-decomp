/* sub_0803287E  (original: 0x0803287E-0x08032948 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803282A();
extern int __call_via_r2();


void sub_0803287E(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(int *)((char *)__frame + 0x0))
#define local_14 (*(int *)((char *)__frame + 0x4))
  iVar2 = sub_0803282A();
  if (iVar2 != 0) {
    local_14 = param_2[0x69];
    local_18 = param_2[0x68];
    cVar1 = (char)param_2[4];
    if (cVar1 == '\0') {
      local_14 = local_14 + 0x40;
    }
    else if (cVar1 == '\x01') {
      local_14 = local_14 + -0x40;
    }
    else if (cVar1 == '\x02') {
      local_18 = local_18 + -0x40;
    }
    else if (cVar1 == '\x03') {
      local_18 = local_18 + 0x40;
    }
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    iVar2 = __call_via_r2(param_2,&local_18,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar2 == 0) {
      iVar2 = __call_via_r2(param_2,0,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar2 == 0) {
        __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
    else {
      param_2[0x68] = local_18;
      param_2[0x69] = local_14;
      iVar2 = __call_via_r2(param_2,1,*(int *)(*param_2 + 0x34) + *param_2);
      if (iVar2 == 0) {
        __call_via_r2(param_2,1,*(int *)(*param_2 + 0x28) + *param_2);
      }
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  }
  return;
}

