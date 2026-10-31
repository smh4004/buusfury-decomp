/* sub_0803DADA  (original: 0x0803DADA-0x0803DB7C in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0804001A();
extern int __call_via_r3();


void sub_0803DADA(byte *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_1c (*(int *)((char *)__frame + 0x0))
#define iStack_18 (*(int *)((char *)__frame + 0x4))
  psVar5 = param_2;
  while( true ) {
    for (; (*param_2 != 0 && (*param_2 != 10)); param_2 = param_2 + 1) {
    }
    iVar4 = (int)param_2 - (int)psVar5 >> 1;
    if (iVar4 != 0) {
      iVar2 = sub_0804001A(*(undefined4 *)(param_1 + 0xc),psVar5,iVar4);
      iStack_18 = *(int *)(param_1 + 8) + -0xc;
      bVar3 = *param_1 & 3;
      if ((*param_1 & 3) == 0) {
        iStack_1c = *(int *)(param_1 + 4);
        if (*param_2 == 0) {
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar2;
        }
      }
      else if (bVar3 == 1) {
        iStack_1c = *(int *)(param_1 + 4) - (iVar2 + 1 >> 1);
      }
      else if (bVar3 == 2) {
        iStack_1c = *(int *)(param_1 + 4) - iVar2;
      }
      do {
        psVar6 = psVar5 + 1;
        if (*psVar5 == 8) {
          sVar1 = *psVar6;
          psVar6 = psVar5 + 2;
          iVar4 = iVar4 + -1;
          param_1[3] = (byte)sVar1;
        }
        else {
          __call_via_r3(param_1,*psVar5,&iStack_1c,*(undefined4 *)(param_1 + 0x20));
        }
        iVar4 = iVar4 + -1;
        psVar5 = psVar6;
      } while (0 < iVar4);
    }
    if (((int)((uint)*param_1 << 0x1d) < 0) || (*param_2 == 0)) break;
    param_2 = param_2 + 1;
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uint)param_1[1];
    psVar5 = param_2;
  }
  return;
}

