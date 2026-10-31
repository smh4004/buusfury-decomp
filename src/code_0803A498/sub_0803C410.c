/* sub_0803C410  (original: 0x0803C410-0x0803C436 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800EE78();


void sub_0803C410(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  sub_0800ECDA(iVar1,0x12,param_3,param_4,param_4);
  sub_0800EE78(iVar1);
  *(char *)(iVar1 + 0x10) = (char)*(undefined4 *)(param_1 + 0xc);
  *(undefined2 *)(iVar1 + 0x12) = 0;
  *(undefined1 *)(iVar1 + 8) = 0x38;
  *(undefined1 *)(iVar1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

