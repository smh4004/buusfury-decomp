/* sub_08033360  (original: 0x08033360-0x08033384 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int ScriptVM_Run();


uint sub_08033360(void)

{
  unsigned int __frame[28];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_70 (*(int *)((char *)__frame + 0x0))
#define local_6c (*(uint *)((char *)__frame + 0x4))
#define local_2c (*(undefined4 *)((char *)__frame + 0x44))
  local_70 = 0;
  local_2c = 0;
  ScriptVM_Run(&local_70);
  if (local_70 == 1) {
    local_6c = local_6c & 0xff;
  }
  else {
    local_6c = 0;
  }
#define local_6c (*(return *)((char *)__frame + 0x4))
}

