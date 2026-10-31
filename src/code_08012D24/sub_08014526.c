/* sub_08014526  (original: 0x08014526-0x08014588 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080066EC();
extern int sub_0803F58C();
extern int sub_0803F540();
extern int sub_08006718();
extern int sub_08014424();
extern int sub_08049150();


void sub_08014526(int param_1)

{
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_40 ((undefined1 *)((char *)__frame + 0x0))
  sub_0803F540(auStack_40,0xf0,0xa0);
  sub_08006718(param_1,auStack_40,0x1e,0);
  if (*(int *)(param_1 + 0x11c) == 0) {
    sub_08014424(param_1,auStack_40,param_1 + 300);
  }
  else {
    sub_08014424(param_1,auStack_40,param_1 + 0x1d0);
  }
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}

