/* sub_0803968C  (original: 0x0803968C-0x08039708 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049150();
extern int sub_08005096();
extern int sub_080066EC();
extern int sub_0803DD66();
extern int sub_0803DADA();
extern int sub_0803F58C();
extern int sub_0803F540();
extern undefined4 volatile gUnknown_0807012C;
extern undefined volatile gUnknown_082B9BA0;


void sub_0803968C(undefined4 param_1)

{
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_48 (*(undefined1 *)((char *)__frame + 0x0))
#define local_47 (*(undefined1 *)((char *)__frame + 0x1))
#define local_46 (*(undefined1 *)((char *)__frame + 0x2))
#define local_45 (*(undefined1 *)((char *)__frame + 0x3))
#define local_44 (*(undefined4 *)((char *)__frame + 0x4))
#define local_40 (*(undefined4 *)((char *)__frame + 0x8))
#define local_3c (*(undefined4 * *)((char *)__frame + 0xc))
#define local_28 (*(undefined4 *)((char *)__frame + 0x20))
  sub_0803F540(&local_48,0xa0,0x58);
  sub_08005096(&local_48);
  local_48 = 1;
  local_46 = 1;
  local_28 = 0x803f5a5;
  local_44 = 0x50;
  local_40 = 0x14;
  local_3c = (undefined4 *)&gUnknown_082B9BA0;
  local_45 = 3;
  sub_0803DADA(&local_48,L"Delete Game");
  local_3c = &gUnknown_0807012C;
  local_44 = 0x50;
  local_40 = 0x2c;
  local_47 = 0xc;
  local_45 = 2;
  sub_0803DD66(&local_48,0x84,L"Are you sure?");
  sub_080066EC(param_1,&local_48);
  sub_08049150((int)&local_48,0x6009640);
  sub_0803F58C(&local_48,0);
  return;
}

