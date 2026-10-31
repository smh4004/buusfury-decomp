/* sub_0800AB54  (original: 0x0800AB54-0x0800ABC8 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803DC96();
extern int sub_0804915C();
extern int sub_0803F58C();
extern int sub_08046E40();
extern int sub_0803F540();
extern undefined volatile DAT_06010000;
extern undefined volatile gUnknown_0806F150;
extern undefined volatile gUnknown_0806E050;
extern undefined volatile _0800AD88;


void sub_0800AB54(int param_1)

{
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_40 ((undefined1 *)((char *)__frame + 0x0))
#define local_3e (*(undefined1 *)((char *)__frame + 0x2))
#define local_3d (*(undefined1 *)((char *)__frame + 0x3))
#define local_3c (*(undefined4 *)((char *)__frame + 0x4))
#define local_38 (*(undefined4 *)((char *)__frame + 0x8))
#define local_34 (*(undefined * *)((char *)__frame + 0xc))
#define local_20 (*(undefined4 *)((char *)__frame + 0x20))
#define local_1c (*(undefined4 *)((char *)__frame + 0x24))
#define local_10 (*(undefined4 *)((char *)__frame + 0x30))
  sub_0803F540(local_40,0x20,8);
  local_34 = &gUnknown_0806F150;
  if (*(int *)(param_1 + 0x1c) == 0) {
    local_34 = &gUnknown_0806E050;
  }
  local_3d = (undefined1)*(undefined4 *)(param_1 + 0x18);
  local_3e = 1;
  local_20 = 0x803f70d;
  local_40[0] = 1;
  local_38 = 7;
  local_3c = 0x10;
  *(undefined1 *)(param_1 + 8) = 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0x10;
  sub_08046E40(local_1c,0,local_10);
  sub_0803DC96(local_40,&_0800AD88,*(int *)(param_1 + 0x14) + 0x3ff >> 10);
  sub_0804915C((int)local_40,(int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
               0x8071710);
  sub_0803F58C(local_40,0);
  return;
}

