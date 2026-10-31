/* sub_08025FAC  (original: 0x08025FAC-0x0802601A in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08025F66();
extern ushort volatile DAT_03003302;
extern ushort volatile DAT_03003304;


void sub_08025FAC(int *param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((int)((uint)DAT_03003302 << 0x19) < 0) && (param_1[4] != 0)) {
    param_1[4] = param_1[4] + -1;
    sub_08025F66(param_1);
    cVar1 = '\x01';
  }
  if ((int)((uint)DAT_03003302 << 0x18) < 0) {
    if (param_1[4] < param_1[5]) {
      param_1[4] = param_1[4] + 1;
      sub_08025F66(param_1);
      cVar1 = '\x01';
    }
  }
  if (*(char *)((int)param_1 + 0xd) != cVar1) {
    *(char *)((int)param_1 + 0xd) = cVar1;
  }
  if ((int)((uint)DAT_03003304 << 0x1e) < 0) {
    *(undefined1 *)(param_1 + 3) = 1;
  }
  if ((DAT_03003304 & 1) != 0) {
    __call_via_r1(param_1,*(int *)(*param_1 + 0x1c) + *param_1);
  }
  return;
}

