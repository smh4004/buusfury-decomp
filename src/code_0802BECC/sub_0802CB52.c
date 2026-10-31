/* sub_0802CB52  (original: 0x0802CB52-0x0802CBB4 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern undefined volatile _0804DE58;
extern undefined volatile gUnknown_08072670;


void sub_0802CB52(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar5 = *(undefined4 *)(param_2 + 4);
  iVar2 = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = param_1;
  }
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  puVar1 = (undefined4 *)sub_0803D5B8(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DE58;
    puVar1[1] = iVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
  }
  sub_0800ECDA(uVar5,(&gUnknown_08072670)[*(byte *)(param_1 + 8)]);
  sub_0800ED18(uVar5,puVar1);
  return;
}

