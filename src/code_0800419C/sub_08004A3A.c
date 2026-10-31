/* sub_08004A3A  (original: 0x08004A3A-0x08004A76 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FC4E();
extern int sub_0803FBDE();
extern int sub_08004838();
extern undefined volatile DAT_03004a68;


void sub_08004A3A(int param_1)

{
  unsigned int __frame[560];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_8c0 ((undefined1 *)((char *)__frame + 0x0))
#define local_18 (*(undefined4 *)((char *)__frame + 0x8a8))
  sub_08004838(auStack_8c0);
  local_18 = sub_0803FC4E(auStack_8c0,0x8a8);
  sub_0803FBDE(&DAT_03004a68,param_1 * 0x8b0 + 0x10,auStack_8c0,0x8b0);
  return;
}

