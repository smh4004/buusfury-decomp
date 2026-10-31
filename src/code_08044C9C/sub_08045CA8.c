/* sub_08045CA8  (original: 0x08045CA8-0x08045CCE in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int volatile DAT_03005294;
extern undefined2 volatile REG_IE;
extern undefined2 volatile REG_IME;


void sub_08045CA8(undefined4 *param_1,undefined1 param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  
  *param_1 = 0x8045c5b;
  iVar3 = DAT_03005294;
  *(undefined1 *)(DAT_03005294 + 10) = param_2;
  uVar2 = REG_IME;
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = (ushort)(8 << *(sbyte *)(iVar3 + 10)) | uVar1;
  REG_IME = uVar2;
  return;
}

