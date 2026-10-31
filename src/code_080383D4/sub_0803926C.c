/* sub_0803926C  (original: 0x0803926C-0x0803934A in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int __call_via_r2();
extern int sub_0800F68C();
extern int sub_0801191A();
extern undefined volatile gUnknown_087113E0;
extern undefined volatile DAT_03001c4c;


void sub_0803926C(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_40 ((undefined1 *)((char *)__frame + 0x0))
#define local_34 (*(short *)((char *)__frame + 0xc))
#define local_32 (*(short *)((char *)__frame + 0xe))
#define local_20 ((short *)((char *)__frame + 0x20))
  uVar1 = *(ushort *)((int)param_2 + 0x12) >> 3;
  uVar2 = uVar1 & 0xff;
  *(char *)((int)param_2 + 0x11) = (char)uVar1;
  if (4 < uVar2) {
    *(char *)((int)param_2 + 0x11) = '\x03' - (char)((int)((uVar2 + 1) * -0x80000000) >> 0x1f);
  }
  if (*(ushort *)((int)param_2 + 0x12) == 0x28) {
    local_20[0] = 8;
    local_20[1] = 0xc;
    local_20[2] = 8;
    local_20[3] = -0xc;
    local_20[4] = -0xc;
    local_20[5] = 8;
    local_20[6] = 0xc;
    local_20[7] = 8;
    sub_08049138((int)auStack_40,0x877ae38,0x20);
    local_34 = (short)((uint)param_2[0x68] >> 8) + local_20[(uint)*(byte *)(param_2 + 4) * 2];
    local_32 = (short)((uint)param_2[0x69] >> 8) + local_20[(uint)*(byte *)(param_2 + 4) * 2 + 1];
    iVar3 = sub_0800F68C(0,auStack_40,&gUnknown_087113E0,0xffffffff);
    sub_0801191A(&DAT_03001c4c,iVar3);
    *(int **)(iVar3 + 500) = param_2;
    *(char *)(iVar3 + 0x10) = (char)param_2[4];
    iVar4 = param_2[0x7c];
    if (iVar4 == 0) {
      param_2[0x7c] = iVar3;
    }
    else {
      iVar5 = *(int *)(iVar4 + 0x1f8);
      while (iVar5 != 0) {
        iVar4 = *(int *)(iVar4 + 0x1f8);
        iVar5 = *(int *)(iVar4 + 0x1f8);
      }
      *(int *)(iVar4 + 0x1f8) = iVar3;
      *(int *)(iVar3 + 0x1fc) = iVar4;
    }
  }
  if (0x47 < *(ushort *)((int)param_2 + 0x12)) {
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  *(short *)((int)param_2 + 0x12) = *(short *)((int)param_2 + 0x12) + 1;
  return;
}

