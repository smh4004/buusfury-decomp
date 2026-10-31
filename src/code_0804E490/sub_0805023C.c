/* sub_0805023C  (original: 0x0805023C-0x080502A0 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08046DD0();


int sub_0805023C(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  sub_08046DD0(param_1,param_2,0x56,param_4,param_4);
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)(param_2 + 0x56);
  *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)(param_2 + 0x57);
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_2 + 0x58);
  *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_2 + 0x5a);
  *(undefined2 *)(param_1 + 0x5c) = *(undefined2 *)(param_2 + 0x5c);
  *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)(param_2 + 0x5e);
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_2 + 0x62);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_2 + 100);
  *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_2 + 0x66);
  return param_1;
}

