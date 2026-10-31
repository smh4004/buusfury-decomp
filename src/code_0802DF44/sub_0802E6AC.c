/* sub_0802E6AC  (original: 0x0802E6AC-0x0802E6CC in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802BFBC();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_087573A0;


void sub_0802E6AC(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_0802BFBC(*(undefined4 *)(param_1 + 4),&gUnknown_087573A0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}

