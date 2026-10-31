/* sub_0803516E  (original: 0x0803516E-0x080351EE in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801599C();
extern int __call_via_r2();
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern int __call_via_r1();
extern int * volatile DAT_03001c34;
extern undefined volatile _08049ACC;
extern undefined volatile _0804AE70;
extern undefined volatile _0804CD3C;


void sub_0803516E(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_18 (*(undefined * *)((char *)__frame + 0x0))
#define local_14 (*(int * *)((char *)__frame + 0x4))
#define local_10 (*(int * *)((char *)__frame + 0x8))
  iVar1 = __call_via_r1(DAT_03001c34,*(int *)(*DAT_03001c34 + 0x80) + *DAT_03001c34);
  if ((0 < *(short *)(iVar1 + 0x16)) && (DAT_03001c34[0x73] != 0)) {
    iVar1 = 0;
    local_14 = (int *)0x0;
    local_10 = DAT_03001c34;
    local_18 = &_0804AE70;
    if (param_2 != 0) {
      iVar1 = param_2 + 0x18c;
    }
    sub_0801599C(&local_18,iVar1);
    puVar2 = (undefined4 *)sub_0803D5B8(8);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804CD3C;
    }
    sub_0800ECDA(param_2,4);
    sub_0800ED18(param_2,puVar2);
    local_18 = &_08049ACC;
    if (local_14 != (int *)0x0) {
      __call_via_r2(local_14,1,*(int *)*local_14 + *local_14);
    }
  }
  return;
}

