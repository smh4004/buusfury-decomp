/* sub_0802BD4C  (original: 0x0802BD4C-0x0802BD90 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800DA26();
extern int sub_0803D5B8();
extern int sub_0800D960();
extern undefined volatile _0804B358;


undefined4 * sub_0802BD4C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_18 ((undefined1 *)((char *)__frame + 0x0))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x34), param_1 != (undefined4 *)0x0)) {
    sub_0800DA26(auStack_18,param_2,param_3);
    sub_0800D960(param_1,param_2,auStack_18);
    *param_1 = &_0804B358;
    param_1[0xc] = 0;
    *(undefined1 *)(param_1 + 2) = 0x28;
  }
  return param_1;
}

