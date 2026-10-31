/* sub_0800F740  (original: 0x0800F740-0x0800F76E in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009930();
extern int sub_0800FDFA();
extern undefined4 volatile DAT_03001a54;


void sub_0800F740(int param_1,undefined4 param_2)

{
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_1c ((undefined1 *)((char *)__frame + 0x0))
  if (*(char *)(param_1 + 0x291) == '\0') {
    sub_0800FDFA(auStack_1c,param_1);
    sub_08009930(auStack_1c,DAT_03001a54,param_2);
  }
  return;
}

