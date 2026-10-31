/* sub_080154D4  (original: 0x080154D4-0x08015516 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_0801514A();
extern int sub_080066EC();
extern int sub_0803F58C();
extern int sub_0803F540();
extern int sub_08006718();
extern int sub_08049150();


void sub_080154D4(undefined4 param_1)

{
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_40 ((undefined1 *)((char *)__frame + 0x0))
  sub_0803F540(auStack_40,0xf0,0xa0);
  sub_08006718(param_1,auStack_40,0x1c,0);
  sub_0801514A(param_1,auStack_40);
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}

