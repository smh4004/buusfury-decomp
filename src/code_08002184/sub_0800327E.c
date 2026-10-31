/* sub_0800327E  (original: 0x0800327E-0x080032C2 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08004098();
extern int * volatile DAT_03001030;
extern undefined * volatile gUnknown_0879B704;


void sub_0800327E(int *param_1)

{
  int iVar1;
  unsigned int __frame[28];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_70 ((undefined1 *)((char *)__frame + 0x0))
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  DAT_03001030[1] = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  *DAT_03001030 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_08004098(auStack_70,(&gUnknown_0879B704)[param_1[iVar1]],DAT_03001030);
  return;
}

