/* sub_0800CB14  (original: 0x0800CB14-0x0800CBA8 in asm/code_0800CB14.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800CEF4();
extern int sub_0803D5B8();
extern undefined volatile _0804E288;


undefined4 * sub_0800CB14(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x5c), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_0800CEF4(param_1,param_2,param_3);
  *param_1 = &_0804E288;
  *(undefined1 *)(param_1 + 2) = 0x38;
  param_1[1] = *(undefined4 *)(param_2 + 0xc);
  puVar1 = param_1 + 0x15;
  param_1[0x11] = (int)(param_1[9] + param_1[0xb]) >> 1;
  param_1[0xd] = param_1[0xb] - param_1[9];
  param_1[0x12] = param_1[0xc];
  iVar2 = param_1[0xc] - param_1[10];
  param_1[0xf] = 0;
  param_1[0xe] = iVar2;
  param_1[0x10] = iVar2 * 0x80;
  *puVar1 = 0xf000;
  if (*(char *)(param_1[8] + 0x16) == '(') {
    *puVar1 = 0x1b800;
  }
  if (*(char *)(param_1[8] + 0x16) == '<') {
    if (0x10 < (int)param_1[0xd]) {
      param_1[0x12] = param_1[0xc] * 3 + param_1[10] >> 2;
      param_1[0x10] = (int)param_1[0x10] / 2;
    }
    *puVar1 = 0;
  }
  return param_1;
}

