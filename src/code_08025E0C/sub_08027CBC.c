/* sub_08027CBC  (original: 0x08027CBC-0x08027D3E in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019B4E();
extern int sub_0803E378();
extern int sub_0803D5B8();
extern int sub_08019B04();
extern int sub_0803FACC();
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_083192A8;
extern undefined volatile _0804D234;
extern undefined volatile gUnknown_0871370C;


undefined4 * sub_08027CBC(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x54), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x100,0);
    *param_1 = &_0804D234;
    uVar1 = param_3[1];
    param_1[0x10] = *param_3;
    param_1[0x11] = uVar1;
    iVar2 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar2 << 8;
    param_1[0x14] = 0;
    param_1[0x12] = &gUnknown_0871370C + param_4 * 0x30;
    param_1[0x13] = 0;
    param_1[6] = &gUnknown_0871370C + param_4 * 0x30;
    *(undefined1 *)(param_1 + 2) = 0x38;
    sub_08019B4E(param_1);
    iVar2 = sub_0803FACC(2);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x14) * 0xc,0x40,0,iVar3);
  }
  return param_1;
}

