/* sub_08039D98  (original: 0x08039D98-0x08039EB8 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int sub_080549B4();
extern int sub_080491A0();
extern int sub_08054B3C();
extern int sub_080532E8();
extern int sub_08054A64();
extern int sub_0803D5B8();
extern int sub_08054ADC();
extern undefined volatile _0804A800;


undefined4 * sub_08039D98(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define aiStack_2c ((int *)((char *)__frame + 0x0))
#define iStack_20 (*(int *)((char *)__frame + 0xc))
#define iStack_1c (*(int *)((char *)__frame + 0x10))
#define iStack_18 (*(int *)((char *)__frame + 0x14))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1c), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804A800;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 4);
    *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(param_2 + 6);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 8);
    iStack_20 = (int)*(short *)(param_2 + 4) - (*(int *)(param_3 + 0x1a0) >> 8);
    iStack_1c = (int)*(short *)(param_2 + 6) - (*(int *)(param_3 + 0x1a4) >> 8);
    iStack_18 = (int)*(short *)(param_2 + 8) - (*(int *)(param_3 + 0x1a8) >> 10);
    aiStack_2c[0] = iStack_20;
    if (iStack_20 < 0) {
      aiStack_2c[0] = -iStack_20;
    }
    aiStack_2c[1] = iStack_1c;
    if (iStack_1c < 0) {
      aiStack_2c[1] = -iStack_1c;
    }
    aiStack_2c[2] = iStack_18;
    if (iStack_18 < 0) {
      aiStack_2c[2] = -iStack_18;
    }
    piVar1 = aiStack_2c + 1;
    if (aiStack_2c[1] <= aiStack_2c[2]) {
      piVar1 = aiStack_2c + 2;
    }
    if (*piVar1 < aiStack_2c[0]) {
      piVar1 = aiStack_2c;
    }
    iVar2 = __16__rt_sdiv(*(undefined2 *)(param_2 + 10),*piVar1 << 8);
    param_1[6] = iVar2;
    if (iVar2 < 1) {
      param_1[6] = 1;
    }
    else {
      uVar3 = __16__rt_sdiv(iVar2,iStack_20 << 8);
      param_1[3] = uVar3;
      uVar3 = __16__rt_sdiv(iVar2,iStack_1c << 8);
      param_1[4] = uVar3;
      uVar3 = __16__rt_sdiv(iVar2,iStack_18 << 10);
      param_1[5] = uVar3;
      uVar3 = sub_08054ADC(iStack_1c);
      sub_08054ADC(iStack_20);
      uVar4 = sub_080549B4();
      uVar5 = sub_080549B4(uVar3);
      sub_080491A0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar4,
                   (int)((ulonglong)uVar4 >> 0x20));
      uVar3 = sub_080532E8();
      uVar3 = sub_08054B3C(uVar3,0x3e22f984);
      sub_08054B3C(uVar3,0x44800000);
      uVar3 = sub_08054A64();
      *(undefined4 *)(param_3 + 0x1ac) = uVar3;
    }
  }
  return param_1;
}

