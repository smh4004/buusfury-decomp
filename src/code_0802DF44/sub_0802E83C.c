/* sub_0802E83C  (original: 0x0802E83C-0x0802E97A in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080115B0();
extern int sub_0801157E();
extern int sub_0800EB60();
extern int sub_0800ECDA();
extern int sub_0800433E();
extern int sub_0801713C();
extern int sub_08011B04();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern int __16__rt_sdiv();
extern int sub_0800EECC();
extern undefined1 volatile DAT_03001068;
extern undefined1 volatile DAT_03001560;
extern undefined volatile gUnknown_0805682C;
extern undefined1 volatile DAT_03001574;
extern undefined4 volatile DAT_03001b0c;
extern undefined4 volatile DAT_03001b58;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086B82EC;
extern undefined volatile _0804920C;
extern undefined volatile _0804A5E0;


undefined4 * sub_0802E83C(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iStack_20;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x178), param_1 != (undefined4 *)0x0)) {
    *param_1 = &_0804920C;
    param_1[1] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x44] = 0;
    piVar6 = param_1 + 0x45;
    *param_1 = &_0804A5E0;
    *piVar6 = 0;
    sub_08011B04(&DAT_03001c4c);
    sub_080115B0(&DAT_03001c4c);
    sub_0801157E(&DAT_03001c4c);
    param_1[0x5d] = param_2;
    iVar1 = sub_0800433E(&DAT_03001068);
    iStack_20 = __16__rt_sdiv(iVar1,0x90);
    if (0x30 < iStack_20) {
      iStack_20 = 0x30;
    }
    iVar1 = 0x70 - ((iVar1 + -1) * iStack_20 >> 1);
    param_1[0x58] = 0;
    uVar5 = 0;
    do {
      if (((&DAT_03001560)[uVar5 * 0x68] & 1) != 0) {
        iVar4 = *piVar6;
        if (DAT_03001068 == uVar5) {
          param_1[0x58] = iVar4;
        }
        *piVar6 = iVar4 + 1;
        piVar6[iVar4 * 2 + 1] = uVar5;
        uVar2 = sub_0801713C(&gUnknown_086B82EC + (uint)(byte)(&DAT_03001574)[uVar5 * 0x68] * 0x18);
        iVar3 = sub_0800EB60(0,uVar2,&DAT_03001b0c);
        piVar6[iVar4 * 2 + 2] = iVar3;
        *(undefined4 *)(iVar3 + 0x70) = 0x58;
        *(int *)(iVar3 + 0x6c) = iVar1;
        iVar1 = iVar1 + iStack_20;
        if ((-1 < (int)((uint)(byte)(&DAT_03001560)[piVar6[iVar4 * 2 + 1] * 0x68] << 0x1e)) &&
           (*(undefined1 *)(piVar6[iVar4 * 2 + 2] + 0x10) = 1,
           *(undefined **)(piVar6[iVar4 * 2 + 2] + 0x38) != &gUnknown_0805682C)) {
          sub_0800EECC();
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 9);
    iVar1 = piVar6[param_1[0x58] * 2 + 2];
    param_1[0x59] = iVar1;
    sub_0800ECDA(iVar1,1);
    sub_0800ED18(iVar1,&DAT_03001b58);
  }
  return param_1;
}

