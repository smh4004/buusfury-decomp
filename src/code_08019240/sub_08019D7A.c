/* sub_08019D7A  (original: 0x08019D7A-0x08019DA8 in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080134B8();
extern int volatile DAT_03001988;
extern undefined volatile gUnknown_0871DA98;


undefined4 sub_08019D7A(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*param_2 == '\0') {
    if (DAT_03001988 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = sub_080134B8(param_1,(&gUnknown_0871DA98)
                                   [*(byte *)((uint)*(byte *)(param_1 + 0x15) * 2 + param_1 + 0x2e)]
                           ,&gUnknown_0871DA98,param_4,param_4);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

