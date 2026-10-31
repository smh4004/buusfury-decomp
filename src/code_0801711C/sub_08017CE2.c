/* sub_08017CE2  (original: 0x08017CE2-0x08017DA2 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 11% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801246E();
extern int sub_080124D2();
extern int sub_0800FDFA();
extern int sub_080102D8();
extern int sub_0803D5B8();
extern int sub_0803D8A0();
extern int __call_via_r2();
extern undefined volatile _08049D18;
extern int * volatile DAT_03001bac;


undefined4 sub_08017CE2(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_48 ((undefined1 *)((char *)__frame + 0x0))
#define local_24 (*(int *)((char *)__frame + 0x24))
#define local_20 (*(int *)((char *)__frame + 0x28))
#define local_1c (*(int *)((char *)__frame + 0x2c))
#define local_18 (*(int *)((char *)__frame + 0x30))
  if (param_2 == 3) {
    if ((((param_1[0x74] == 0) || (sub_0800FDFA(&local_24,param_1), param_3[2] <= local_24)) ||
        (local_1c <= *param_3)) || ((param_3[3] <= local_20 || (local_18 <= param_3[1])))) {
      uVar3 = 0;
    }
    else {
      iVar1 = param_3[4];
      *(byte *)(param_1 + 4) = *(byte *)(iVar1 + 0x10) ^ 1;
      local_1c = *(int *)(iVar1 + 0x1a0) - param_1[0x68];
      local_18 = *(int *)(iVar1 + 0x1a4) - param_1[0x69];
      __call_via_r2(param_1,0,*(int *)(*param_1 + 0x28) + *param_1);
      sub_0801246E(auStack_48,param_1[0x74],param_1 + 0x6f,&local_1c,param_1 + 0x70);
      DAT_03001bac = param_1;
      puVar2 = (undefined4 *)sub_0803D5B8(8);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_08049D18;
        puVar2[1] = auStack_48;
      }
      sub_0803D8A0(puVar2);
      DAT_03001bac = (int *)0x0;
      sub_080124D2(auStack_48,0);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = sub_080102D8(param_1);
  }
  return uVar3;
}

