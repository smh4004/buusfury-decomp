/* sub_0801C978  (original: 0x0801C978-0x0801C9C4 in asm/code_0801B248.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802A81C();
extern int sub_0801191A();
extern int sub_080116FC();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_08712FDC;


void sub_0801C978(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  unsigned int __frame[4];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_10 (*(int *)((char *)__frame + 0x0))
#define local_c (*(int *)((char *)__frame + 0x4))
  local_10 = *(int *)(param_1 + 0x20) >> 8;
  local_c = *(int *)(param_1 + 0x24) >> 8;
  sub_08011944(&DAT_03001c4c,param_1);
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    uVar2 = sub_0802A81C(0,&local_10,&gUnknown_08712FDC,4,0x2000,0x400,0x38);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}

