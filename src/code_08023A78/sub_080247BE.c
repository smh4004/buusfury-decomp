/* sub_080247BE  (original: 0x080247BE-0x080248DC in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08019B4E();
extern int Combat_Damage();
extern int sub_08054A64();
extern int sub_0800FE78();
extern int __call_via_r2();
extern int sub_08011944();
extern int * volatile DAT_03001c34;
extern int volatile DAT_03000f94;
extern int volatile DAT_03002fbc;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086B80A8;


void sub_080247BE(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  unsigned int __frame[21];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_54 (*(int *)((char *)__frame + 0x0))
#define iStack_50 (*(int *)((char *)__frame + 0x4))
#define iStack_4c (*(int *)((char *)__frame + 0x8))
#define iStack_48 (*(int *)((char *)__frame + 0xc))
#define uStack_44 (*(undefined1 *)((char *)__frame + 0x10))
#define iStack_40 (*(int *)((char *)__frame + 0x14))
#define iStack_3c (*(int *)((char *)__frame + 0x18))
#define iStack_38 (*(int *)((char *)__frame + 0x1c))
#define iStack_34 (*(int *)((char *)__frame + 0x20))
#define auStack_30 ((undefined1 *)((char *)__frame + 0x24))
#define uStack_2c (*(undefined4 *)((char *)__frame + 0x28))
#define puStack_28 (*(undefined * *)((char *)__frame + 0x2c))
#define uStack_24 (*(undefined4 *)((char *)__frame + 0x30))
#define iStack_14 (*(int *)((char *)__frame + 0x40))
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x4c);
  iVar2 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar2;
  uVar3 = iVar2 >> 2;
  uVar4 = uVar3 & 0xff;
  *(char *)(param_1 + 0x44) = (char)uVar3;
  if (uVar4 < 5) {
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x54) + uVar4 * 0xc;
    sub_08019B4E(param_1);
    piVar1 = DAT_03001c34;
    if ((((param_2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x40) == 0)) &&
       ((DAT_03001c34 != (int *)0x0 && (DAT_03001c34[0x73] != 0)))) {
      iStack_38 = *(int *)(param_1 + 0x20) >> 8;
      iStack_40 = iStack_38 + -8;
      iStack_34 = *(int *)(param_1 + 0x24) >> 8;
      iStack_3c = iStack_34 + -8;
      iStack_38 = iStack_38 + 8;
      iStack_34 = iStack_34 + 8;
      sub_0800FE78(&iStack_54,DAT_03001c34);
      if (((iStack_54 < iStack_38) && ((iStack_40 < iStack_4c && (iStack_50 < iStack_34)))) &&
         (iStack_3c < iStack_48)) {
        uStack_24 = *(undefined4 *)(param_1 + 0x1c);
        auStack_30[0] = *(undefined1 *)(param_1 + 0x10);
        puStack_28 = &gUnknown_086B80A8;
        uStack_2c = sub_08054A64(0x424ccccd);
        uStack_44 = *(undefined1 *)(param_1 + 0x11);
        *(undefined4 *)(param_1 + 0x40) = 1;
        if (0x80 < DAT_03000f94 - DAT_03002fbc) {
          DAT_03002fbc = DAT_03000f94;
        }
        iStack_14 = param_1;
        Combat_Damage(piVar1,auStack_30);
        __call_via_r2(piVar1,auStack_30,*(int *)(*piVar1 + 0x5c) + *piVar1);
        iVar2 = __call_via_r2(piVar1,0x17,*(int *)(*piVar1 + 0x34) + *piVar1);
        if (iVar2 != 0) {
          __call_via_r2(piVar1,0,*(int *)(*piVar1 + 0x28) + *piVar1);
        }
      }
    }
  }
  else {
    sub_08011944(&DAT_03001c4c,param_1);
  }
  return;
}

