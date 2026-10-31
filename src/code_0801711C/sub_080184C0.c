/* sub_080184C0  (original: 0x080184C0-0x08018550 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern int sub_0801142A();
extern int sub_08013E38();
extern int sub_0801124C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_06010000;


void sub_080184C0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  char *pcVar6;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar6 = *(char **)(*(int *)(param_1 + 0x10) + 8);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + -1;
    if (((char)(cVar1 + -1) == '\0') && (*(short *)(pcVar6 + 2) != -1)) {
      sub_0801142A(&DAT_03001c4c,(int)*(short *)(pcVar6 + 2),param_3,2,param_4);
      pcVar6[2] = -1;
      pcVar6[3] = -1;
    }
  }
  iVar5 = sub_08013E38(param_2,param_3);
  *(int *)(param_1 + 0x10) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    pcVar6 = *(char **)(iVar5 + 8);
    uVar3 = *(ushort *)(iVar5 + 2);
    iVar5 = *(int *)(iVar5 + 4);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + '\x01';
    if (cVar1 == '\0') {
      sVar4 = sub_0801124C(&DAT_03001c4c,(uint)uVar3);
      *(short *)(pcVar6 + 2) = sVar4;
      sub_08049138((int)(&DAT_06010000 + sVar4 * 0x20),iVar5,(uint)uVar3);
    }
    bVar2 = (*(byte **)(param_1 + 0x10))[1];
    *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x14) + (uint)**(byte **)(param_1 + 0x10);
    *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x18) + (uint)bVar2;
  }
  return;
}

