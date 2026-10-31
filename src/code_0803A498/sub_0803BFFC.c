/* sub_0803BFFC  (original: 0x0803BFFC-0x0803C04A in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern undefined4 volatile DAT_03001b20;


bool sub_0803BFFC(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_2 + 0x58) + 0x90) != *(int *)(param_2 + 0x50)) {
    sub_0800ECDA(param_2,0xf,param_3,param_4,param_4);
    sub_0800ED18(param_2,&DAT_03001b20);
    *(undefined1 *)(param_2 + 8) = 0x24;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + -1;
  if (iVar1 != 0) {
    *(int *)(param_2 + 0x1a0) = *(int *)(param_2 + 0x1a0) + *(int *)(param_1 + 4);
    *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + *(int *)(param_1 + 8);
  }
  return iVar1 == 0;
}

