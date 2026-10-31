/* sub_0800A5A8  (original: 0x0800A5A8-0x0800A5EE in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08009930();
extern int sub_0800FDFA();
extern undefined4 volatile DAT_03001a4c;
extern undefined4 volatile DAT_03001a54;


void sub_0800A5A8(int param_1,undefined4 param_2)

{
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_20 ((undefined1 *)((char *)__frame + 0x0))
  sub_08009930(param_1 + 0x38,DAT_03001a4c,1);
  sub_08009930(param_1 + 0x38,DAT_03001a54,1);
  sub_0800FDFA(auStack_20,param_2);
  sub_08009930(auStack_20,DAT_03001a4c,0);
  sub_08009930(auStack_20,DAT_03001a54,0);
  return;
}

