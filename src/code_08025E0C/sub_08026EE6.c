/* sub_08026EE6  (original: 0x08026EE6-0x08026F2A in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 96% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08026DE4();
extern int sub_0803D5B8();
extern undefined volatile _0804D594;


undefined4 * sub_08026EE6(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_14 (*(undefined4 *)((char *)__frame + 0x4))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x30), param_1 != (undefined4 *)0x0)) {
    uStack_18 = 0;
    uStack_14 = 0;
    sub_08026DE4(param_1,&uStack_18,1);
    *param_1 = &_0804D594;
    param_1[0xb] = param_2;
    iVar1 = param_3[1];
    param_1[9] = *param_3 + -4;
    param_1[10] = iVar1 + -4;
  }
  return param_1;
}

