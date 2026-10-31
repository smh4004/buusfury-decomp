/* sub_0802D3BC  (original: 0x0802D3BC-0x0802D49E in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EDF8();
extern int sub_0803FACC();
extern int sub_08000158();
extern int sub_0801191A();
extern int sub_0800FE34();
extern int sub_080116FC();
extern int sub_0802A81C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086FD9D0;


void sub_0802D3BC(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_2c (*(int *)((char *)__frame + 0x0))
#define iStack_28 (*(int *)((char *)__frame + 0x4))
#define iStack_24 (*(int *)((char *)__frame + 0x8))
#define iStack_20 (*(int *)((char *)__frame + 0xc))
#define iStack_1c (*(int *)((char *)__frame + 0x10))
#define iStack_18 (*(int *)((char *)__frame + 0x14))
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x58);
    iVar1 = sub_08000158(0xb0);
    if ((iVar3 == iVar1) ||
       (iVar3 = *(int *)(param_2 + 0x58), iVar1 = sub_08000158(0xaf), iVar3 == iVar1)) {
      uVar2 = sub_08000158(0xb1);
      sub_0800EDF8(param_2,uVar2);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x58);
      iVar1 = sub_08000158(0x101);
      if ((iVar3 == iVar1) ||
         (iVar3 = *(int *)(param_2 + 0x58), iVar1 = sub_08000158(0xb2), iVar3 == iVar1)) {
        uVar2 = sub_08000158(0x100);
        sub_0800EDF8(param_2,uVar2);
      }
      else {
        iVar3 = *(int *)(param_2 + 0x58);
        iVar1 = sub_08000158(0x56);
        if ((iVar3 == iVar1) ||
           (iVar3 = *(int *)(param_2 + 0x58), iVar1 = sub_08000158(0xac), iVar3 == iVar1)) {
          uVar2 = sub_08000158(0x55);
          sub_0800EDF8(param_2,uVar2);
        }
      }
    }
    iVar1 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar1) {
      iVar1 = sub_0803FACC(0x1000);
      sub_0800FE34(&iStack_2c,param_2);
      iStack_18 = iStack_28 + iStack_20 >> 1;
      iStack_1c = iStack_2c + iStack_24 >> 1;
      uVar2 = sub_0802A81C(0,&iStack_1c,&gUnknown_086FD9D0,4,iVar1 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar2);
    }
  }
  return;
}

