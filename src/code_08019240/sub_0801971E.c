/* sub_0801971E  (original: 0x0801971E-0x0801978C in asm/code_08019240.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


undefined4 sub_0801971E(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_2 == 0x12) {
    if (param_1[4] == param_3) {
      sub_08011944(&DAT_03001c4c,param_1,param_3,0x12,param_4);
    }
    return 0;
  }
  if (param_2 < 0x13) {
    if (param_2 == 0xb) {
      *(undefined1 *)(param_1 + 5) = 0xff;
      return 0;
    }
    if (param_2 == 0xc) {
      __call_via_r1(param_1,*(int *)(*param_1 + 8) + *param_1);
      return 0;
    }
    if (param_2 == 0x11) {
      if (param_1[4] == param_3) {
        param_1[4] = 0;
      }
      return 0;
    }
  }
  else {
    if (param_2 == 0x13) {
      *(undefined1 *)((int)param_1 + 0x17) = 0xff;
      *(char *)((int)param_1 + 0x15) = (char)param_1[5];
      param_1[4] = 0;
      return 1;
    }
    if (param_2 == 0x20) {
      param_1[4] = param_3;
      return 1;
    }
  }
  return 0;
}

