/* sub_08043B66  (original: 0x08043B66-0x08043BAC in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08043558();
extern int sub_080433E0();
extern int volatile DAT_0300525c;


void sub_08043B66(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  unsigned int __frame[4];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_10 (*(uint *)((char *)__frame + 0x0))
  local_10 = param_4;
  sub_08043558();
  if (param_1 != 0) {
    local_10 = local_10 & 0xffff0000;
    sub_080433E0(&local_10,DAT_0300525c + 0x14,0x1000040);
    *(undefined1 *)(DAT_0300525c + 8) = 0;
  }
  iVar1 = DAT_0300525c;
  uVar2 = 0;
  do {
    iVar3 = iVar1 + uVar2;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined1 *)(iVar3 + 10) = 0;
  } while (uVar2 < 4);
  *(undefined1 *)(iVar1 + 1) = 0;
  *(undefined1 *)(iVar1 + 2) = 0;
  *(undefined1 *)(iVar1 + 3) = 0;
  *(undefined1 *)(iVar1 + 7) = 0;
  return;
}

