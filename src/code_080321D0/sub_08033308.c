/* sub_08033308  (original: 0x08033308-0x0803333C in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int ScriptVM_Run();


undefined4 sub_08033308(int param_1,int param_2)

{
  undefined4 uVar1;
  unsigned int __frame[28];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_70 (*(int *)((char *)__frame + 0x0))
#define local_6c (*(int *)((char *)__frame + 0x4))
#define local_2c (*(undefined4 *)((char *)__frame + 0x44))
  local_70 = 0;
  local_2c = 0;
  ScriptVM_Run(&local_70,*(undefined4 *)(param_1 + 4),param_2 + 0x214);
  if (local_70 == 1) {
    if (local_6c == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

