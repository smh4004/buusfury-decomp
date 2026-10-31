/* sub_08030384  (original: 0x08030384-0x080303C4 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080309F4();
extern int sub_08030950();
extern int sub_0803D5B8();
extern undefined volatile _0804D8F0;


undefined4 * sub_08030384(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  unsigned int __frame[5];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_14 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_10 (*(undefined4 *)((char *)__frame + 0x4))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804D8F0;
    uVar1 = sub_080309F4(0,param_2);
    param_1[1] = uVar1;
    uStack_14 = 0x78;
    uStack_10 = 0x94;
    uVar1 = sub_08030950(0x98,&uStack_14);
    param_1[2] = uVar1;
  }
  return param_1;
}

