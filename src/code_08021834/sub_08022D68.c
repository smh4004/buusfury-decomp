/* sub_08022D68  (original: 0x08022D68-0x08022DAA in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801157E();
extern int __call_via_r2();
extern int sub_080115B0();
extern int sub_08011B04();
extern int sub_08049138();
extern undefined volatile DAT_03001c4c;
extern undefined2 volatile REG_DISPCNT;


void sub_08022D68(int *param_1)

{
  ushort uVar1;
  
  uVar1 = REG_DISPCNT;
  REG_DISPCNT = uVar1 & 0xfeff;
  sub_08011B04(&DAT_03001c4c);
  sub_080115B0(&DAT_03001c4c);
  sub_0801157E(&DAT_03001c4c);
  sub_08049138(0x3001068,(int)(param_1 + 0x17d),0x8a8);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

