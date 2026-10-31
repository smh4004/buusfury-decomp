/* sub_08012FC4  (original: 0x08012FC4-0x08012FE6 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_0800DEB0();
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_083193D4;


void sub_08012FC4(undefined4 param_1,int param_2)

{
  sub_0800DEB0();
  if ((*(ushort *)(param_2 + 0x12) & 0xf) == 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_083193D4,0x20,0);
  }
  return;
}

