/* sub_08045B22  (original: 0x08045B22-0x08045B40 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03005294;
extern undefined2 volatile DAT_04000102;
extern undefined2 volatile REG_TM0CNT;


void sub_08045B22(void)

{
  int iVar1;
  
  iVar1 = DAT_03005294;
  *(undefined4 *)(DAT_03005294 + 0xc) = 0;
  (&REG_TM0CNT)[(uint)*(byte *)(iVar1 + 10) * 2] = 0;
  (&DAT_04000102)[(uint)*(byte *)(iVar1 + 10) * 2] = 0;
  return;
}

