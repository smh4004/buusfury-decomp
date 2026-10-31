/* sub_0802E384  (original: 0x0802E384-0x0802E42E in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803FACC();
extern int __call_via_r2();
extern int sub_0801191A();
extern int sub_0800FE34();
extern int sub_080116FC();
extern int sub_0802A81C();
extern ushort volatile DAT_03003304;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086FD9D0;


void sub_0802E384(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_2c (*(int *)((char *)__frame + 0x0))
#define iStack_28 (*(int *)((char *)__frame + 0x4))
#define iStack_24 (*(int *)((char *)__frame + 0x8))
#define iStack_20 (*(int *)((char *)__frame + 0xc))
#define iStack_1c (*(int *)((char *)__frame + 0x10))
#define iStack_18 (*(int *)((char *)__frame + 0x14))
  if ((DAT_03003304 & 0xf3) != 0) {
    piVar3 = (int *)(*(int *)(param_1 + 4) + 4);
    *piVar3 = *piVar3 + -5;
  }
  *(bool *)((int)param_2 + 0x11) = *(int *)(*(int *)(param_1 + 4) + 4) < *(int *)(param_1 + 8) / 2;
  if (*(int *)(*(int *)(param_1 + 4) + 4) < 1) {
    iVar1 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar1) {
      iVar1 = sub_0803FACC(0x1000);
      sub_0800FE34(&iStack_2c,param_2);
      iStack_18 = iStack_28 + iStack_20 >> 1;
      iStack_1c = iStack_2c + iStack_24 >> 1;
      uVar2 = sub_0802A81C(0,&iStack_1c,&gUnknown_086FD9D0,4,iVar1 + 0x1000,0x400,0x37);
      sub_0801191A(&DAT_03001c4c,uVar2);
    }
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
  }
  return;
}

