/* sub_08033F28  (original: 0x08033F28-0x08033FA4 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_08019B04();
extern int sub_08019B4E();
extern undefined volatile gUnknown_087593D8;
extern undefined volatile _0804CE50;


undefined4 * sub_08033F28(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x4c), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x40,param_4);
    *param_1 = &_0804CE50;
    iVar1 = *param_2;
    iVar2 = param_2[1];
    param_1[0x12] = 0x16;
    param_1[8] = iVar1 << 8;
    param_1[9] = iVar2 << 8;
    iVar1 = param_3[1];
    iVar2 = param_2[1];
    param_1[0x10] = (*param_3 - *param_2) * 0x5d3 >> 8;
    param_1[0x11] = ((iVar1 - iVar2) * 0x5d3 + -0xba60 >> 8) + -0x200;
    param_1[6] = &gUnknown_087593D8;
    *(undefined1 *)(param_1 + 2) = 0x38;
    sub_08019B4E(param_1);
  }
  return param_1;
}

