/* sub_080261D4  (original: 0x080261D4-0x08026212 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 2/2 snapshots, 92% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08024A7C();
extern int sub_08011C0C();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03002844;
extern undefined volatile _0804A570;


undefined4 * sub_080261D4(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)sub_0803D5B8(0x520), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  sub_08024A7C(param_1);
  *param_1 = &_0804A570;
  param_1[3] = 0;
  sub_08011C0C(DAT_03002844,0x16,param_1 + 3);
  return param_1;
}

