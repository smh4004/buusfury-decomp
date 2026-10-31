/* sub_0802C964  (original: 0x0802C964-0x0802C98E in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern undefined1 volatile REG_MOSAIC;
extern undefined1 volatile DAT_0400004d;


bool sub_0802C964(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar3;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar3 < iVar2) {
    cVar1 = __16__rt_sdiv(iVar2,iVar3 * 0x10,param_3,param_4,param_4);
    cVar1 = ('\x0f' - cVar1) * '\x11';
    REG_MOSAIC = cVar1;
    DAT_0400004d = cVar1;
  }
  return iVar3 >= iVar2;
}

