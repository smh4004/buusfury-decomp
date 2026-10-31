/* sub_08032DC8  (original: 0x08032DC8-0x08032F6C in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern int __call_via_r2();
extern int sub_0802A81C();
extern int sub_08000158();
extern int sub_08009904();
extern int __16__rt_sdiv();
extern int sub_0800FE34();
extern int sub_080116FC();
extern int sub_08011C70();
extern int sub_0801191A();
extern int sub_08011C0C();
extern int sub_0803FACC();
extern undefined4 volatile DAT_030019a4;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086FD9D0;


undefined4 sub_08032DC8(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  unsigned int __frame[31];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_7c (*(int *)((char *)__frame + 0x0))
#define local_78 (*(int *)((char *)__frame + 0x4))
#define local_74 (*(int *)((char *)__frame + 0x8))
#define local_70 (*(int *)((char *)__frame + 0xc))
#define local_6c (*(int *)((char *)__frame + 0x10))
#define local_68 (*(int *)((char *)__frame + 0x14))
#define local_64 (*(int *)((char *)__frame + 0x18))
#define local_60 (*(int *)((char *)__frame + 0x1c))
#define local_5c (*(undefined4 *)((char *)__frame + 0x20))
#define local_58 (*(undefined4 *)((char *)__frame + 0x24))
#define local_54 (*(int * *)((char *)__frame + 0x28))
#define local_50 (*(int * *)((char *)__frame + 0x2c))
  local_58 = 0;
  local_5c = sub_08000158(0x2f);
  sub_08011C70(&DAT_03001c4c,6,&local_5c);
  piVar3 = local_54;
  if (local_54 == param_2) {
    piVar3 = local_50;
  }
  param_2[0xa3] = param_2[0xa3] + piVar3[0xa3];
  piVar4 = param_2 + 0x68;
  local_7c = *piVar4 + piVar3[0x68];
  local_78 = param_2[0x69] + piVar3[0x69];
  local_74 = local_7c;
  local_70 = local_78;
  iVar1 = __16__rt_sdiv(0x200,local_7c * 0x100);
  local_78 = __16__rt_sdiv(0x200,local_70 << 8);
  local_7c = iVar1;
  local_6c = iVar1;
  local_68 = local_78;
  local_64 = iVar1;
  local_60 = local_78;
  iVar1 = sub_08000158(0x2f);
  iVar1 = sub_08009904(&DAT_030019a4,&local_64,iVar1 + 8);
  if (iVar1 == 0) {
    local_64 = *piVar4;
    local_60 = param_2[0x69];
  }
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  *piVar4 = local_64;
  param_2[0x69] = local_60;
  __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    iVar1 = sub_0803FACC(0x1000);
    iVar1 = iVar1 + 0x1000;
    sub_0800FE34(&local_7c,param_2);
    local_6c = local_7c + local_74 >> 1;
    local_68 = local_78 + local_70 >> 1;
    uVar2 = sub_0802A81C(0,&local_6c,&gUnknown_086FD9D0,4,iVar1,0x400,0x37,local_68);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    iVar1 = sub_0803FACC(0x1000);
    sub_0800FE34(&local_7c,piVar3);
    local_6c = local_7c + local_74 >> 1;
    local_68 = local_78 + local_70 >> 1;
    uVar2 = sub_0802A81C(0,&local_6c,&gUnknown_086FD9D0,4,iVar1 + 0x1000,0x400,0x37,local_6c,
                         local_68);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  sub_08011944(&DAT_03001c4c,piVar3);
  sub_08011C0C(&DAT_03001c4c,0x20,param_2);
  return 1;
}

