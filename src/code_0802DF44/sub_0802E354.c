/* sub_0802E354  (original: 0x0802E354-0x0802E384 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_08010BB8();
extern undefined4 volatile DAT_03001c34;
extern undefined volatile _08049D74;


void sub_0802E354(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0x96;
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 8) = 0x38;
  uVar2 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined4 *)sub_0803D5B8(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &_08049D74;
    puVar1[1] = uVar2;
  }
  *(undefined4 **)(param_1 + 4) = puVar1;
  sub_08010BB8(DAT_03001c34,puVar1);
  return;
}

