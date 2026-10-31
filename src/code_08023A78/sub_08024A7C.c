/* sub_08024A7C  (original: 0x08024A7C-0x08024A9C in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 73% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _08049370;


void sub_08024A7C(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049370;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 6) = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}

