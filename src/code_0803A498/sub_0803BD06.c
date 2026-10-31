/* sub_0803BD06  (original: 0x0803BD06-0x0803BD64 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_08000158();
extern int sub_0801599C();
extern int sub_08011C70();
extern undefined volatile DAT_03001c4c;
extern undefined volatile _08049ACC;
extern undefined volatile _0804AE70;


void sub_0803BD06(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(undefined * *)((char *)__frame + 0x0))
#define local_10 (*(int * *)((char *)__frame + 0x4))
#define local_c (*(int *)((char *)__frame + 0x8))
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  uVar1 = sub_08000158(0x34);
  local_c = sub_08011C70(&DAT_03001c4c,5,uVar1);
  if (local_c != 0) {
    piVar2 = (int *)0x0;
    local_10 = (int *)0x0;
    local_14 = &_0804AE70;
    if (param_2 != (int *)0x0) {
      piVar2 = param_2 + 99;
    }
    sub_0801599C(&local_14,piVar2);
    local_14 = &_08049ACC;
    if (local_10 != (int *)0x0) {
      __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
    }
  }
  return;
}

