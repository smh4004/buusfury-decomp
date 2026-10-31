/* sub_08006E24  (original: 0x08006E24-0x08006E3C in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 4/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080124F8();
extern int sub_08011AA0();
extern undefined volatile DAT_03001c4c;


void sub_08006E24(int param_1)

{
  sub_08011AA0(&DAT_03001c4c);
  sub_080124F8(*(undefined4 *)(param_1 + 4));
  return;
}

