/* sub_0804E5B8  (original: 0x0804E5B8-0x0804E5E8 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_08000158();
extern int sub_0800EECC();
extern int sub_0800ED18();
extern undefined4 volatile DAT_03001b30;


void sub_0804E5B8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = sub_08000158(0x35);
  if (*(int *)(param_2 + 0x38) != *(int *)(iVar1 + 4)) {
    sub_0800EECC(param_2);
  }
  sub_0800ECDA(param_2,0xc);
  sub_0800ED18(param_2,&DAT_03001b30);
  return;
}

