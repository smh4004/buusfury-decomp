/* sub_08025510  (original: 0x08025510-0x080255C4 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080254A8();
extern int sub_0803E378();
extern int sub_08025404();
extern int sub_08025056();
extern ushort volatile DAT_03003304;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_0831947C;


void sub_08025510(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 0x3b4);
  if (*piVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xb10);
    iVar4 = piVar1[iVar2 * 2 + 1];
    if (iVar4 != piVar1[iVar2 * 2 + 2]) {
      if ((int)((uint)DAT_03003304 << 0x1a) < 0) {
        iVar3 = *(int *)(param_1 + 0xb14) + -1;
        *(int *)(param_1 + 0xb14) = iVar3;
        if (iVar3 < iVar4) {
          *(int *)(param_1 + 0xb14) = piVar1[iVar2 * 2 + 2];
        }
        sub_08025056(param_1);
        sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      }
      if ((int)((uint)DAT_03003304 << 0x1b) < 0) {
        iVar4 = piVar1[*(int *)(param_1 + 0xb10) * 2 + 2];
        iVar2 = *(int *)(param_1 + 0xb14) + 1;
        *(int *)(param_1 + 0xb14) = iVar2;
        if (iVar4 < iVar2) {
          *(int *)(param_1 + 0xb14) = piVar1[*(int *)(param_1 + 0xb10) * 2 + 1];
        }
        sub_08025056(param_1);
        sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
      }
    }
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08025404(param_1);
  }
  else {
    sub_080254A8(param_1);
  }
  return;
}

