/* sub_0801EECA  (original: 0x0801EECA-0x0801EF5C in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08005096();
extern int sub_08049150();
extern int sub_080066EC();
extern int sub_0803F540();
extern int sub_0803DC96();
extern int sub_0801F810();
extern int sub_0803F58C();
extern int sub_0801F07C();


void sub_0801EECA(int param_1)

{
  uint uVar1;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_48 ((undefined1 *)((char *)__frame + 0x0))
#define uStack_44 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0x8))
  sub_0803F540(auStack_48,0x88,0x50);
  sub_08005096(auStack_48);
  *(uint *)(*(int *)(param_1 + 0x130) + 8) = (uint)(0 < *(int *)(param_1 + 0x11c));
  uVar1 = 50000;
  if (*(uint *)(param_1 + 0x114) < 50000) {
    uVar1 = *(uint *)(param_1 + 0x114);
  }
  *(uint *)(*(int *)(param_1 + 0x134) + 8) = (uint)(*(uint *)(param_1 + 0x11c) < uVar1);
  sub_080066EC(param_1,auStack_48);
  auStack_48[0] = 0;
  uStack_44 = 0x10;
  uStack_40 = 0x10;
  sub_0801F810(param_1 + 0x114,auStack_48);
  auStack_48[0] = 1;
  uStack_44 = 0x44;
  uStack_40 = 0x2f;
  sub_0803DC96(auStack_48,sub_0801F07C,*(undefined4 *)(param_1 + 0x11c));
  sub_08049150((int)auStack_48,0x6009640);
  sub_0803F58C(auStack_48,0);
  return;
}

