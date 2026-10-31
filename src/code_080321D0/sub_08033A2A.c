/* sub_08033A2A  (original: 0x08033A2A-0x08033AF6 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int __call_via_r1();
extern int * volatile DAT_03001c34;
extern uint volatile DAT_03000f94;
extern ushort volatile DAT_03003304;
extern undefined4 volatile DAT_03001b00;


undefined4 sub_08033A2A(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  unsigned int __frame[12];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_30 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x10))
#define iStack_18 (*(int *)((char *)__frame + 0x18))
  piVar1 = DAT_03001c34;
  if (DAT_03001c34 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    iVar3 = __call_via_r1(DAT_03001c34,*(int *)(*DAT_03001c34 + 0x80) + *DAT_03001c34);
    if (*(short *)(iVar3 + 0x16) < 1) {
      uVar2 = 1;
    }
    else if ((undefined4 *)piVar1[5] == &DAT_03001b00) {
      if ((DAT_03003304 & 0xf3) == 0) {
        if (10 < (int)(DAT_03000f94 - *(int *)(param_1 + 4))) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
      }
      else {
        *(uint *)(param_1 + 4) = DAT_03000f94;
        iVar3 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar3;
        if (8 < iVar3) {
          __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
          return 1;
        }
      }
      if ((DAT_03000f94 & 0xf) == 0) {
        uStack_20 = 0;
        iStack_18 = (uint)*(ushort *)((int)param_2 + 0x1b2) << 10;
        __call_via_r2(piVar1,auStack_30,*(int *)(*piVar1 + 0x5c) + *piVar1);
        __call_via_r2(param_2,&iStack_18,*(int *)(*param_2 + 0x60) + *param_2);
      }
      iVar3 = __call_via_r1(piVar1,*(int *)(*piVar1 + 0x80) + *piVar1);
      if (*(short *)(iVar3 + 0x16) < 1) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

