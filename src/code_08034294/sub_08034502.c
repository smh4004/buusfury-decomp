/* sub_08034502  (original: 0x08034502-0x0803455C in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EEB0();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern uint volatile DAT_03003228;
extern undefined volatile _0804DF9C;


undefined4 sub_08034502(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = sub_0800EEB0(param_2,0x11,param_3,param_4,param_4);
  if ((iVar1 == 0) && (iVar1 = sub_0800EEB0(param_2,0x13), iVar1 == 0)) {
    DAT_03003228 = DAT_03003228 + 1;
    if (0xb < (int)DAT_03003228) {
      DAT_03003228 = 0;
    }
    if ((DAT_03003228 & 3) == 0) {
      uVar2 = 1;
    }
    else {
      uVar4 = DAT_03003228 & 3;
      puVar3 = (undefined4 *)sub_0803D5B8(8);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &_0804DF9C;
        puVar3[1] = uVar4;
      }
      sub_0800ED18(param_2,puVar3);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

