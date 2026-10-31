/* sub_08007368  (original: 0x08007368-0x08007386 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int ScriptVM_Run();


void sub_08007368(int param_1)

{
  unsigned int __frame[55];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_dc ((undefined4 *)((char *)__frame + 0x0))
#define local_98 (*(undefined4 *)((char *)__frame + 0x44))
  if (*(int *)(param_1 + 0x10) != 0) {
    local_dc[0] = 0;
    local_98 = 0;
    ScriptVM_Run(local_dc,*(int *)(param_1 + 0x10),param_1 + 0x14);
  }
  return;
}

