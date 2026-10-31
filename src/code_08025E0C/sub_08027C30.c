/* sub_08027C30  (original: 0x08027C30-0x08027C90 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FE34();
extern int sub_0801191A();
extern int sub_08011732();
extern int sub_0801952C();
extern undefined volatile DAT_03001c4c;


void sub_08027C30(int param_1,int param_2)

{
  undefined4 uVar1;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_24 (*(int *)((char *)__frame + 0x0))
#define local_20 (*(int *)((char *)__frame + 0x4))
#define local_1c (*(int *)((char *)__frame + 0x8))
#define local_18 (*(int *)((char *)__frame + 0xc))
#define local_14 (*(int *)((char *)__frame + 0x10))
#define local_10 (*(int *)((char *)__frame + 0x14))
  sub_0800FE34(&local_1c,*(undefined4 *)(param_2 + 4));
  sub_08011732(&DAT_03001c4c,0x400);
  local_24 = (local_1c + local_14 >> 1) + *(int *)(param_1 + 8);
  local_20 = (local_18 + local_10 >> 1) + *(int *)(param_1 + 0xc);
  uVar1 = sub_0801952C(0,&local_24,0x37);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}

