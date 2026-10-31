/* sub_08007858  (original: 0x08007858-0x08007916 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 95% of instructions covered.
 */
#include "ghidra_types.h"
extern int __16__rt_sdiv();
extern int sub_0803D5B8();
extern int volatile DAT_030019a4;
extern int volatile DAT_030019a8;
extern undefined volatile _0804AB24;


undefined4 * sub_08007858(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  unsigned int __frame[12];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_30 (*(int *)((char *)__frame + 0x0))
#define iStack_2c (*(int *)((char *)__frame + 0x4))
#define iStack_28 (*(int *)((char *)__frame + 0x8))
#define iStack_24 (*(int *)((char *)__frame + 0xc))
#define puStack_20 (*(undefined4 * *)((char *)__frame + 0x10))
#define piStack_1c (*(int * *)((char *)__frame + 0x14))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x18))
  puStack_20 = param_1;
  piStack_1c = param_2;
  uStack_18 = param_3;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x10), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804AB24;
    iStack_28 = *param_2 * 0x400 - DAT_030019a4;
    iStack_24 = param_2[1] * 0x400 - DAT_030019a8;
    iStack_30 = iStack_28;
    if (iStack_28 < 0) {
      iStack_30 = -iStack_28;
    }
    iStack_2c = iStack_24;
    if (iStack_24 < 0) {
      iStack_2c = -iStack_24;
    }
    piVar1 = &iStack_2c;
    if (iStack_2c < iStack_30) {
      piVar1 = &iStack_30;
    }
    iVar2 = __16__rt_sdiv(uStack_18,*piVar1);
    param_1[3] = (iVar2 >> 10) + 1;
    iVar2 = param_1[3];
    uVar3 = __16__rt_sdiv(iVar2 * 0x400,iStack_28 << 10);
    uVar4 = __16__rt_sdiv(iVar2 * 0x400,iStack_24 << 10);
    param_1[1] = uVar3;
    param_1[2] = uVar4;
  }
  return param_1;
}

