/* sub_080089D8  (original: 0x080089D8-0x080089FC in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 47% of instructions covered.
 */
#include "ghidra_types.h"
extern int ScriptVM_Run();


uint sub_080089D8(int param_1)

{
  uint uVar1;
  unsigned int __frame[28];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_70 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_6c (*(uint *)((char *)__frame + 0x4))
#define uStack_2c (*(undefined4 *)((char *)__frame + 0x44))
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 >> 0x10 != 0) {
    uStack_70 = 0;
    uStack_2c = 0;
    ScriptVM_Run(&uStack_70,*(undefined4 *)(param_1 + 0x24),0);
    uVar1 = uStack_6c;
  }
  return uVar1;
}

