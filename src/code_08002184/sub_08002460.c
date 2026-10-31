/* sub_08002460  (original: 0x08002460-0x08002496 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_080176AC();
extern int sub_0803D8A0();
extern int sub_0803D5B8();
extern undefined volatile _0804BBD4;


void sub_08002460(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar2 = param_1[iVar2];
  puVar1 = (undefined4 *)sub_0803D5B8(0x40c);
  if (puVar1 != (undefined4 *)0x0) {
    sub_080176AC(puVar1);
    *puVar1 = &_0804BBD4;
    puVar1[0x101] = 0;
    puVar1[0x102] = iVar2;
  }
  sub_0803D8A0(puVar1);
  return;
}

