/* sub_08010DDE  (original: 0x08010DDE-0x08010E04 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int * volatile DAT_03001c34;
extern byte volatile DAT_03001068;
extern undefined1 volatile DAT_03001574;
extern undefined volatile gUnknown_086B82EC;


int * sub_08010DDE(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_28 (*(int *)((char *)__frame + 0x0))
#define iStack_24 (*(int *)((char *)__frame + 0x4))
#define iStack_20 (*(int *)((char *)__frame + 0x8))
#define iStack_1c (*(int *)((char *)__frame + 0xc))
#define local_18 (*(int * *)((char *)__frame + 0x10))
  local_18 = param_1 + 0x70;
  if (param_2 == 10) {
    sub_0801712C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18)
    ;
    DAT_03001c34 = (int *)0x0;
  }
  else if (param_2 < 0xb) {
    piVar2 = param_3 + 5;
    piVar1 = param_3 + 1;
    if (param_2 == 0) {
      if ((((((char)*param_3 == '\0') || ((char)*param_3 == '\x02')) &&
           (sub_0800FE78(&iStack_28,param_1), *piVar1 < iStack_20)) &&
          ((iStack_28 < param_3[3] && (param_3[2] < iStack_1c)))) && (iStack_24 < param_3[4])) {
        if (local_18[3] != 0) {
          Combat_Damage(param_1,piVar2);
          __call_via_r2(param_1,piVar2,*(int *)(*param_1 + 0x58) + *param_1);
        }
        return (int *)0x1;
      }
      return (int *)0x0;
    }
    if (param_2 == 1) {
      if ((((char)*param_3 == '\0') || ((char)*param_3 == '\x02')) &&
         ((sub_0800FDFA(&iStack_28,param_1), *piVar1 < iStack_20 &&
          (((iStack_28 < param_3[3] && (param_3[2] < iStack_1c)) && (iStack_24 < param_3[4])))))) {
        if (local_18[3] != 0) {
          Combat_Damage(param_1,piVar2);
          __call_via_r2(param_1,piVar2,*(int *)(*param_1 + 0x58) + *param_1);
        }
        return (int *)0x1;
      }
      return (int *)0x0;
    }
    if (param_2 == 2) {
      if (((((char)*param_3 == '\0') || ((char)*param_3 == '\x02')) &&
          ((sub_0800FE78(&iStack_28,param_1), *piVar1 < iStack_20 &&
           ((iStack_28 < param_3[3] && (param_3[2] < iStack_1c)))))) && (iStack_24 < param_3[4])) {
        return (int *)0x1;
      }
      return (int *)0x0;
    }
    if (param_2 == 9) {
      return param_1;
    }
  }
  else if (param_2 == 0xb) {
    sub_0801711C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18)
    ;
    DAT_03001c34 = param_1;
  }
  else {
    if (param_2 == 0x1a) {
      iVar3 = *(int *)param_1[0x8b];
      __call_via_r2((int *)param_1[0x8b],param_1,*(int *)(iVar3 + 0xc) + iVar3);
      return (int *)0x0;
    }
    if (param_2 == 0x28) {
      iVar3 = *param_3;
      iVar4 = param_3[1];
      sub_0800FE78(&iStack_28,param_1);
      if (iVar3 < iStack_28) {
        sub_0800FE78(&iStack_28,param_1);
        iVar3 = iStack_28;
      }
      sub_0800FE78(&iStack_28,param_1);
      if (iStack_20 < iVar3) {
        sub_0800FE78(&iStack_28,param_1);
        iVar3 = iStack_20;
      }
      sub_0800FE78(&iStack_28,param_1);
      if (iVar4 < iStack_24) {
        sub_0800FE78(&iStack_28,param_1);
        iVar4 = iStack_24;
      }
      sub_0800FE78(&iStack_28,param_1);
      if (iStack_1c < iVar4) {
        sub_0800FE78(&iStack_28,param_1);
        iVar4 = iStack_1c;
      }
      iVar4 = (*param_3 - iVar3) * (*param_3 - iVar3) + (param_3[1] - iVar4) * (param_3[1] - iVar4);
      iVar3 = param_3[2] * param_3[2];
      if ((iVar3 - iVar4 != 0 && iVar4 <= iVar3) && (local_18[3] != 0)) {
        Combat_Damage(param_1,param_3 + 3);
        __call_via_r2(param_1,param_3 + 3,*(int *)(*param_1 + 0x58) + *param_1);
        return (int *)0x1;
      }
      return (int *)0x0;
    }
  }
  piVar1 = (int *)sub_080102D8(param_1,param_2,param_3);
  return piVar1;
}

