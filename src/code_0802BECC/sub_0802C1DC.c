/* sub_0802C1DC  (original: 0x0802C1DC-0x0802C33C in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r2();
extern int sub_0803FACC();
extern int sub_0801191A();
extern int sub_0800FE34();
extern int sub_080116FC();
extern int sub_0802A81C();
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086FD9D0;


undefined4 sub_0802C1DC(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  unsigned int __frame[15];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_3c (*(int *)((char *)__frame + 0x0))
#define local_38 (*(int *)((char *)__frame + 0x4))
#define local_34 (*(int *)((char *)__frame + 0x8))
#define local_30 (*(int *)((char *)__frame + 0xc))
#define local_2c (*(int *)((char *)__frame + 0x10))
#define local_28 (*(int *)((char *)__frame + 0x14))
#define local_24 (*(int *)((char *)__frame + 0x18))
#define local_20 (*(int *)((char *)__frame + 0x1c))
#define local_1c (*(int *)((char *)__frame + 0x20))
#define local_18 (*(int *)((char *)__frame + 0x24))
  __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
  iVar4 = 0;
  do {
    piVar3 = &local_24;
    do {
      iVar1 = sub_0803FACC(0xc9,piVar3);
      local_1c = (iVar1 + -100) * 0x100;
      iVar1 = sub_0803FACC(0xc9);
      local_18 = (iVar1 + -100) * 0x100;
      local_34 = param_2[0x68] + local_1c;
      local_30 = param_2[0x69] + local_18;
      piVar3 = (int *)0xffffba00;
      local_2c = local_34;
      local_28 = local_30;
      local_24 = local_34;
      local_20 = local_30;
      if (((local_1c < -0x45ff) || (0x45ff < local_1c)) || (local_18 < -0x45ff)) break;
    } while (local_18 < 0x4600);
    iVar1 = __call_via_r2(param_2,&local_24,*(int *)(*param_2 + 0x54) + *param_2);
    if (iVar1 != 0) {
      iVar4 = sub_080116FC(&DAT_03001c4c);
      if (0x3ff < iVar4) {
        iVar4 = sub_0803FACC(0x1000);
        iVar4 = iVar4 + 0x1000;
        sub_0800FE34(&local_3c,param_2);
        local_2c = local_3c + local_34 >> 1;
        local_28 = local_38 + local_30 >> 1;
        uVar2 = sub_0802A81C(0,&local_2c,&gUnknown_086FD9D0,4,iVar4,0x400,0x37,local_28);
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
      param_2[0x68] = local_24;
      param_2[0x69] = local_20;
      iVar4 = sub_080116FC(&DAT_03001c4c);
      if (0x3ff < iVar4) {
        iVar4 = sub_0803FACC(0x1000);
        sub_0800FE34(&local_3c,param_2);
        local_28 = local_38 + local_30 >> 1;
        local_2c = local_3c + local_34 >> 1;
        uVar2 = sub_0802A81C(0,&local_2c,&gUnknown_086FD9D0,4,iVar4 + 0x1000,0x400,0x37,local_2c,
                             local_28);
        sub_0801191A(&DAT_03001c4c,uVar2);
      }
      goto _0802C328;
    }
    iVar4 = iVar4 + 1;
    if (0xf < iVar4) {
_0802C328:
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
      return 1;
    }
  } while( true );
}

