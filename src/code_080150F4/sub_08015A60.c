/* sub_08015A60  (original: 0x08015A60-0x08015AA0 in asm/code_080150F4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C0C();
extern int __call_via_r1();
extern int sub_08011944();
extern int * volatile DAT_03001bac;
extern undefined4 volatile DAT_03002a58;
extern undefined volatile DAT_03001c4c;


void sub_08015A60(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  if (piVar1 == DAT_03001bac) {
    DAT_03002a58 = 1;
  }
  sub_08011C0C(&DAT_03001c4c,0x12,piVar1,param_4,param_4);
  __call_via_r1(piVar1,*(int *)(*piVar1 + 0x3c) + *piVar1);
  sub_08011944(&DAT_03001c4c,piVar1);
  return;
}

