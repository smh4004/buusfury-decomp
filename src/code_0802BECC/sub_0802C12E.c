/* sub_0802C12E  (original: 0x0802C12E-0x0802C17C in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int __call_via_r2();
extern int sub_0801599C();
extern int sub_0800ED18();
extern undefined4 volatile DAT_03001c34;
extern undefined4 volatile DAT_03003074;
extern undefined volatile _08049ACC;
extern undefined volatile _0804AE70;


void sub_0802C12E(undefined4 param_1,int param_2)

{
  int iVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(undefined * *)((char *)__frame + 0x0))
#define local_10 (*(int * *)((char *)__frame + 0x4))
#define local_c (*(undefined4 *)((char *)__frame + 0x8))
  iVar1 = 0;
  local_10 = (int *)0x0;
  local_c = DAT_03001c34;
  local_14 = &_0804AE70;
  if (param_2 != 0) {
    iVar1 = param_2 + 0x18c;
  }
  sub_0801599C(&local_14,iVar1);
  sub_0800ECDA(param_2,0x13);
  sub_0800ED18(param_2,&DAT_03003074);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}

