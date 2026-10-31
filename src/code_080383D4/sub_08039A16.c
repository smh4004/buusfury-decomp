/* sub_08039A16  (original: 0x08039A16-0x08039B74 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800797C();
extern int sub_080116FC();
extern int sub_0802A81C();
extern int sub_08049138();
extern int __call_via_r2();
extern int sub_08000158();
extern int sub_08011CCA();
extern int sub_0800F68C();
extern int sub_0803FACC();
extern int sub_0801191A();
extern undefined volatile gUnknown_08711274;
extern undefined volatile gUnknown_086FD9D0;
extern undefined volatile DAT_03001c4c;


void sub_08039A16(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[23];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_5c (*(undefined4 *)((char *)__frame + 0x0))
#define local_58 (*(undefined4 *)((char *)__frame + 0x4))
#define iStack_54 (*(int *)((char *)__frame + 0x8))
#define uStack_50 (*(undefined2 *)((char *)__frame + 0xc))
#define uStack_4e (*(undefined2 *)((char *)__frame + 0xe))
#define local_3c ((undefined4 *)((char *)__frame + 0x20))
  local_3c[0] = 0x68;
  local_3c[1] = 0x70;
  local_3c[2] = 0x78;
  local_3c[3] = 0x88;
  local_3c[4] = 0x98;
  local_3c[5] = 0x90;
  local_3c[6] = 0xb8;
  local_3c[7] = 0x88;
  local_3c[8] = 200;
  local_3c[9] = 0x70;
  if (*(short *)((int)param_2 + 0x176) < 0) {
    *(short *)((int)param_2 + 0x176) = *(short *)((int)param_2 + 0x176) + 3;
  }
  if (-1 < *(short *)((int)param_2 + 0x176)) {
    *(undefined2 *)((int)param_2 + 0x176) = 0;
    if (*(short *)((int)param_2 + 0x12) != 0) {
      *(short *)((int)param_2 + 0x12) = *(short *)((int)param_2 + 0x12) + -1;
    }
    *(char *)((int)param_2 + 0x11) = (char)(*(ushort *)((int)param_2 + 0x12) >> 3);
  }
  iVar2 = param_2[0x7c];
  *(undefined2 *)(iVar2 + 0x176) = *(undefined2 *)((int)param_2 + 0x176);
  iVar2 = *(int *)(iVar2 + 0x1f8);
  *(undefined2 *)(iVar2 + 0x176) = *(undefined2 *)((int)param_2 + 0x176);
  *(undefined2 *)(*(int *)(iVar2 + 0x1f8) + 0x176) = *(undefined2 *)((int)param_2 + 0x176);
  if (*(short *)((int)param_2 + 0x12) == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      sub_0800797C(0x46,0x1e);
      uVar1 = sub_08000158(0x99);
      iVar2 = sub_08011CCA(&DAT_03001c4c,5,uVar1);
      iVar3 = 0;
      *(int *)(param_1 + 8) = 5 - iVar2;
      if (0 < 5 - iVar2) {
        do {
          iVar2 = sub_080116FC(&DAT_03001c4c);
          if (0x3ff < iVar2) {
            iVar2 = sub_0803FACC(0x1000);
            local_58 = 0x37;
            local_5c = 0x400;
            uVar1 = sub_0802A81C(0,local_3c + iVar3 * 2,&gUnknown_086FD9D0,4,iVar2 + 0x1000);
            sub_0801191A(&DAT_03001c4c,uVar1);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 8));
      }
    }
    else if (*(int *)(param_1 + 4) == 0x10) {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          sub_08049138((int)&local_5c,0x877af78,0x20);
          uStack_50 = (undefined2)local_3c[iVar2 * 2];
          uStack_4e = (undefined2)local_3c[iVar2 * 2 + 1];
          uVar1 = sub_0800F68C(0,&local_5c,&gUnknown_08711274 + iStack_54 * 0x1c,0xffffffff);
          sub_0801191A(&DAT_03001c4c,uVar1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 8));
      }
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
      return;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return;
}

