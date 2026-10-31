/* sub_080394E8  (original: 0x080394E8-0x08039544 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049150();
extern int sub_08005096();
extern int sub_080066EC();
extern int sub_0803DADA();
extern int sub_0803F58C();
extern int sub_0803F540();
extern undefined4 volatile gUnknown_0807012C;


void sub_080394E8(undefined4 param_1)

{
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_40 ((undefined1 *)((char *)__frame + 0x0))
#define local_3e (*(undefined1 *)((char *)__frame + 0x2))
#define local_3d (*(undefined1 *)((char *)__frame + 0x3))
#define local_3c (*(undefined4 *)((char *)__frame + 0x4))
#define local_38 (*(undefined4 *)((char *)__frame + 0x8))
#define local_34 (*(undefined4 * *)((char *)__frame + 0xc))
#define local_20 (*(undefined4 *)((char *)__frame + 0x20))
  sub_0803F540(local_40,0x60,0x28);
  sub_08005096(local_40);
  local_40[0] = 1;
  local_3e = 1;
  local_20 = 0x803f5a5;
  local_34 = &gUnknown_0807012C;
  local_3c = 0x30;
  local_38 = 0x14;
  local_3d = 2;
  sub_0803DADA(local_40,L"Saving...");
  sub_080066EC(param_1,local_40);
  sub_08049150((int)local_40,0x6009640);
  sub_0803F58C(local_40,0);
  return;
}

