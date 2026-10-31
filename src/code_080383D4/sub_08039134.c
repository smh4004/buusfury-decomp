/* sub_08039134  (original: 0x08039134-0x08039182 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800AA9C();
extern int sub_0800E6B8();
extern int sub_0803D5B8();
extern undefined4 volatile DAT_03001b0c;
extern undefined volatile _0804D514;


undefined4 * sub_08039134(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define puStack_18 (*(undefined4 * *)((char *)__frame + 0x0))
  if ((param_1 != (undefined4 *)0x0) ||
     (puStack_18 = param_4, param_1 = (undefined4 *)sub_0803D5B8(0x27c),
     param_1 != (undefined4 *)0x0)) {
    puStack_18 = (undefined4 *)CONCAT22((short)param_4[1],(short)*param_4);
    sub_0800E6B8(param_1,param_2,&DAT_03001b0c,&puStack_18);
    *param_1 = &_0804D514;
    param_1[0x8b] = 0;
    param_1[0x96] = 0;
    param_1[0x8a] = param_1;
    sub_0800AA9C(param_1 + 0x8a,*(undefined4 *)(param_3 + 8));
  }
  return param_1;
}

