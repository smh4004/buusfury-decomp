/* sub_08048264  (original: 0x08048264-0x08048298 in asm/code_08047A88.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08046FF4();
extern undefined4 volatile DAT_030019e8;
extern undefined volatile DAT_03001a00;
extern undefined volatile DAT_03001a30;


void sub_08048264(void)

{
  sub_08046FF4(&DAT_030019e8,&DAT_03001a00,8,0x8050761);
  sub_08046FF4(&DAT_03001a00,&DAT_03001a30,0xc,0x8050791);
  return;
}

