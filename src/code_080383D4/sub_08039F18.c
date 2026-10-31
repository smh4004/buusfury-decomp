/* sub_08039F18  (original: 0x08039F18-0x08039F4E in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern undefined volatile _0804ABC8;


void sub_08039F18(undefined4 *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804ABC8;
    sVar1 = *(short *)(param_2 + 6);
    param_1[1] = (int)*(short *)(param_2 + 4);
    param_1[2] = (int)sVar1;
    iVar2 = *(short *)(param_2 + 8) + 0x180;
    param_1[3] = (int)*(short *)(param_2 + 8);
    param_1[4] = iVar2 * iVar2;
  }
  return;
}

