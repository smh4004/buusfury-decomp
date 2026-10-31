/* sub_0803D63C  (original: 0x0803D63C-0x0803D712 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0803D56A();
extern int sub_0803D520();
extern int sub_0803D4E8();
extern ushort * volatile DAT_03003488;
extern undefined volatile DAT_02000002;
extern undefined volatile DAT_02000004;
extern undefined volatile DAT_02000006;


void sub_0803D63C(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  if (param_1 == (undefined2 *)0x0) {
    return;
  }
  puVar3 = param_1 + -4;
  *(undefined1 *)(param_1 + -1) = 0;
  if (*puVar3 == 0) {
    if ((ushort)param_1[-2] == 0) {
      DAT_03003488 = puVar3;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    iVar1 = (uint)(ushort)param_1[-2] * 4;
    if ((&DAT_02000006)[iVar1] != '\0') {
      sub_0803D520(puVar3);
      return;
    }
    *(short *)(&DAT_02000002 + iVar1) = *(short *)(&DAT_02000002 + iVar1) + param_1[-3] + 2;
    *(undefined2 *)(iVar1 + 0x2000000) = 0;
    return;
  }
  iVar1 = (uint)*puVar3 * 4;
  puVar4 = (ushort *)(iVar1 + 0x2000000);
  if ((ushort)param_1[-2] == 0) {
    if ((&DAT_02000006)[iVar1] != '\0') {
      sub_0803D520(puVar3);
      return;
    }
    sub_0803D56A(puVar3,puVar4);
    return;
  }
  iVar2 = (uint)(ushort)param_1[-2] * 4;
  if ((&DAT_02000006)[iVar1] == '\0') {
    if ((&DAT_02000006)[iVar2] == '\0') {
      sub_0803D4E8(puVar4);
      *(short *)(&DAT_02000002 + iVar2) =
           param_1[-3] + *(short *)(&DAT_02000002 + iVar1) + *(short *)(&DAT_02000002 + iVar2) + 4;
      *(ushort *)(iVar2 + 0x2000000) = *puVar4;
      if (*puVar4 == 0) {
        return;
      }
      *(undefined2 *)(&DAT_02000004 + (uint)*puVar4 * 4) = param_1[-2];
      return;
    }
    sub_0803D56A(puVar3,puVar4);
  }
  else {
    if ((&DAT_02000006)[iVar2] != '\0') {
      sub_0803D520(puVar3);
      return;
    }
    *(short *)(&DAT_02000002 + iVar2) = *(short *)(&DAT_02000002 + iVar2) + param_1[-3] + 2;
    *(ushort *)(iVar2 + 0x2000000) = *puVar3;
    if (*puVar3 != 0) {
      *(undefined2 *)(&DAT_02000004 + (uint)*puVar3 * 4) = param_1[-2];
      return;
    }
  }
  return;
}

