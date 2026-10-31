/* sub_0803044C  (original: 0x0803044C-0x080304E4 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009904();
extern int sub_0801191A();
extern int sub_0800F68C();
extern int sub_08000158();
extern int sub_08011C70();
extern int sub_08049138();
extern undefined4 volatile DAT_030019a4;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_087113FC;


undefined4 sub_0803044C(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  unsigned int __frame[15];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_3c ((undefined1 *)((char *)__frame + 0x0))
#define uStack_30 (*(undefined2 *)((char *)__frame + 0xc))
#define uStack_2e (*(undefined2 *)((char *)__frame + 0xe))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x20))
#define iStack_18 (*(int *)((char *)__frame + 0x24))
  uVar1 = sub_08000158(0x2d);
  iVar2 = sub_08011C70(&DAT_03001c4c,5,uVar1);
  if (iVar2 == 0) {
    uStack_1c = *(undefined4 *)(param_2 + 0x1a0);
    iStack_18 = *(int *)(param_2 + 0x1a4) + 0x4000;
    iVar2 = sub_08000158(0x2d);
    iVar2 = sub_08009904(&DAT_030019a4,&uStack_1c,iVar2 + 8);
    if (iVar2 != 0) {
      sub_08049138((int)auStack_3c,0x875819c,0x20);
      uStack_30 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x1a0) >> 8);
      uStack_2e = (undefined2)((uint)*(undefined4 *)(param_2 + 0x1a4) >> 8);
      uVar1 = sub_0800F68C(0,auStack_3c,&gUnknown_087113FC,0xffffffff);
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
  }
  return 1;
}

