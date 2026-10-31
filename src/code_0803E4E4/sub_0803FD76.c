/* sub_0803FD76  (original: 0x0803FD76-0x0803FDF4 in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08046FF4();
extern int sub_08046C28();
extern int sub_08046B70();


undefined4 ** sub_0803FD76(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  unsigned int __frame[17];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_44 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_3c (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0xc))
#define iStack_34 (*(int *)((char *)__frame + 0x10))
#define puStack_2c (*(undefined4 * *)((char *)__frame + 0x18))
#define puStack_28 (*(undefined4 * *)((char *)__frame + 0x1c))
#define puStack_24 (*(undefined4 * *)((char *)__frame + 0x20))
#define puStack_20 (*(undefined4 * *)((char *)__frame + 0x24))
#define puStack_1c (*(undefined4 * *)((char *)__frame + 0x28))
#define puStack_18 (*(undefined4 * *)((char *)__frame + 0x2c))
  puStack_20 = param_1;
  puStack_1c = param_2;
  puStack_18 = param_3;
  sub_08046FF4(&uStack_44,&puStack_2c,8,0x8050761);
  lVar3 = sub_08046B70(*param_3,*param_2);
  lVar4 = sub_08046B70(param_3[2],param_2[1]);
  uStack_44 = sub_08046C28((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  puStack_24 = param_3 + 1;
  lVar3 = sub_08046B70(param_3[1],*param_2);
  puStack_28 = param_3 + 3;
  lVar4 = sub_08046B70(param_3[3],param_2[1]);
  uStack_40 = sub_08046C28((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  lVar3 = sub_08046B70(*param_3,param_2[2]);
  puStack_2c = param_2 + 3;
  lVar4 = sub_08046B70(param_3[2],param_2[3]);
  uStack_3c = sub_08046C28((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  lVar3 = sub_08046B70(*puStack_24,param_2[2]);
  lVar4 = sub_08046B70(*puStack_28,*puStack_2c);
  uStack_38 = sub_08046C28((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  lVar3 = sub_08046B70(*param_3,param_2[4]);
  lVar4 = sub_08046B70(param_3[2],param_2[5]);
  iStack_34 = sub_08046C28((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  iStack_34 = iStack_34 + param_3[4];
  lVar3 = sub_08046B70(*puStack_24,param_2[4]);
  lVar4 = sub_08046B70(*puStack_28,param_2[5]);
  iVar1 = sub_08046C28((int)(lVar3 + lVar4),(int)((ulonglong)(lVar3 + lVar4) >> 0x20),10);
  iVar2 = param_3[5];
  *puStack_20 = uStack_44;
  puStack_20[1] = uStack_40;
  puStack_20[2] = uStack_3c;
  puStack_20[3] = uStack_38;
  puStack_20[4] = iStack_34;
  puStack_20[5] = iVar1 + iVar2;
  return &puStack_2c;
}

