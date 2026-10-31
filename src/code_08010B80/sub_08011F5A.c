/* sub_08011F5A  (original: 0x08011F5A-0x08011FC6 in asm/code_08010B80.s)
 * Ghidra decompilation, compiled with GCC; snapshots inconclusive (BIOS call or fault before return).
 */
#include "ghidra_types.h"
extern int ScriptVM_Run();
extern int sub_0803D5B8();
extern undefined volatile _08049E84;


undefined4 * sub_08011F5A(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned int __frame[32];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_80 (*(int *)((char *)__frame + 0x0))
#define uStack_7c (*(undefined2 *)((char *)__frame + 0x4))
#define uStack_3c (*(undefined4 *)((char *)__frame + 0x44))
#define puStack_28 (*(undefined4 * *)((char *)__frame + 0x58))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(8), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_08049E84;
    param_1[1] = param_3;
    iStack_80 = 0;
    uStack_3c = 0;
    ScriptVM_Run(&iStack_80,param_2,*(undefined4 *)(param_4 + 0x14));
    if (iStack_80 == 1) {
      *(undefined2 *)param_1[1] = uStack_7c;
    }
    if (puStack_28 != *(undefined4 **)(param_4 + 0x14)) {
      *(undefined4 *)(param_4 + 0x18) = *puStack_28;
      *(undefined4 *)(param_4 + 0x1c) = puStack_28[1];
      *(undefined4 *)(param_4 + 0x20) = puStack_28[2];
      *(undefined4 *)(param_4 + 0x24) = puStack_28[3];
      *(int *)(param_4 + 0x14) = param_4 + 0x18;
    }
  }
  return param_1;
}

