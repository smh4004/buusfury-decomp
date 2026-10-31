/* sub_0800D026  (original: 0x0800D026-0x0800D05C in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int sub_0803D63C();
extern int Wfz_LoadContainer();
extern int sub_0803D5B8();
extern undefined volatile DAT_06010000;


void sub_0800D026(int param_1)

{
  int a1;
  
  a1 = sub_0803D5B8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 4));
  Wfz_LoadContainer(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x2c),a1);
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0x16) * 0x20),a1,
               *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 4));
  sub_0803D63C(a1);
  return;
}

