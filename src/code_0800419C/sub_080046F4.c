/* sub_080046F4  (original: 0x080046F4-0x08004722 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@03000000.
 */
#include "ghidra_types.h"
extern int sub_0800B854();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;


void sub_080046F4(int param_1)

{
  int iVar1;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 1) << 0x1e)) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
    iVar1 = sub_0800B854(0);
    *(undefined4 *)(iVar1 + 0x28) = 0xfffffff0;
    *(undefined4 *)(iVar1 + 0x14) = 1;
    sub_0801191A(&DAT_03001c4c);
  }
  return;
}

