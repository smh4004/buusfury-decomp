/* sub_08001FE4  (original: 0x08001FE4-0x0800201E in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_0803D8A0();
extern int sub_08015B68();


void sub_08001FE4(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned int __frame[3];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_c (*(int *)((char *)__frame + 0x0))
#define local_8 (*(int *)((char *)__frame + 0x4))
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar2 = param_1[iVar1];
  *param_1 = iVar1 + -2;
  local_8 = param_1[iVar1 + -1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  sub_08015B68(0,&local_c,iVar2);
  sub_0803D8A0();
  return;
}

