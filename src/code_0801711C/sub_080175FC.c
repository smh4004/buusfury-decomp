/* sub_080175FC  (original: 0x080175FC-0x0801765E in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 44% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern ushort volatile DAT_03003304;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_08319488;
extern undefined volatile gUnknown_0831947C;


undefined4 sub_080175FC(int param_1)

{
  uint uVar1;
  
  if ((int)((uint)DAT_03003304 << 0x1c) < 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_08319488,0x40,0);
    return 4;
  }
  if ((DAT_03003304 & 0x30) != 0) {
    sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
    uVar1 = *(uint *)(param_1 + 0x120) ^ 1;
    *(uint *)(param_1 + 0x120) = uVar1;
    if (*(int *)(param_1 + 0x118) <= (int)uVar1) {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x118) + -1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return 0;
}

