/* sub_0800C454  (original: 0x0800C454-0x0800C4A6 in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011874();
extern int sub_0803D5B8();
extern undefined volatile DAT_03001af8;
extern undefined volatile _08049F38;
extern undefined volatile gUnknown_08072500;


undefined4 * sub_0800C454(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x34), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08011874(param_1,&DAT_03001af8,&gUnknown_08072500,0x40);
  *param_1 = &_08049F38;
  iVar1 = param_2[1];
  param_1[7] = (*param_2 + -4) * 0x100;
  param_1[8] = (iVar1 + -4) * 0x100;
  param_1[9] = *param_3;
  param_1[10] = param_3[1];
  param_1[6] = 0x20;
  *(undefined1 *)(param_1 + 2) = 0x38;
  return param_1;
}

