/* sub_08025404  (original: 0x08025404-0x080254A8 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08024BE6();
extern int sub_0803E378();
extern int sub_08025056();
extern ushort volatile DAT_03003304;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_0831947C;
extern undefined2 volatile REG_BLDCNT;


void sub_08025404(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x3b4);
  if (((int)((uint)DAT_03003304 << 0x19) < 0) && (*(int *)(param_1 + 0xb10) != 0)) {
    iVar1 = *(int *)(param_1 + 0xb10) + -1;
    *(int *)(param_1 + 0xb10) = iVar1;
    *(int *)(param_1 + 0xb14) = piVar2[iVar1 * 2 + 1];
    sub_08025056(param_1);
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
  }
  if ((int)((uint)DAT_03003304 << 0x18) < 0) {
    if (*(int *)(param_1 + 0xb10) < *piVar2 + -1) {
      iVar1 = *(int *)(param_1 + 0xb10) + 1;
      *(int *)(param_1 + 0xb10) = iVar1;
      *(int *)(param_1 + 0xb14) = piVar2[iVar1 * 2 + 1];
      sub_08025056(param_1);
      sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    }
  }
  if ((*piVar2 != 0) && ((DAT_03003304 & 1) != 0)) {
    sub_08024BE6(param_1);
    REG_BLDCNT = 0x3e41;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}

