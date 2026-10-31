/* sub_080088E6  (original: 0x080088E6-0x08008924 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int Wfz_LoadContainer();
extern int __call_via_r2();
extern undefined volatile DAT_0600e000;


void sub_080088E6(int *param_1,undefined4 param_2)

{
  unsigned int __frame[516];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_810 ((undefined1 *)((char *)__frame + 0x0))
  Wfz_LoadContainer(*(undefined4 *)(param_1[2] + 0x1c),auStack_810);
  sub_08049138((int)(&DAT_0600e000 + (uint)*(byte *)(param_1 + 1) * 0x800),(int)auStack_810,0x800);
  __call_via_r2(param_1,param_2,*(int *)(*param_1 + 8) + *param_1);
  return;
}

