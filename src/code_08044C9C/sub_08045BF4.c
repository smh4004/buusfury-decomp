/* sub_08045BF4  (original: 0x08045BF4-0x08045C5A in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03005294;
extern undefined2 volatile DAT_04000102;
extern undefined2 volatile REG_IF;
extern undefined2 volatile REG_IME;
extern undefined2 volatile REG_TM0CNT;


void sub_08045BF4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
  bVar1 = *(byte *)(DAT_03005294 + 10);
  puVar3 = &REG_TM0CNT + (uint)bVar1 * 2;
  REG_IME = 0;
  if (param_1 == 0x32) {
    *puVar3 = 0xfccb;
    *(undefined4 *)(DAT_03005294 + 0xc) = 1;
  }
  else {
    if (param_1 == 0x50) {
      *puVar3 = 0xfae0;
      uVar2 = 2;
    }
    else if (param_1 == 100) {
      *puVar3 = 0xf996;
      uVar2 = 3;
    }
    else {
      if (param_1 != 0x82) goto _08045C46;
      *puVar3 = 0xf7ad;
      uVar2 = 4;
    }
    *(undefined4 *)(DAT_03005294 + 0xc) = uVar2;
  }
_08045C46:
  (&DAT_04000102)[(uint)bVar1 * 2] = 0xc3;
  REG_IF = (short)(8 << *(sbyte *)(DAT_03005294 + 10));
  REG_IME = 1;
  return;
}

