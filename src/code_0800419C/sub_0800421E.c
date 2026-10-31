/* sub_0800421E  (original: 0x0800421E-0x08004236 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int ScriptVM_Run();


void sub_0800421E(int param_1)

{
  unsigned int __frame[28];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_70 ((undefined4 *)((char *)__frame + 0x0))
#define local_2c (*(undefined4 *)((char *)__frame + 0x44))
  local_70[0] = 0;
  local_2c = 0;
  ScriptVM_Run(local_70,*(undefined4 *)(param_1 + 4),0);
  return;
}

