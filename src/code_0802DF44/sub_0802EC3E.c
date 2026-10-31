/* sub_0802EC3E  (original: 0x0802EC3E-0x0802EC9C in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049150();
extern int sub_0802EBBE();
extern int sub_0803F58C();
extern int sub_0802EC00();
extern int sub_0803F540();
extern int sub_08006718();


void sub_0802EC3E(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int __frame[17];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_44 ((undefined1 *)((char *)__frame + 0x0))
  iVar2 = *(int *)(param_1 + 0x168);
  iVar1 = sub_0802EC00();
  *(uint *)(iVar2 + 8) = (uint)(iVar1 != -1);
  iVar2 = *(int *)(param_1 + 0x16c);
  iVar1 = sub_0802EBBE(param_1);
  *(uint *)(iVar2 + 8) = (uint)(iVar1 != -1);
  sub_0803F540(auStack_44,0xf0,0xa0);
  sub_08006718(param_1,auStack_44,0xc,1);
  sub_08049150((int)auStack_44,0x6000040);
  sub_0803F58C(auStack_44,0);
  return;
}

