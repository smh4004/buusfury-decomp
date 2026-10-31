/* ScriptVM_Run  (original: 0x08004038-0x08004098 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: cand-error.
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern undefined4 volatile DAT_03001034;
extern undefined4 * volatile DAT_03001030;
extern undefined4 volatile DAT_03001038;
extern undefined * volatile gScriptOpcodeFuncs;


void ScriptVM_Run(undefined4 *param_1,byte *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_1c (*(byte * *)((char *)__frame + 0x0))
#define puStack_18 (*(undefined4 * *)((char *)__frame + 0x4))
  puVar1 = &DAT_03001038 + DAT_03001034;
  DAT_03001034 = DAT_03001034 + 1;
  *puVar1 = param_1;
  DAT_03001030 = param_3;
  if (param_3 == (undefined4 *)0x0) {
    DAT_03001030 = param_1 + 0x17;
  }
  param_1[0x16] = DAT_03001030;
  *param_1 = 0;
  param_1[0x11] = 0;
  local_1c = param_2;
  puStack_18 = param_3;
  while( true ) {
    bVar2 = *local_1c;
    local_1c = local_1c + 1;
    if ((&gScriptOpcodeFuncs)[bVar2] == (undefined *)0x0) break;
    __call_via_r2(param_1,&local_1c);
  }
  DAT_03001034 = DAT_03001034 + -1;
  if (DAT_03001034 != 0) {
    DAT_03001030 = *(undefined4 **)((&DAT_03001034)[DAT_03001034] + 0x58);
  }
  return;
}

