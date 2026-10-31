/* sub_080176AC  (original: 0x080176AC-0x080176D6 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 100% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049144();
extern undefined volatile _0804A040;


undefined4 * sub_080176AC(undefined4 *param_1)

{
  *param_1 = &_0804A040;
  sub_08049144((int)(param_1 + 1),0x5000000,0x200);
  sub_08049144((int)(param_1 + 0x81),0x5000200,0x200);
  return param_1;
}

