/* sub_080254A8  (original: 0x080254A8-0x08025510 in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08025004();
extern ushort volatile DAT_03003302;
extern ushort volatile DAT_03003304;


void sub_080254A8(int *param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((int)((uint)DAT_03003302 << 0x19) < 0) && (param_1[0x2c6] != 0)) {
    param_1[0x2c6] = param_1[0x2c6] + -1;
    sub_08025004(param_1);
    cVar1 = '\x01';
  }
  if ((int)((uint)DAT_03003302 << 0x18) < 0) {
    if (param_1[0x2c6] < param_1[0x2c7]) {
      param_1[0x2c6] = param_1[0x2c6] + 1;
      sub_08025004(param_1);
      cVar1 = '\x01';
    }
  }
  if ((char)param_1[3] != cVar1) {
    *(char *)(param_1 + 3) = cVar1;
  }
  if ((DAT_03003304 & 1) != 0) {
    __call_via_r1(param_1,*(int *)(*param_1 + 0x1c) + *param_1);
  }
  return;
}

