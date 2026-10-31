/* sub_080303C4  (original: 0x080303C4-0x080303DC in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;


void sub_080303C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 4),param_3,param_4,param_4);
  sub_0801191A(&DAT_03001c4c,*(undefined4 *)(param_1 + 8));
  return;
}

