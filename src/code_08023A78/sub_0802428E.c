/* sub_0802428E  (original: 0x0802428E-0x080242C2 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049150();
extern int sub_0803F58C();
extern int sub_0803F540();
extern int sub_08005096();
extern int sub_080066EC();


void sub_0802428E(undefined4 param_1)

{
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_40 ((undefined1 *)((char *)__frame + 0x0))
  sub_0803F540(auStack_40,0x88,0x38);
  sub_08005096(auStack_40);
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6009640);
  sub_0803F58C(auStack_40,0);
  return;
}

