/* sub_0800F76E  (original: 0x0800F76E-0x0800F7F2 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009930();
extern int sub_08049138();
extern int sub_0800A9FE();
extern int sub_0800FDFA();
extern int volatile DAT_03001bb0;
extern undefined4 volatile DAT_03001a54;
extern undefined4 volatile DAT_03001bb4;
extern undefined4 volatile DAT_03001bb8;
extern undefined volatile _0804C484;


void sub_0800F76E(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_20 ((undefined1 *)((char *)__frame + 0x0))
  *param_1 = &_0804C484;
  if (*(char *)((int)param_1 + 0x291) == '\0') {
    sub_0800FDFA(auStack_20,param_1);
    sub_08009930(auStack_20,DAT_03001a54,1);
  }
  iVar1 = 0;
  if (0 < DAT_03001bb0) {
    do {
      if ((undefined4 *)(&DAT_03001bb4)[iVar1] == param_1) goto _0800F7BC;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_03001bb0);
  }
  iVar1 = -1;
_0800F7BC:
  DAT_03001bb0 = DAT_03001bb0 + -1;
  if (DAT_03001bb0 - iVar1 != 0) {
    sub_08049138((int)(&DAT_03001bb4 + iVar1),(int)(&DAT_03001bb8 + iVar1),
                 (DAT_03001bb0 - iVar1) * 4);
  }
  sub_0800A9FE(param_1 + 0x8e,0);
  piVar2 = (int *)param_1[0x8b];
  if (piVar2 != (int *)0x0) {
    __call_via_r1(piVar2,*(int *)(*piVar2 + 4) + *piVar2);
  }
  sub_0800E85E(param_1,0);
  if (param_2 != 0) {
    sub_0803D63C(param_1);
  }
  return;
}

