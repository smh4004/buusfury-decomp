/* sub_08035F08  (original: 0x08035F08-0x08035F80 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080116FC();
extern int sub_0801191A();
extern int sub_08036A44();
extern undefined volatile DAT_03001c4c;


void sub_08035F08(void)

{
  int iVar1;
  undefined4 uVar2;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(undefined4 *)((char *)__frame + 0x0))
#define local_10 (*(undefined4 *)((char *)__frame + 0x4))
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0xfff < iVar1) {
    local_14 = 200;
    local_10 = 0x88;
    uVar2 = sub_08036A44(0,&local_14);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0xfff < iVar1) {
    local_14 = 0x70;
    local_10 = 0x110;
    uVar2 = sub_08036A44(0,&local_14);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0xfff < iVar1) {
    local_14 = 0x128;
    local_10 = 0xf0;
    uVar2 = sub_08036A44(0,&local_14);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}

