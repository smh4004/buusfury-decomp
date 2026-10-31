/* sub_0801B00A  (original: 0x0801B00A-0x0801B04A in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_0800DE60();
extern int sub_0804F944();
extern int sub_0801191A();
extern int sub_08037C1C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_083192CC;


void sub_0801B00A(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_18 ((undefined1 *)((char *)__frame + 0x0))
  sub_0800DE60();
  sub_0804F944(auStack_18,param_2);
  uVar1 = sub_08037C1C(0,param_2,auStack_18);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  sub_0801191A(&DAT_03001c4c,uVar1);
  sub_0803E378(&DAT_03003e5c,&gUnknown_083192CC,0x40,0);
  return;
}

