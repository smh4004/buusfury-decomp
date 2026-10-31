/* sub_08002978  (original: 0x08002978-0x080029C0 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08004448();
extern int sub_0801936A();
extern int sub_0803D5B8();
extern int volatile DAT_03001c34;
extern undefined1 volatile DAT_03001068;
extern undefined4 volatile DAT_03002bac;
extern undefined volatile _0804C83C;


void sub_08002978(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  iVar3 = param_1[iVar2];
  sub_08004448(&DAT_03001068,iVar3,param_3,param_4,param_4);
  puVar1 = (undefined4 *)sub_0803D5B8(0x14);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804C83C;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = -iVar3;
  }
  if (DAT_03001c34 != 0) {
    iVar2 = DAT_03001c34 + 0x18c;
  }
  sub_0801936A(&DAT_03002bac,puVar1,iVar2);
  return;
}

