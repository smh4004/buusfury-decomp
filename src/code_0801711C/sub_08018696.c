/* sub_08018696  (original: 0x08018696-0x080186D4 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int sub_08011818();
extern int sub_0801124C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_06010000;


void sub_08018696(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  
  sub_08011818();
  iVar4 = *(int *)(param_1 + 0x10);
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

