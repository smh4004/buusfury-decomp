/* sub_08018A92  (original: 0x08018A92-0x08018BCA in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FDFA();
extern int __call_via_r3();
extern int sub_08054A64();
extern int __call_via_r2();
extern int sub_08011C0C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086B80A0;


undefined4 sub_08018A92(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int __frame[29];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_74 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_70 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_6c (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_68 (*(undefined4 *)((char *)__frame + 0xc))
#define uStack_64 (*(undefined4 *)((char *)__frame + 0x10))
#define uStack_60 (*(undefined1 *)((char *)__frame + 0x14))
#define uStack_5c (*(undefined4 *)((char *)__frame + 0x18))
#define puStack_58 (*(undefined * *)((char *)__frame + 0x1c))
#define piStack_54 (*(int * *)((char *)__frame + 0x20))
#define piStack_44 (*(int * *)((char *)__frame + 0x30))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0x34))
#define uStack_3c (*(undefined4 *)((char *)__frame + 0x38))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x3c))
#define uStack_34 (*(undefined4 *)((char *)__frame + 0x40))
#define auStack_30 ((undefined1 *)((char *)__frame + 0x44))
#define piStack_20 (*(int * *)((char *)__frame + 0x54))
#define piStack_1c (*(int * *)((char *)__frame + 0x58))
#define local_18 (*(int * *)((char *)__frame + 0x5c))
  local_18 = param_2 + 0x70;
  iVar2 = *(int *)(*param_2 + 0x34) + *param_2;
  if (param_2[0x72] == 0) {
    iVar2 = __call_via_r2(param_2,9,iVar2);
    if (iVar2 == 0) {
      return 1;
    }
  }
  else {
    iVar2 = __call_via_r2(param_2,7,iVar2);
    if (iVar2 == 0) {
      __call_via_r2(param_2,7,*(int *)(*param_2 + 0x28) + *param_2);
    }
    iVar2 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  sub_0800FDFA(auStack_30,param_2);
  piStack_1c = param_2 + 0x68;
  piStack_20 = (int *)(param_1 + 4);
  *piStack_1c = *piStack_1c + *(int *)(param_1 + 4);
  param_2[0x69] = param_2[0x69] + *(int *)(param_1 + 8);
  sub_0800FDFA(&uStack_40,param_2);
  __call_via_r3(param_2,auStack_30,1,*(int *)(*param_2 + 0x4c) + *param_2);
  iVar2 = __call_via_r2(param_2,&uStack_40,*(int *)(*param_2 + 0x50) + *param_2);
  if (iVar2 == 0) {
    *piStack_1c = *piStack_1c - *piStack_20;
    piStack_1c[1] = piStack_1c[1] - *(int *)(param_1 + 8);
    __call_via_r3(param_2,auStack_30,0,*(int *)(*param_2 + 0x4c) + *param_2);
    if ((param_2[0xa5] != 0) || (param_2[0xa6] != 0)) {
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      uStack_68 = uStack_38;
      uStack_64 = uStack_34;
      uStack_60 = (undefined1)param_2[0xa4];
      puStack_58 = &gUnknown_086B80A0;
      piStack_54 = param_2;
      uStack_5c = sub_08054A64(0x43cccccd);
      piVar1 = local_18;
      auStack_74[0] = 1;
      local_18[3] = 0;
      piStack_44 = param_2;
      sub_08011C0C(&DAT_03001c4c,0,auStack_74);
      piVar1[3] = 1;
      return 1;
    }
  }
  else {
    __call_via_r3(param_2,&uStack_40,0,*(int *)(*param_2 + 0x4c) + *param_2);
  }
  return 0;
}

