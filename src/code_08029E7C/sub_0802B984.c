/* sub_0802B984  (original: 0x0802B984-0x0802B9A8 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_06010000;


void sub_0802B984(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(iVar2 + 0x10) = 0xff;
  } while (iVar1 < 5);
  sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),0x8753008,0x400);
  return;
}

