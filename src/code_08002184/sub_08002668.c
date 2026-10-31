/* sub_08002668  (original: 0x08002668-0x08002686 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080090E6();
extern undefined4 volatile DAT_03001010;
extern undefined4 volatile DAT_03001018;
extern undefined1 volatile DAT_0300197c;


void sub_08002668(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  sub_080090E6(&DAT_0300197c,param_1[iVar1],&DAT_03001010,&DAT_03001018,param_4);
  return;
}

