/* sub_0800D894  (original: 0x0800D894-0x0800D8D2 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800DB42();
extern int sub_0801124C();
extern int sub_08049138();
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_06010000;


void sub_0800D894(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  
  sub_0800DB42();
  iVar4 = *(int *)(param_1 + 0x4c);
  if (iVar4 != 0) {
    pcVar5 = *(char **)(iVar4 + 8);
    uVar2 = *(ushort *)(iVar4 + 2);
    iVar4 = *(int *)(iVar4 + 4);
    cVar1 = *pcVar5;
    *pcVar5 = cVar1 + '\x01';
    if (cVar1 == '\0') {
      sVar3 = sub_0801124C(&DAT_03001c4c,(uint)uVar2);
      *(short *)(pcVar5 + 2) = sVar3;
      sub_08049138((int)(&DAT_06010000 + sVar3 * 0x20),iVar4,(uint)uVar2);
    }
  }
  return;
}

