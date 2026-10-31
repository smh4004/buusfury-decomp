/* sub_0800423A  (original: 0x0800423A-0x0800424E in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int ScriptVM_Run();


void sub_0800423A(undefined4 param_1,undefined4 param_2)

{
  unsigned int __frame[28];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_70 ((undefined4 *)((char *)__frame + 0x0))
#define local_2c (*(undefined4 *)((char *)__frame + 0x44))
  local_70[0] = param_1;
  local_2c = param_1;
  ScriptVM_Run(local_70,param_2,0);
  return;
}

