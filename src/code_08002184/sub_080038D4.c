/* sub_080038D4  (original: 0x080038D4-0x08003904 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C0C();
extern undefined volatile DAT_03001c4c;


void sub_080038D4(int *param_1)

{
  int iVar1;
  unsigned int __frame[3];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_c (*(int *)((char *)__frame + 0x0))
#define local_8 (*(int *)((char *)__frame + 0x4))
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_8 = param_1[iVar1];
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  local_c = param_1[iVar1];
  sub_08011C0C(&DAT_03001c4c,0x23,&local_c);
  return;
}

