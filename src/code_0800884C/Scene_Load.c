/* Scene_Load  (original: 0x08009030-0x080090E6 in asm/code_0800884C.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: different-exit, inconclusive.
 */
#include "ghidra_types.h"
extern int sub_080089CC();
extern int sub_08004784();
extern int Area_Lookup();
extern int sub_080089A0();
extern int ScriptVM_Run();
extern int __call_via_r2();
extern int sub_0801191A();
extern int sub_0800953E();
extern undefined4 volatile DAT_030019a4;
extern undefined volatile DAT_03001c4c;


void Scene_Load(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,int param_6,undefined4 param_7)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  unsigned int __frame[63];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_fc ((undefined4 *)((char *)__frame + 0x0))
#define local_b8 (*(undefined4 *)((char *)__frame + 0x44))
#define puStack_24 (*(undefined1 * *)((char *)__frame + 0xd8))
#define uStack_20 (*(undefined4 *)((char *)__frame + 0xdc))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0xe0))
#define local_18 (*(undefined4 *)((char *)__frame + 0xe4))
  iVar4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x34);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *param_1 = (char)param_2;
  param_1[1] = (char)param_3;
  puStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  uVar2 = Area_Lookup();
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar1 = sub_080089A0(uVar2,local_18);
  param_1[2] = uVar1;
  uVar2 = sub_080089CC(*(undefined4 *)(param_1 + 4));
  sub_0800953E(&DAT_030019a4,uVar2,param_5,param_7);
  if (iVar4 != 0) {
    local_fc[0] = 0;
    local_b8 = 0;
    ScriptVM_Run(local_fc,iVar4,0);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x30) != 0) {
    local_fc[0] = 0;
    local_b8 = 0;
    ScriptVM_Run(local_fc,*(int *)(*(int *)(param_1 + 4) + 0x30),0);
  }
  if ((param_6 != 0) && (iVar4 = 0, *(char *)(*(int *)(param_1 + 4) + 4) != '\0')) {
    do {
      puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + iVar4 * 4);
      iVar3 = sub_08004784(puVar5[1]);
      if (iVar3 != 0) {
        uVar2 = __call_via_r2(puVar5,iVar4,*puVar5);
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 4));
  }
  return;
}

