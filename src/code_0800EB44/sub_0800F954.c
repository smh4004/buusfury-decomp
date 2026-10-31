/* sub_0800F954  (original: 0x0800F954-0x0800F9A2 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009930();
extern int sub_0800FDFA();
extern int sub_08009324();
extern undefined4 volatile DAT_03001a54;


int sub_0800F954(int param_1)

{
  int iVar1;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_24 ((undefined1 *)((char *)__frame + 0x0))
  if (*(char *)(param_1 + 0x291) == '\0') {
    iVar1 = 1;
  }
  else {
    sub_0800FDFA(auStack_24,param_1);
    iVar1 = sub_08009324(auStack_24,DAT_03001a54);
    iVar1 = 1 - iVar1;
    *(undefined1 *)(param_1 + 0x291) = 0;
    sub_0800FDFA(auStack_24,param_1);
    sub_08009930(auStack_24,DAT_03001a54,0);
  }
  return iVar1;
}

