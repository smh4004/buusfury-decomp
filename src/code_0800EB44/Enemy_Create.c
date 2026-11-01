/* Enemy_Create  (original: 0x0800F68C-0x0800F740 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800E754();
extern int sub_08009930();
extern int sub_0800AA9C();
extern int sub_08000158();
extern int sub_0803D5B8();
extern int sub_0800FDFA();
extern int sub_0800A93C();
extern int volatile DAT_03001bb0;
extern undefined4 volatile DAT_03001a54;
extern undefined4 volatile DAT_03001b0c;
extern undefined4 volatile DAT_03001bb4;
extern undefined volatile _0804C484;


undefined4 * Enemy_Create(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_24 ((undefined4 *)((char *)__frame + 0x0))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x29c), param_1 != (undefined4 *)0x0)) {
    uVar2 = sub_08000158(*(undefined4 *)(param_2 + 0x10));
    auStack_24[0] = param_4;
    sub_0800E754(param_1,uVar2,&DAT_03001b0c,param_3,param_2 + 0xc);
    *param_1 = &_0804C484;
    sub_0800A93C(param_1 + 0x8b,param_2 + 0x18);
    param_1[0x8f] = 0;
    param_1[0x9a] = 0;
    param_1[0x89] = param_3;
    param_1[0x8a] = *(undefined4 *)(param_2 + 0x14);
    *(undefined1 *)((int)param_1 + 0x291) = 0;
    *(undefined1 *)(param_1 + 0xa4) = 0;
    param_1[0xa3] = *(int *)(param_3 + 4) << 10;
    sub_0800FDFA(auStack_24,param_1);
    sub_08009930(auStack_24,DAT_03001a54,0);
    param_1[0x8e] = param_1;
    sub_0800AA9C(param_1 + 0x8e,*(undefined4 *)(param_1[0x89] + 8));
    puVar1 = &DAT_03001bb4 + DAT_03001bb0;
    DAT_03001bb0 = DAT_03001bb0 + 1;
    *puVar1 = param_1;
  }
  return param_1;
}

