/* sub_080121A8  (original: 0x080121A8-0x080121D8 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int ScriptVM_Run();
extern int sub_0803DB7C();


int sub_080121A8(int param_1,int param_2)

{
  unsigned int __frame[32];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_80 (*(undefined1 * *)((char *)__frame + 0x0))
#define local_7c (*(undefined4 *)((char *)__frame + 0x4))
#define auStack_78 ((undefined1 *)((char *)__frame + 0x8))
#define local_38 (*(undefined4 *)((char *)__frame + 0x48))
  local_7c = 0;
  local_38 = 0;
  ScriptVM_Run(&local_7c,param_2 + 8);
  local_80 = auStack_78;
  sub_0803DB7C(param_1 + 8,*(undefined4 *)(param_2 + 4),&local_80);
  return param_1 + 8;
}

