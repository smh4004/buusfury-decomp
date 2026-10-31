/* sub_0804E9AC  (original: 0x0804E9AC-0x0804E9E8 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ED18();
extern int sub_0803FACC();
extern int sub_0803D5B8();
extern undefined volatile _0804D3EC;


void sub_0804E9AC(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_2 + 0x208) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_2 + 0x20c) = *(undefined4 *)(param_2 + 0x1a4);
  uVar1 = sub_0803FACC(4);
  puVar2 = (undefined4 *)sub_0803D5B8(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &_0804D3EC;
    puVar2[1] = uVar1;
  }
  sub_0800ED18(param_2,puVar2);
  return;
}

