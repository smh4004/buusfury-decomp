/* sub_0801B880  (original: 0x0801B880-0x0801B914 in asm/code_0801B248.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int sub_0801191A();
extern int sub_0801952C();
extern int sub_0800FE34();
extern int sub_0800EB44();
extern int sub_080391AC();
extern int sub_08052FB4();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_0801B880(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  unsigned int __frame[15];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_3c (*(int *)((char *)__frame + 0x0))
#define local_38 (*(int *)((char *)__frame + 0x4))
#define auStack_34 ((undefined1 *)((char *)__frame + 0x8))
#define auStack_2c ((undefined1 *)((char *)__frame + 0x10))
#define local_24 (*(int *)((char *)__frame + 0x18))
#define local_20 (*(int *)((char *)__frame + 0x1c))
#define local_1c (*(undefined4 *)((char *)__frame + 0x20))
#define local_18 (*(undefined1 * *)((char *)__frame + 0x24))
  iVar2 = 0;
  local_1c = param_2;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      puVar3 = (undefined4 *)(iVar2 * 4 + param_1 + 8 + 4);
      sub_0800EB44(*puVar3,local_1c);
      sub_080391AC(*puVar3,0x11b);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  if (iVar2 < *(int *)(param_1 + 8)) {
    local_18 = auStack_2c;
    do {
      puVar3 = (undefined4 *)(iVar2 * 4 + param_1 + 8 + 4);
      sub_0800FE34(auStack_34,*puVar3);
      sub_08052FB4(&local_3c,auStack_34,local_18);
      local_24 = local_3c >> 1;
      local_20 = local_38 >> 1;
      sub_08011944(&DAT_03001c4c,*puVar3);
      uVar1 = sub_0801952C(0,&local_24,0x38);
      sub_0801191A(&DAT_03001c4c,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  sub_0803D63C(param_1);
  return;
}

