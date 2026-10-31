/* sub_080089A0  (original: 0x080089A0-0x080089CC in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 52% of instructions covered.
 */
#include "ghidra_types.h"
extern int ScriptVM_Run();


int sub_080089A0(int param_1,int param_2)

{
  unsigned int __frame[28];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_70 (*(undefined4 *)((char *)__frame + 0x0))
#define iStack_6c (*(int *)((char *)__frame + 0x4))
#define uStack_2c (*(undefined4 *)((char *)__frame + 0x44))
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      param_2 = 1;
    }
    else {
      uStack_70 = 0;
      uStack_2c = 0;
      ScriptVM_Run(&uStack_70,*(undefined4 *)(param_1 + 0x28),0);
      param_2 = iStack_6c;
    }
  }
  return param_2;
}

