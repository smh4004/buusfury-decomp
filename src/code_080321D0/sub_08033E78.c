/* sub_08033E78  (original: 0x08033E78-0x08033ED6 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801599C();
extern int __call_via_r2();
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03001c34;
extern undefined volatile _08049ACC;
extern undefined volatile _0804AE70;
extern undefined volatile _0804E030;


void sub_08033E78(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(undefined * *)((char *)__frame + 0x0))
#define local_14 (*(int * *)((char *)__frame + 0x4))
#define local_10 (*(undefined4 *)((char *)__frame + 0x8))
  iVar2 = 0;
  local_14 = (int *)0x0;
  local_10 = DAT_03001c34;
  local_18 = &_0804AE70;
  if (param_2 != 0) {
    iVar2 = param_2 + 0x18c;
  }
  sub_0801599C(&local_18,iVar2);
  puVar1 = (undefined4 *)sub_0803D5B8(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804E030;
  }
  sub_0800ECDA(param_2,4);
  sub_0800ED18(param_2,puVar1);
  local_18 = &_08049ACC;
  if (local_14 != (int *)0x0) {
    __call_via_r2(local_14,1,*(int *)*local_14 + *local_14);
  }
  return;
}

