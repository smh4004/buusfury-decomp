/* sub_08045B40  (original: 0x08045B40-0x08045B92 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern undefined4 volatile DAT_04000120;
extern undefined4 * volatile DAT_03005294;
extern undefined2 volatile REG_IE;
extern undefined2 volatile REG_IME;
extern undefined2 volatile DAT_04000128;


undefined4 sub_08045B40(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = CONCAT11(*(undefined1 *)(DAT_03005294 + 1),*(undefined1 *)((int)DAT_03005294 + 6)) |
          0x99660000;
  *(uint *)DAT_03005294[9] = uVar4;
  puVar3 = DAT_03005294;
  DAT_04000120 = uVar4;
  *DAT_03005294 = 0;
  *(undefined1 *)((int)puVar3 + 5) = 1;
  uVar2 = REG_IME;
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = (ushort)(8 << *(sbyte *)((int)puVar3 + 10)) | uVar1;
  uVar1 = REG_IE;
  REG_IE = uVar1 | 0x80;
  REG_IME = uVar2;
  DAT_04000128 = 0x5083;
  return 0;
}

