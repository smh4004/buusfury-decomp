/* sub_08013C02  (original: 0x08013C02-0x08013C66 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 75% of instructions covered.
 */
#include "ghidra_types.h"
extern int ScriptVM_Run();
extern int volatile DAT_03002b70;
extern int volatile DAT_03002b74;
extern int volatile DAT_03002b78;
extern int volatile DAT_03002b7c;
extern int volatile DAT_03002b80;
extern short volatile DAT_03002b60;


void sub_08013C02(int param_1,int param_2)

{
  unsigned int __frame[30];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_78 ((undefined4 *)((char *)__frame + 0x0))
#define local_34 (*(undefined4 *)((char *)__frame + 0x44))
  DAT_03002b70 = DAT_03002b70 + *(char *)(param_2 + 0x16);
  DAT_03002b74 = DAT_03002b74 + *(char *)(param_2 + 0x17);
  DAT_03002b78 = DAT_03002b78 + *(char *)(param_2 + 0x18);
  DAT_03002b7c = DAT_03002b7c + *(char *)(param_2 + 0x19);
  DAT_03002b80 = DAT_03002b80 + *(char *)(param_2 + 0x1a);
  DAT_03002b60 = DAT_03002b60 + (short)*(undefined4 *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | *(byte *)(param_2 + 0x24);
    local_78[0] = 0;
    local_34 = 0;
    ScriptVM_Run(local_78,*(undefined4 *)(param_2 + 0x28),0);
  }
  return;
}

