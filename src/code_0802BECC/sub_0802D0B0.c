/* sub_0802D0B0  (original: 0x0802D0B0-0x0802D0DC in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_08011CCA();
extern undefined volatile DAT_03001c4c;


void sub_0802D0B0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  *(undefined1 *)(param_2 + 0x11) = 0;
  sub_0800ECDA(param_2,0x12);
  iVar1 = sub_08011CCA(&DAT_03001c4c,0x24,0);
  if (0xb < iVar1) {
    *(undefined2 *)(param_2 + 0x12) = 0x18;
  }
  return;
}

