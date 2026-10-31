/* sub_08021280  (original: 0x08021280-0x080212FA in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_08019B4E();
extern int sub_0803D5B8();
extern int sub_08019B04();
extern undefined volatile DAT_03003e5c;
extern undefined volatile _0804A33C;
extern undefined volatile gUnknown_083192CC;


undefined4 *
sub_08021280(undefined4 *param_1,int *param_2,undefined1 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x60), param_1 != (undefined4 *)0x0)) {
    sub_08019B04(param_1,0x1000,param_4);
    *param_1 = &_0804A33C;
    iVar1 = param_2[1];
    param_1[8] = *param_2 << 8;
    param_1[9] = iVar1 << 8;
    param_1[0x17] = param_5;
    *(undefined1 *)(param_1 + 2) = param_3;
    param_1[6] = *(undefined4 *)(param_5 + 4);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0x2000;
    param_1[0x16] = 0x200;
    sub_08019B4E(param_1);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192CC,0x40,0);
  }
  return param_1;
}

