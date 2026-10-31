/* sub_08037C1C  (original: 0x08037C1C-0x08037C72 in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019B04();
extern int sub_0803D5B8();
extern int sub_08019B4E();
extern undefined volatile _0804B4AC;
extern undefined volatile gUnknown_0876CBD8;


undefined4 * sub_08037C1C(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x48), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08019B04(param_1,0x400,param_2);
  *param_1 = &_0804B4AC;
  iVar1 = *param_3;
  iVar2 = param_3[1];
  param_1[0x10] = 0;
  param_1[8] = iVar1 << 8;
  param_1[9] = iVar2 << 8;
  iVar1 = 0x3c;
  if (*(char *)(param_2 + 0x10) != '\x03') {
    iVar1 = 0;
  }
  param_1[0x11] = &gUnknown_0876CBD8 + iVar1;
  param_1[6] = &gUnknown_0876CBD8 + iVar1;
  sub_08019B4E(param_1);
  return param_1;
}

