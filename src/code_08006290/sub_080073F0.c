/* sub_080073F0  (original: 0x080073F0-0x0800742C in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0803D8A0();
extern int sub_080124D2();
extern int sub_0803D5B8();
extern int sub_0801246E();
extern undefined volatile _08049D18;
extern undefined volatile gUnknown_080707C0;


void sub_080073F0(int param_1,int param_2)

{
  undefined4 *puVar1;
  unsigned int __frame[13];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_34 ((undefined1 *)((char *)__frame + 0x0))
  sub_0801246E(auStack_34,*(undefined4 *)(param_1 + 0x14),param_1 + 0x10,&gUnknown_080707C0,
               param_2 + 0x214);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049D18;
    puVar1[1] = auStack_34;
  }
  sub_0803D8A0(puVar1);
  sub_080124D2(auStack_34,0);
  return;
}

