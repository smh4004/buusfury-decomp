/* sub_080054BA  (original: 0x080054BA-0x08005578 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 46% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0800EECC();
extern int sub_0800EB60();
extern int __call_via_r1();
extern int sub_08011B04();
extern int sub_0801191A();
extern undefined4 volatile DAT_03001b0c;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_0805682C;


void sub_080054BA(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0x47] != param_1[0x4a]) {
    param_1[0x47] = param_1[0x4a];
    sub_08011B04(&DAT_03001c4c);
    iVar4 = 0;
    do {
      iVar3 = 0;
      piVar1 = param_1 + (param_1[0x47] + iVar4) * 0x20 + 0x4e;
      if (0 < *piVar1) {
        do {
          iVar2 = sub_0800EB60(0,piVar1[iVar3 * 3 + 1],&DAT_03001b0c);
          param_1[iVar4 * 8 + iVar3 + 0xae] = iVar2;
          if (piVar1[iVar3 * 3 + 2] == 0) {
            sub_0800EECC(iVar2,&gUnknown_0805682C);
            *(undefined1 *)(iVar2 + 0x10) = 1;
          }
          *(int *)(iVar2 + 0x6c) = iVar3 * 0x10 + 0x12;
          *(int *)(iVar2 + 0x70) = iVar4 * 0x34 + 0x44;
          sub_0801191A(&DAT_03001c4c,iVar2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    __call_via_r1(param_1,*(int *)(*param_1 + 0x2c) + *param_1);
  }
  return;
}

