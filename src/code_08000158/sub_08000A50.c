/* sub_08000A50  (original: 0x08000A50-0x08000AA0 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08009930();
extern undefined4 volatile DAT_03001a50;


void sub_08000A50(int *param_1)

{
  int iVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_14 (*(int *)((char *)__frame + 0x0))
#define local_10 (*(int *)((char *)__frame + 0x4))
#define local_c (*(int *)((char *)__frame + 0x8))
#define local_8 (*(int *)((char *)__frame + 0xc))
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_8 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_10 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_14 = param_1[iVar1];
  sub_08009930(&local_14,DAT_03001a50,1);
  return;
}

