/* sub_0804EE04  (original: 0x0804EE04-0x0804EE24 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FDFA();
extern int sub_08009324();
extern undefined4 volatile DAT_03001a54;


void sub_0804EE04(void)

{
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_18 ((undefined1 *)((char *)__frame + 0x0))
  sub_0800FDFA(auStack_18);
  sub_08009324(auStack_18,DAT_03001a54);
  return;
}

