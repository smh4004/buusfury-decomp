/* sub_08001F00  (original: 0x08001F00-0x08001F30 in asm/code_08000158.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801936A();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002bac;
extern undefined volatile _0804C7EC;
extern undefined4 volatile DAT_03002bd8;


void sub_08001F00(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &_0804C7EC;
    puVar1[2] = iVar2;
  }
  sub_0801936A(&DAT_03002bac,puVar1,&DAT_03002bd8);
  return;
}

