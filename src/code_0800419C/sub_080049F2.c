/* sub_080049F2  (original: 0x080049F2-0x08004A3A in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080502BC();
extern int sub_0803FC4E();
extern int sub_0803FBDE();
extern int sub_08004838();
extern undefined volatile DAT_03004a68;


void sub_080049F2(undefined4 param_1,int param_2)

{
  unsigned int __frame[561];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_8c4 ((undefined1 *)((char *)__frame + 0x0))
#define local_1c (*(undefined4 *)((char *)__frame + 0x8a8))
  sub_08004838(auStack_8c4);
  sub_080502BC(auStack_8c4,param_1);
  local_1c = sub_0803FC4E(auStack_8c4,0x8a8);
  sub_0803FBDE(&DAT_03004a68,param_2 * 0x8b0 + 0x10,auStack_8c4,0x8b0);
  return;
}

