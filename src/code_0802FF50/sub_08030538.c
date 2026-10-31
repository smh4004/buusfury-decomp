/* sub_08030538  (original: 0x08030538-0x08030584 in asm/code_0802FF50.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08040284();
extern int __call_via_r2();
extern int * volatile DAT_03001c34;
extern ushort volatile DAT_03003304;
extern undefined volatile DAT_03003300;


void sub_08030538(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if ((DAT_03003304 & 0xf0) != 0) {
    *(short *)((int)param_2 + 0x12) = *(short *)((int)param_2 + 0x12) + 2;
  }
  iVar1 = sub_08040284(&DAT_03003300,0xf3,0x10,0x5a);
  if (iVar1 != 0) {
    __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
    *(undefined1 *)((int)param_2 + 0x11) = 0;
    *(undefined2 *)((int)param_2 + 0x12) = 0;
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

