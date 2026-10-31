/* sub_0804F7E4  (original: 0x0804F7E4-0x0804F82C in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800D30E();
extern int sub_0801191A();
extern int sub_0803FACC();
extern undefined volatile DAT_03001c4c;


void sub_0804F7E4(int param_1)

{
  undefined4 uVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
  local_14 = sub_0803FACC(0x200);
  local_14 = local_14 + -0x100;
  local_10 = sub_0803FACC(0x200);
  local_10 = local_10 + -0x100;
  uVar1 = sub_0800D30E(0,-*(int *)(param_1 + 0x10),param_1 + 8,&local_14);
  sub_0801191A(&DAT_03001c4c,uVar1);
  return;
}

