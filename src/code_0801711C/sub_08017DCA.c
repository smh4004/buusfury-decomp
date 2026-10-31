/* sub_08017DCA  (original: 0x08017DCA-0x08017DF4 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08009930();
extern int sub_0800FDFA();
extern undefined4 volatile DAT_03001a4c;
extern undefined4 volatile DAT_03001a54;


void sub_08017DCA(undefined4 param_1)

{
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_18 ((undefined1 *)((char *)__frame + 0x0))
  sub_0800FDFA(auStack_18,param_1);
  sub_08009930(auStack_18,DAT_03001a4c,1);
  sub_08009930(auStack_18,DAT_03001a54,1);
  return;
}

