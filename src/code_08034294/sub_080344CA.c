/* sub_080344CA  (original: 0x080344CA-0x08034502 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern uint volatile DAT_03003228;
extern undefined volatile _0804DF9C;


void sub_080344CA(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  *(undefined4 *)(param_2 + 0x208) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_2 + 0x20c) = *(undefined4 *)(param_2 + 0x1a4);
  uVar2 = DAT_03003228 & 3;
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_0804DF9C;
    puVar1[1] = uVar2;
  }
  sub_0800ED18(param_2,puVar1);
  return;
}

