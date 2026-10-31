/* sub_08029384  (original: 0x08029384-0x080293E4 in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019B4E();
extern int sub_08019B04();
extern int sub_0803D5B8();
extern undefined volatile gUnknown_087501EC;
extern undefined volatile _0804BFA0;


undefined4 *
sub_08029384(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x58), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x400,param_3);
    *param_1 = &_0804BFA0;
    param_1[0x14] = param_4;
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar1 << 8;
    param_1[0x12] = 0;
    param_1[0x15] = &gUnknown_087501EC;
    param_1[0x13] = 0;
    param_1[6] = &gUnknown_087501EC;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(undefined1 *)(param_1 + 2) = param_5;
    sub_08019B4E(param_1);
  }
  return param_1;
}

