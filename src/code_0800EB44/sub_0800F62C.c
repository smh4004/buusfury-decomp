/* sub_0800F62C  (original: 0x0800F62C-0x0800F68C in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int ScriptVM_Run();
extern undefined4 volatile DAT_03001010;
extern undefined4 volatile DAT_03001014;
extern undefined4 volatile DAT_03001018;
extern undefined4 volatile DAT_0300101c;
extern int volatile DAT_03001bac;
extern int volatile DAT_03001c50;
extern undefined4 volatile DAT_03001c54;


void sub_0800F62C(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int __frame[59];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_ec ((undefined4 *)((char *)__frame + 0x0))
#define uStack_a8 (*(undefined4 *)((char *)__frame + 0x44))
  DAT_03001010 = *(undefined4 *)(param_1 + 8);
  DAT_03001014 = *(undefined4 *)(param_1 + 0xc);
  DAT_03001018 = *(undefined4 *)(param_1 + 0x10);
  DAT_0300101c = *(undefined4 *)(param_1 + 0x14);
  iVar2 = 0;
  iVar1 = DAT_03001bac;
  if (0 < DAT_03001c50) {
    do {
      iVar1 = *(int *)(param_1 + 0x20);
      if ((&DAT_03001c54)[iVar2] == *(int *)(param_1 + 0x20)) break;
      iVar2 = iVar2 + 1;
      iVar1 = DAT_03001bac;
    } while (iVar2 < DAT_03001c50);
  }
  DAT_03001bac = iVar1;
  if (*(int *)(param_1 + 0x18) != 0) {
    auStack_ec[0] = 0;
    uStack_a8 = 0;
    ScriptVM_Run(auStack_ec,*(int *)(param_1 + 0x18),0);
  }
  __call_via_r1(*(undefined4 **)(param_1 + 0x1c),**(undefined4 **)(param_1 + 0x1c));
  DAT_03001bac = 0;
  return;
}

