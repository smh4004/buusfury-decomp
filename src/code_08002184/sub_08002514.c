/* sub_08002514  (original: 0x08002514-0x0800253C in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D8A0();
extern int sub_0803D5B8();
extern undefined volatile _0804A070;


void sub_08002514(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804A070;
    puVar1[1] = 0;
    puVar1[2] = iVar2;
  }
  sub_0803D8A0();
  return;
}

