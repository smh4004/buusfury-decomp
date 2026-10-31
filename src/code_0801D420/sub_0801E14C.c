/* sub_0801E14C  (original: 0x0801E14C-0x0801E164 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int ScriptVM_Run();


void sub_0801E14C(int param_1)

{
  unsigned int __frame[28];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_70 ((undefined4 *)((char *)__frame + 0x0))
#define local_2c (*(undefined4 *)((char *)__frame + 0x44))
  local_70[0] = 0;
  local_2c = 0;
  ScriptVM_Run(local_70,*(undefined4 *)(param_1 + 0x30),0);
  return;
}

