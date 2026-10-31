/* sub_0801F99E  (original: 0x0801F99E-0x0801F9D8 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006718();
extern int sub_0801F882();
extern int sub_08049150();
extern int sub_0803F540();
extern int sub_0803F58C();


void sub_0801F99E(undefined4 param_1)

{
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_40 ((undefined1 *)((char *)__frame + 0x0))
  sub_0803F540(auStack_40,0xf0,0xa0);
  sub_08006718(param_1,auStack_40,0x4f,1);
  sub_0801F882(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}

