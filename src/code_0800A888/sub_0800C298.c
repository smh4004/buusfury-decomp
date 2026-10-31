/* sub_0800C298  (original: 0x0800C298-0x0800C300 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803DC96();
extern int sub_0803F9B8();
extern int sub_0803F58C();
extern int sub_08046E40();
extern int sub_0803F540();
extern undefined volatile DAT_06010000;
extern undefined volatile _0800C434;
extern undefined volatile gUnknown_0806F4F4;


void sub_0800C298(int param_1)

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
  sub_0803F540(local_40,0x20,0x10);
  local_3d = *(undefined1 *)(*(int *)(param_1 + 0x14) + 5);
  local_3e = 1;
  local_20 = 0x803f5a5;
  local_34 = &gUnknown_0806F4F4;
  local_3c = 0x10;
  local_38 = 0xc;
  local_40[0] = 1;
  sub_08046E40(local_1c,0,local_10);
  if (*(char *)(*(int *)(param_1 + 0x14) + 5) != '\x02') {
    sub_0803DC96(local_40,&_0800C434,*(undefined1 *)(*(int *)(param_1 + 0x14) + 6));
  }
  sub_0803F9B8(local_40,&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20);
  sub_0803F58C(local_40,0);
  return;
}

