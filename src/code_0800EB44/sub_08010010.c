/* sub_08010010  (original: 0x08010010-0x0801003A in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_030019b0;


void sub_08010010(int param_1)

{
  unsigned int __frame[2];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_8 (*(undefined4 *)((char *)__frame + 0x0))
#define local_4 (*(undefined4 *)((char *)__frame + 0x4))
  local_4 = 0x1020200;
  local_8 = 0x30301;
  *(undefined1 *)(param_1 + 0x10) =
       *(undefined1 *)
        ((int)&local_8 +
        ((uint)(((*(int *)(param_1 + 0x1ac) >> 10) - (DAT_030019b0 >> 10)) * 0x1000000) >> 0x1d));
  return;
}

