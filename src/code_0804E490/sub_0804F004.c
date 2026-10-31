/* sub_0804F004  (original: 0x0804F004-0x0804F034 in asm/code_0804E490.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_0803FACC();
extern undefined volatile _0804DEDC;


undefined4 * sub_0804F004(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)sub_0803D5B8(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = param_1;
    *puVar1 = &_0804DEDC;
    iVar2 = sub_0803FACC(0x78);
    puVar1[3] = iVar2 + 0xf0;
  }
  return puVar1;
}

