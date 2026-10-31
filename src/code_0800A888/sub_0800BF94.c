/* sub_0800BF94  (original: 0x0800BF94-0x0800BFCE in asm/code_0800A888.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 34% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801191A();
extern int sub_08011944();
extern int sub_0800C0C8();
extern int volatile DAT_03001a34;
extern undefined volatile DAT_03001c4c;


undefined4 sub_0800BF94(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x10) + -1;
  *(char *)(param_1 + 0x10) = cVar2;
  if (cVar2 == '\0') {
    sub_08011944(&DAT_03001c4c,param_1);
    if (DAT_03001a34 != 0) {
      uVar1 = sub_0800C0C8(0);
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
    return 0;
  }
  return 1;
}

