/* sub_080256F0  (original: 0x080256F0-0x0802573C in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 82% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08004B08();
extern int sub_08024A7C();
extern int sub_0803D5B8();
extern undefined1 volatile DAT_03001068;
extern undefined volatile _0804A4E8;


undefined4 * sub_080256F0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x8044), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08024A7C(param_1);
  *param_1 = &_0804A4E8;
  param_1[0x200f] = 0;
  param_1[0x200b] = 0;
  param_1[0x200c] = 0;
  param_1[0x200d] = 0xf0;
  param_1[0x200e] = param_1[0x200c] + 0xa0;
  uVar1 = sub_08004B08(&DAT_03001068);
  param_1[0x2010] = uVar1;
  return param_1;
}

