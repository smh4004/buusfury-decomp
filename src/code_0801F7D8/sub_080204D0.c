/* sub_080204D0  (original: 0x080204D0-0x08020504 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08005096();
extern int sub_08049150();
extern int sub_080066EC();
extern int sub_0803F540();
extern int sub_0803F58C();


void sub_080204D0(undefined4 param_1)

{
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_40 ((undefined1 *)((char *)__frame + 0x0))
  sub_0803F540(auStack_40,0x80,0x38);
  sub_08005096(auStack_40);
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6009640);
  sub_0803F58C(auStack_40,0);
  return;
}

