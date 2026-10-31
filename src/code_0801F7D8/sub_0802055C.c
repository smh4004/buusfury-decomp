/* sub_0802055C  (original: 0x0802055C-0x080205A4 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_080192CE();


void sub_0802055C(int param_1,int param_2)

{
  int *piVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
  piVar1 = *(int **)(param_2 + 4);
  local_14 = piVar1[0x68] >> 8;
  local_10 = piVar1[0x69] >> 8;
  sub_080192CE(&local_14,param_1 + 0x14,param_1 + 0x1c,param_1 + 0xc,*(undefined4 *)(param_1 + 8),
               local_14);
  __call_via_r1(piVar1,*(int *)(*piVar1 + 0x3c) + *piVar1);
  return;
}

