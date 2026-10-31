/* sub_0802EC9C  (original: 0x0802EC9C-0x0802ECEA in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_0803E378();
extern undefined4 volatile DAT_03001b0c;
extern undefined4 volatile DAT_03001b58;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_0831947C;


void sub_0802EC9C(int param_1)

{
  undefined4 uVar1;
  
  sub_0803E378(&DAT_03003e5c,&gUnknown_0831947C,0x40,0);
  uVar1 = *(undefined4 *)(param_1 + 0x164);
  sub_0800ECDA(uVar1,0);
  sub_0800ED18(uVar1,&DAT_03001b0c);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x160) * 8 + param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x164) = uVar1;
  sub_0800ECDA(uVar1,1);
  sub_0800ED18(uVar1,&DAT_03001b58);
  return;
}

