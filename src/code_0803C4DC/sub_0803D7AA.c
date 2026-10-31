/* sub_0803D7AA  (original: 0x0803D7AA-0x0803D7FA in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int sub_080400D8();
extern int sub_080402D6();
extern int sub_0803FB7C();
extern int sub_0803D4D0();
extern int sub_0803D4A0();
extern int sub_0803F3DA();
extern int sub_0803F1B8();
extern int sub_0803D5B8();
extern undefined2 volatile REG_IE;
extern undefined4 volatile DAT_03000fb0;
extern undefined volatile DAT_03003300;
extern undefined volatile DAT_03003898;
extern undefined volatile DAT_03004a68;


int sub_0803D7AA(int param_1)

{
  ushort uVar1;
  
  if ((param_1 != 0) || (param_1 = sub_0803D5B8(1), param_1 != 0)) {
    sub_080402D6(&DAT_03003300);
    sub_0803D4D0();
    sub_0803F3DA(&DAT_03000fb0);
    sub_080400D8();
    DAT_03000fb0 = 0x803d785;
    uVar1 = REG_IE;
    REG_IE = uVar1 | 1;
    sub_0803F1B8(&DAT_03003898);
    sub_0803FB7C(&DAT_03004a68);
    sub_0803D4A0(&DAT_03003300);
  }
  return param_1;
}

