/* sub_0802B684  (original: 0x0802B684-0x0802B6D2 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0801599C();
extern int sub_0800ED18();
extern int sub_0800ECDA();
extern undefined4 volatile DAT_03001c34;
extern undefined4 volatile DAT_0300305c;
extern undefined volatile _08049ACC;
extern undefined volatile _0804AE70;


void sub_0802B684(undefined4 param_1,int param_2)

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
  sub_0800ECDA(param_2,0x14);
  sub_0800ED18(param_2,&DAT_0300305c);
  local_14 = &_08049ACC;
  if (local_10 != (int *)0x0) {
    __call_via_r2(local_10,1,*(int *)*local_10 + *local_10);
  }
  return;
}

