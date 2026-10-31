/* sub_0804E894  (original: 0x0804E894-0x0804E904 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802A81C();
extern int sub_0801191A();
extern int sub_0800FE34();
extern int sub_0803FACC();
extern int sub_080116FC();
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086FD9D0;


void sub_0804E894(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_2c (*(int *)((char *)__frame + 0x0))
#define local_28 (*(int *)((char *)__frame + 0x4))
#define local_24 (*(int *)((char *)__frame + 0x8))
#define local_20 (*(int *)((char *)__frame + 0xc))
#define local_1c (*(int *)((char *)__frame + 0x10))
#define local_18 (*(int *)((char *)__frame + 0x14))
  iVar1 = sub_080116FC(&DAT_03001c4c);
  if (0x3ff < iVar1) {
    iVar1 = sub_0803FACC(0x1000);
    sub_0800FE34(&local_2c,param_2);
    local_18 = local_28 + local_20 >> 1;
    local_1c = local_2c + local_24 >> 1;
    uVar2 = sub_0802A81C(0,&local_1c,&gUnknown_086FD9D0,4,iVar1 + 0x1000,0x400,0x37);
    sub_0801191A(&DAT_03001c4c,uVar2);
  }
  return;
}

