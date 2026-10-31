/* sub_0803F540  (original: 0x0803F540-0x0803F58C in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: mem@02000000.
 */
#include "ghidra_types.h"
extern int sub_0803DA78();
extern int sub_0803D5B8();


int sub_0803F540(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_24 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0x4))
#define iStack_1c (*(int *)((char *)__frame + 0x8))
#define iStack_18 (*(int *)((char *)__frame + 0xc))
  if ((param_1 != 0) || (param_1 = sub_0803D5B8(0x34), param_1 != 0)) {
    uStack_24 = 0;
    uStack_20 = 0;
    iStack_1c = param_2;
    iStack_18 = param_3;
    sub_0803DA78(param_1,0,&uStack_24);
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 0x2c) = param_3;
    *(int *)(param_1 + 0x30) = param_3 * param_2;
    uVar1 = sub_0803D5B8();
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x20) = 0x803f445;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return param_1;
}

