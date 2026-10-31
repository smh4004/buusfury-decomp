/* sub_0800A624  (original: 0x0800A624-0x0800A64A in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, r0.
 */
#include "ghidra_types.h"
extern int volatile DAT_03001c34;
extern undefined4 volatile DAT_03001a4c;
extern undefined4 volatile DAT_03001a54;


int sub_0800A624(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_24 (*(int *)((char *)__frame + 0x0))
#define iStack_20 (*(int *)((char *)__frame + 0x4))
#define iStack_1c (*(int *)((char *)__frame + 0x8))
#define iStack_18 (*(int *)((char *)__frame + 0xc))
  if (((*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x38)) &&
      (*(int *)(param_1 + 0x4c) <= *(int *)(param_1 + 0x3c))) &&
     (*(int *)(param_1 + 0x40) <= *(int *)(param_1 + 0x50))) {
    if (*(int *)(param_1 + 0x44) <= *(int *)(param_1 + 0x54)) {
      if (((DAT_03001c34 == 0) || (sub_0800FDFA(&iStack_24), *(int *)(param_1 + 0x40) <= iStack_24))
         || ((iStack_1c <= *(int *)(param_1 + 0x38) ||
             ((*(int *)(param_1 + 0x44) <= iStack_20 || (iStack_18 <= *(int *)(param_1 + 0x3c)))))))
      {
        iVar3 = param_1 + 0x28;
        sub_08009930(iVar3,DAT_03001a4c,1);
        sub_08009930(iVar3,DAT_03001a54,1);
        iVar1 = sub_08009324(param_1 + 0x38,DAT_03001a4c);
        iVar2 = param_1 + 0x38;
        if (iVar1 == 0) {
          iVar2 = iVar3;
        }
        sub_08009930(iVar2,DAT_03001a4c,0);
        sub_08009930(iVar2,DAT_03001a54,0);
      }
      else {
        iVar1 = 0;
      }
      return iVar1;
    }
  }
  return 0;
}

