/* sub_08045894  (original: 0x08045894-0x080458E0 in asm/code_08044C9C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080433E0();
extern int volatile DAT_03005294;
extern undefined2 volatile REG_IF;
extern undefined2 volatile REG_IE;
extern undefined1 volatile DAT_03005288;
extern undefined2 volatile DAT_04000134;
extern undefined2 volatile REG_IME;
extern undefined2 volatile DAT_04000128;


void sub_08045894(void)

{
  ushort uVar1;
  unsigned int __frame[4];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_10 (*(undefined4 *)((char *)__frame + 0x0))
  REG_IME = 0;
  uVar1 = REG_IE;
  REG_IE = uVar1 & ~((ushort)(8 << *(sbyte *)(DAT_03005294 + 10)) | 0x80);
  REG_IME = 1;
  DAT_04000134 = 0;
  DAT_04000128 = 0x1000;
  uVar1 = DAT_04000128;
  DAT_04000128 = uVar1 | 0x4080;
  local_10 = 0;
  sub_080433E0(&local_10,&DAT_03005288,0x5000003);
  REG_IF = 0x80;
  return;
}

