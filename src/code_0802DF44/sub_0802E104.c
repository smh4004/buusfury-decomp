/* sub_0802E104  (original: 0x0802E104-0x0802E130 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _08049A3C;


void sub_0802E104(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  puVar1 = (undefined4 *)sub_0803D5B8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0x32;
    puVar1[1] = uVar2;
    puVar1[5] = 0;
    *puVar1 = &_08049A3C;
    puVar1[7] = iVar3 << 8;
    puVar1[8] = iVar4 << 8;
  }
  return;
}

