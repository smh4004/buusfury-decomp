/* sub_0801E774  (original: 0x0801E774-0x0801E7B4 in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803F9D4();
extern int sub_08049150();
extern int sub_080066EC();
extern int sub_0803F540();
extern int Wfz_LoadContainer();
extern int sub_0803F58C();
extern undefined volatile gUnknown_0872081C;
extern undefined volatile gUnknown_08056A2C;
extern undefined volatile gUnknown_083BE3D4;


void sub_0801E774(undefined4 param_1)

{
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_40 ((undefined1 *)((char *)__frame + 0x0))
#define local_1c (*(undefined4 *)((char *)__frame + 0x24))
  sub_0803F540(auStack_40,0xf0,0xa0);
  Wfz_LoadContainer(&gUnknown_083BE3D4,local_1c);
  sub_0803F9D4(auStack_40,&gUnknown_0872081C,&gUnknown_08056A2C);
  sub_080066EC(param_1,auStack_40);
  sub_08049150((int)auStack_40,0x6000040);
  sub_0803F58C(auStack_40,0);
  return;
}

