/* sub_08018078  (original: 0x08018078-0x0801809E in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801268A();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile DAT_03002a64;


void sub_08018078(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  *(int *)(param_1 + 0x24) = iVar1;
  if (600 < iVar1) {
    sub_0801268A(&DAT_03002a64,*(undefined4 *)(param_1 + 0x68),param_3,param_4,param_4);
    sub_08011944(&DAT_03001c4c,param_1);
  }
  return;
}

