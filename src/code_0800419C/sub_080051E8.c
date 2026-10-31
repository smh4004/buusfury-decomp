/* sub_080051E8  (original: 0x080051E8-0x08005228 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_080066EC();
extern int sub_0803F9D4();
extern int sub_0803F58C();
extern int Wfz_LoadContainer();
extern int sub_0803F540();
extern int sub_08049150();
extern undefined volatile gUnknown_080561CC;
extern undefined volatile gUnknown_08056A2C;
extern undefined volatile gUnknown_083BE3D4;


void sub_080051E8(undefined4 param_1)

{
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_40 ((undefined1 *)((char *)__frame + 0x0))
#define local_1c (*(undefined4 *)((char *)__frame + 0x24))
  sub_0803F540(auStack_40,0xf0,0xa0);
  Wfz_LoadContainer(&gUnknown_083BE3D4,local_1c);
  sub_0803F9D4(auStack_40,&gUnknown_080561CC,&gUnknown_08056A2C);
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}

