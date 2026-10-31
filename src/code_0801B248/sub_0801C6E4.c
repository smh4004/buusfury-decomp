/* sub_0801C6E4  (original: 0x0801C6E4-0x0801C750 in asm/code_0801B248.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019B04();
extern int sub_08019B4E();
extern int sub_0803D5B8();
extern undefined volatile gUnknown_0871E984;
extern undefined volatile _0804A2E8;


undefined4 * sub_0801C6E4(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x60), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x100,param_4);
    *param_1 = &_0804A2E8;
    uVar1 = param_3[1];
    param_1[0x10] = *param_3;
    param_1[0x11] = uVar1;
    iVar2 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar2 << 8;
    param_1[0x12] = 0;
    param_1[0x13] = 0x800;
    param_1[0x14] = 0x200;
    param_1[6] = &gUnknown_0871E984;
    *(undefined1 *)(param_1 + 2) = 0x37;
    param_1[0x11] = param_1[0x11] + -0x200;
    sub_08019B4E(param_1);
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  return param_1;
}

