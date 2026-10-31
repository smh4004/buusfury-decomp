/* sub_08033132  (original: 0x08033132-0x080331A0 in asm/code_080321D0.s)
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
extern undefined volatile _0804C690;


void sub_08033132(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_20 (*(undefined * *)((char *)__frame + 0x0))
#define local_1c (*(int * *)((char *)__frame + 0x4))
#define local_18 (*(undefined4 *)((char *)__frame + 0x8))
  iVar2 = 0;
  local_1c = (int *)0x0;
  local_18 = DAT_03001c34;
  local_20 = &_0804AE70;
  if (param_2 != 0) {
    iVar2 = param_2 + 0x18c;
  }
  sub_0801599C(&local_20,iVar2);
  uVar3 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = 0;
    *puVar1 = &_0804C690;
    puVar1[1] = 0;
    puVar1[5] = uVar3;
    puVar1[4] = 0;
  }
  *(undefined4 **)(param_1 + 8) = puVar1;
  sub_0800ECDA(param_2,3);
  sub_0800ED18(param_2,puVar1);
  local_20 = &_08049ACC;
  if (local_1c != (int *)0x0) {
    __call_via_r2(local_1c,1,*(int *)*local_1c + *local_1c);
  }
  return;
}

