/* sub_0803C4DC  (original: 0x0803C4DC-0x0803C576 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FDFA();
extern int sub_0800EE78();
extern int sub_0800ECDA();


void sub_0803C4DC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_2c (*(int *)((char *)__frame + 0x0))
#define local_28 (*(int *)((char *)__frame + 0x4))
#define local_24 (*(int *)((char *)__frame + 0x8))
#define local_20 (*(int *)((char *)__frame + 0xc))
  iVar5 = *(int *)(param_2 + 4);
  sub_0800ECDA(iVar5,0x14);
  sub_0800EE78(iVar5);
  sub_0800FDFA(&local_2c,iVar5);
  iVar2 = *(int *)(param_1 + 8) - (local_2c + local_24 >> 1);
  iVar3 = *(int *)(param_1 + 0xc) - (local_28 + local_20 >> 1);
  iVar4 = iVar2 * 2;
  if (iVar4 + iVar3 * 5 < 0 == SBORROW4(iVar4,iVar3 * -5)) {
    iVar2 = iVar2 * 0xc;
    if (iVar2 + iVar3 * 5 < 0 == SBORROW4(iVar2,iVar3 * -5)) {
      iVar1 = iVar4 + iVar3 * -5;
      if (iVar1 == 0 || iVar1 < 0 != SBORROW4(iVar4,iVar3 * 5)) {
        iVar4 = iVar2 + iVar3 * -5;
        if (iVar4 == 0 || iVar4 < 0 != SBORROW4(iVar2,iVar3 * 5)) {
          *(undefined4 *)(param_1 + 0x14) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x14) = 3;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 4;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined2 *)(iVar5 + 0x12) = 0;
  *(undefined1 *)(iVar5 + 8) = 0x38;
  *(char *)(iVar5 + 0x11) = (char)*(undefined4 *)(param_1 + 0x14) * '\x02' + '\x01';
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

