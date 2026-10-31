/* sub_0800425C  (original: 0x0800425C-0x080042FC in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 33% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801064C();
extern int sub_08012588();
extern int sub_0800FDFA();
extern int sub_08009324();
extern int volatile DAT_03001c34;
extern undefined4 volatile DAT_03001a50;
extern undefined volatile gUnknown_0877CCDC;
extern undefined volatile gUnknown_0877CD88;
extern undefined volatile gUnknown_0877CD58;


void sub_0800425C(int param_1)

{
  int iVar1;
  uint uVar2;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_20 ((undefined1 *)((char *)__frame + 0x0))
  if (((int)((uint)*(byte *)(param_1 + 1) << 0x1d) < 0) &&
     (iVar1 = *(int *)(param_1 + 0x4d4) + -1, *(int *)(param_1 + 0x4d4) = iVar1, iVar1 == 0)) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfb;
    sub_08012588(&gUnknown_0877CD58,0);
  }
  if (((int)((uint)*(byte *)(param_1 + 1) << 0x1b) < 0) &&
     (uVar2 = *(int *)(param_1 + 0x4d8) + 1, *(uint *)(param_1 + 0x4d8) = uVar2, 35999 < uVar2)) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xef;
    sub_08012588(&gUnknown_0877CD88,0);
  }
  if (((*(int *)(param_1 + 0x4dc) != 0) &&
      (iVar1 = *(int *)(param_1 + 0x4dc) + -1, *(int *)(param_1 + 0x4dc) = iVar1, iVar1 == 0)) &&
     (DAT_03001c34 != 0)) {
    sub_0801064C();
  }
  if (((int)((uint)*(byte *)(param_1 + 1) << 0x1a) < 0) && (DAT_03001c34 != 0)) {
    sub_0800FDFA(auStack_20);
    iVar1 = sub_08009324(auStack_20,DAT_03001a50);
    if (iVar1 == 0) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xdf;
      sub_08012588(&gUnknown_0877CCDC,0);
    }
  }
  return;
}

