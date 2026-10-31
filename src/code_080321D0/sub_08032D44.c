/* sub_08032D44  (original: 0x08032D44-0x08032DC8 in asm/code_080321D0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011944();
extern int sub_0801952C();
extern int sub_08000158();
extern int __call_via_r3();
extern int sub_0800FE34();
extern int sub_080116FC();
extern int sub_08011CCA();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;


void sub_08032D44(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_28 (*(int *)((char *)__frame + 0x0))
#define local_24 (*(int *)((char *)__frame + 0x4))
#define local_20 (*(int *)((char *)__frame + 0x8))
#define local_1c (*(int *)((char *)__frame + 0xc))
#define local_18 (*(int *)((char *)__frame + 0x10))
#define local_14 (*(int *)((char *)__frame + 0x14))
  uVar1 = sub_08000158(0x2f);
  iVar2 = sub_08011CCA(&DAT_03001c4c,5,uVar1);
  if (iVar2 < 2) {
    __call_via_r3(param_2,1,param_3,*(int *)(*param_2 + 0x74) + *param_2);
  }
  else {
    sub_0800FE34(&local_20,param_2);
    sub_08011944(&DAT_03001c4c,param_2);
    iVar2 = sub_080116FC(&DAT_03001c4c);
    if (0x3ff < iVar2) {
      local_28 = local_20 + local_18 >> 1;
      local_24 = local_1c + local_14 >> 1;
      uVar1 = sub_0801952C(0,&local_28,0x38,local_14,local_28,local_24);
      sub_0801191A(&DAT_03001c4c,uVar1);
    }
  }
  return;
}

