/* sub_0802B3D0  (original: 0x0802B3D0-0x0802B3EA in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C70();
extern int sub_08000158();
extern undefined volatile DAT_03001c4c;


void sub_0802B3D0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = sub_08000158(0x2b);
  uVar1 = sub_08011C70(&DAT_03001c4c,5,uVar1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}

