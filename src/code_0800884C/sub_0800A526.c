/* sub_0800A526  (original: 0x0800A526-0x0800A5A8 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: equal, r0.
 */
#include "ghidra_types.h"
extern int sub_08009930();
extern int sub_0800FDFA();
extern int sub_08009324();
extern int volatile DAT_03001c34;
extern undefined4 volatile DAT_03001a4c;
extern undefined4 volatile DAT_03001a54;


int sub_0800A526(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
  if ((((DAT_03001c34 == 0) || (sub_0800FDFA(&local_24), *(int *)(param_1 + 0x40) <= local_24)) ||
      (local_1c <= *(int *)(param_1 + 0x38))) ||
     ((*(int *)(param_1 + 0x44) <= local_20 || (local_18 <= *(int *)(param_1 + 0x3c))))) {
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

