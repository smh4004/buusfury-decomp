/* sub_080369D0  (original: 0x080369D0-0x080369FA in asm/code_08036394.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C70();
extern int sub_08018C3A();
extern undefined volatile DAT_03001c4c;


undefined4 sub_080369D0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  sub_08011C70(&DAT_03001c4c,0x22,1);
  uVar1 = sub_08018C3A(param_1,param_2);
  sub_08011C70(&DAT_03001c4c,0x22,0);
  return uVar1;
}

