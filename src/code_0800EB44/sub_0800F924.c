/* sub_0800F924  (original: 0x0800F924-0x0800F954 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009930();
extern int sub_0800FDFA();
extern undefined4 volatile DAT_03001a54;


void sub_0800F924(int param_1)

{
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_18 ((undefined1 *)((char *)__frame + 0x0))
  if (*(char *)(param_1 + 0x291) == '\0') {
    *(undefined1 *)(param_1 + 0x291) = 1;
    sub_0800FDFA(auStack_18,param_1);
    sub_08009930(auStack_18,DAT_03001a54,1);
  }
  return;
}

