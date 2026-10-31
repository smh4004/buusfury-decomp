/* sub_080109AA  (original: 0x080109AA-0x08010A3A in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 98% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0801714A();
extern int __call_via_r2();
extern int sub_08010974();
extern int sub_0803D5B8();
extern int sub_0800E6B8();
extern undefined volatile _0804C9F0;
extern undefined4 * volatile DAT_03001c34;
extern byte volatile DAT_03001068;
extern undefined1 volatile DAT_03001574;
extern undefined4 volatile DAT_03001b0c;
extern undefined4 volatile DAT_03001c3c;
extern undefined volatile gUnknown_086B82EC;


undefined4 * sub_080109AA(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_4;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x240), param_1 != (undefined4 *)0x0)) {
    sub_0800E6B8(param_1,param_2,&DAT_03001b0c,param_3,iVar2);
    *param_1 = &_0804C9F0;
    DAT_03001c34 = param_1;
    param_1[0x89] = &DAT_03001c3c;
    *(undefined2 *)(param_1 + 0x8c) = 0;
    param_1[0x8d] = 0;
    param_1[0x8a] = 0;
    if (param_4 != 0) {
      piVar1 = (int *)sub_0801714A(&gUnknown_086B82EC +
                                   (uint)(byte)(&DAT_03001574)[(uint)DAT_03001068 * 0x68] * 0x18);
      param_1[0x8b] = piVar1;
      __call_via_r2(piVar1,param_1,*(int *)*piVar1 + *piVar1);
      sub_08010974(param_1,0);
    }
  }
  return param_1;
}

