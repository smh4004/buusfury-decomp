/* sub_0800D918  (original: 0x0800D918-0x0800D960 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803F540();
extern int sub_0804915C();
extern int sub_0803F58C();
extern int Wfz_LoadContainer();
extern undefined volatile DAT_06010000;


void sub_0800D918(int param_1)

{
  unsigned int __frame[20];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_50 ((undefined1 *)((char *)__frame + 0x0))
#define local_2c (*(undefined4 *)((char *)__frame + 0x24))
#define local_1c (*(undefined4 *)((char *)__frame + 0x34))
#define local_18 (*(undefined4 *)((char *)__frame + 0x38))
#define local_14 (*(undefined4 *)((char *)__frame + 0x3c))
#define local_10 (*(undefined4 *)((char *)__frame + 0x40))
  sub_0803F540(auStack_50,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
  Wfz_LoadContainer(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc),local_2c);
  local_1c = 0;
  local_18 = 0;
  local_14 = **(undefined4 **)(param_1 + 0x14);
  local_10 = (*(undefined4 **)(param_1 + 0x14))[1];
  sub_0804915C((int)auStack_50,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
               (int)&local_1c);
  sub_0803F58C(auStack_50,0);
  return;
}

