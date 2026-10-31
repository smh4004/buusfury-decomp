/* sub_0800D72E  (original: 0x0800D72E-0x0800D78A in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08004448();
extern int sub_0801E164();
extern int sub_0801936A();
extern int sub_08011944();
extern int sub_0803D5B8();
extern int volatile DAT_03001c34;
extern undefined1 volatile DAT_03001068;
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile DAT_03002bac;
extern undefined1 volatile gUnknown_083BD2F8;
extern undefined volatile _0804C83C;


void sub_0800D72E(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x48);
  sub_08011944(&DAT_03001c4c,param_1);
  if (-1 < iVar3) {
    sub_0801E164(&gUnknown_083BD2F8 + iVar3 * 0x34,iVar3,param_2);
    return;
  }
  sub_08004448(&DAT_03001068,-iVar3);
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C83C;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = iVar3;
  }
  if (DAT_03001c34 != 0) {
    iVar2 = DAT_03001c34 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar2);
  return;
}

