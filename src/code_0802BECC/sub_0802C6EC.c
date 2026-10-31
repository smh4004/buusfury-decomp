/* sub_0802C6EC  (original: 0x0802C6EC-0x0802C77A in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern int sub_0800FE78();
extern undefined volatile gUnknown_086B8098;
extern int * volatile DAT_03001c34;


undefined4 sub_0802C6EC(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_48 ((undefined1 *)((char *)__frame + 0x0))
#define auStack_44 ((undefined1 *)((char *)__frame + 0x4))
#define uStack_34 (*(undefined1 *)((char *)__frame + 0x14))
#define uStack_30 (*(undefined4 *)((char *)__frame + 0x18))
#define puStack_2c (*(undefined * *)((char *)__frame + 0x1c))
#define iStack_28 (*(int *)((char *)__frame + 0x20))
#define iStack_18 (*(int *)((char *)__frame + 0x30))
  piVar1 = DAT_03001c34;
  if (*(int *)(param_1 + 0xc) == 0) {
    if (DAT_03001c34 == (int *)0x0) {
      uVar2 = 1;
    }
    else {
      piVar3 = (int *)(param_2 + 0x1a0);
      if (*(int *)(param_1 + 0x10) == 0) {
        *piVar3 = *piVar3 + *(int *)(param_1 + 4);
        *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + *(int *)(param_1 + 8);
        uStack_34 = *(undefined1 *)(param_2 + 0x10);
        puStack_2c = &gUnknown_086B8098;
        uStack_30 = 0x400;
        auStack_48[0] = 0;
        iStack_28 = param_2;
        iStack_18 = param_2;
        sub_0800FE78(auStack_44);
        iVar4 = *piVar1;
        iVar4 = __call_via_r3(piVar1,1,auStack_48,*(int *)(iVar4 + 0x24) + iVar4);
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + 0x10) = 0x10;
        }
      }
      else {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        *piVar3 = *piVar3 - *(int *)(param_1 + 4);
        *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) - *(int *)(param_1 + 8);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

