/* sub_08011058  (original: 0x08011058-0x080110D6 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800E9D8();
extern int sub_0800FE78();
extern int __call_via_r2();
extern int sub_08010DDE();


undefined4 sub_08011058(int *param_1,int param_2,char *param_3)

{
  undefined4 uVar1;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_20 (*(int *)((char *)__frame + 0x0))
#define iStack_1c (*(int *)((char *)__frame + 0x4))
#define iStack_18 (*(int *)((char *)__frame + 0x8))
#define iStack_14 (*(int *)((char *)__frame + 0xc))
  if (param_2 == 0) {
    if (*(int **)(param_3 + 0x20) == param_1) {
      uVar1 = 0;
    }
    else if ((((*param_3 == '\x01') || (*param_3 == '\x02')) &&
             (sub_0800FE78(&iStack_20,param_1), *(int *)(param_3 + 4) < iStack_18)) &&
            (((iStack_20 < *(int *)(param_3 + 0xc) && (*(int *)(param_3 + 8) < iStack_14)) &&
             ((iStack_1c < *(int *)(param_3 + 0x10) && (param_1[0x73] != 0)))))) {
      sub_0800E9D8(param_1,param_3 + 0x14);
      __call_via_r2(param_1,param_3 + 0x14,*(int *)(*param_1 + 0x58) + *param_1);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = sub_08010DDE(param_1);
  }
  return uVar1;
}

