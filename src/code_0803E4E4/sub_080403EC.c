/* sub_080403EC  (original: 0x080403EC-0x080403FC in asm/code_0803E4E4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"


void sub_080403EC(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  unsigned int __frame[25];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_64 (*(int *)((char *)__frame + 0x0))
#define iStack_60 (*(int *)((char *)__frame + 0x4))
#define iStack_5c (*(int *)((char *)__frame + 0x8))
#define iStack_58 (*(int *)((char *)__frame + 0xc))
#define iStack_54 (*(int *)((char *)__frame + 0x10))
#define iStack_50 (*(int *)((char *)__frame + 0x14))
#define iStack_4c (*(int *)((char *)__frame + 0x18))
#define iStack_48 (*(int *)((char *)__frame + 0x1c))
#define iStack_44 (*(int *)((char *)__frame + 0x20))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0x24))
#define uStack_3c (*(undefined4 *)((char *)__frame + 0x28))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x2c))
#define puStack_34 (*(undefined4 * *)((char *)__frame + 0x30))
#define puStack_30 (*(undefined4 * *)((char *)__frame + 0x34))
#define puStack_2c (*(undefined4 * *)((char *)__frame + 0x38))
#define puStack_28 (*(undefined4 * *)((char *)__frame + 0x3c))
#define puStack_24 (*(undefined4 * *)((char *)__frame + 0x40))
#define ppuStack_20 (*(undefined4 ** *)((char *)__frame + 0x44))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x48))
#define puStack_18 (*(undefined4 * *)((char *)__frame + 0x4c))
  ppuStack_20 = &puStack_34;
  uStack_1c = param_1;
  puStack_18 = param_2;
  sub_08046FF4(&iStack_64,ppuStack_20,0xc,0x8050791);
  puVar1 = param_2 + 3;
  puStack_24 = param_2 + 4;
  puVar2 = param_2 + 6;
  puStack_28 = param_2 + 8;
  uVar6 = sub_08046B70(*puStack_28,*puStack_24);
  puStack_2c = param_2 + 5;
  puStack_30 = param_2 + 7;
  uVar7 = sub_08046B70(param_2[7],param_2[5]);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_64 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_64 = iStack_64 >> 10;
  uVar6 = sub_08046B70(*puVar2,*puStack_2c);
  uVar7 = sub_08046B70(*puStack_28,*puVar1);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_58 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_58 = iStack_58 >> 10;
  uVar6 = sub_08046B70(*puStack_30,*puVar1);
  uVar7 = sub_08046B70(*puVar2,*puStack_24);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_4c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_4c = iStack_4c >> 10;
  puStack_34 = param_2 + 2;
  uVar6 = sub_08046B70(param_2[2],*puStack_30);
  puVar5 = param_2 + 1;
  uVar7 = sub_08046B70(param_2[1],*puStack_28);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_60 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_60 = iStack_60 >> 10;
  uVar6 = sub_08046B70(*param_2,*puStack_28);
  uVar7 = sub_08046B70(*puStack_34,*puVar2);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_54 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_54 = iStack_54 >> 10;
  uVar6 = sub_08046B70(*puVar5,*puVar2);
  uVar7 = sub_08046B70(*param_2,*puStack_30);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_48 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_48 = iStack_48 >> 10;
  uVar6 = sub_08046B70(*puStack_2c,*puVar5);
  uVar7 = sub_08046B70(*puStack_24,*puStack_34);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_5c = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_5c = iStack_5c >> 10;
  uVar6 = sub_08046B70(*puVar1,*puStack_34);
  uVar7 = sub_08046B70(*puStack_2c,*param_2);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_50 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_50 = iStack_50 >> 10;
  uVar6 = sub_08046B70(*puStack_24,*param_2);
  uVar7 = sub_08046B70(*puVar1,*puVar5);
  uVar6 = sub_08046B94((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  iStack_44 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x200);
  iStack_44 = iStack_44 >> 10;
  lVar8 = sub_08046B70(iStack_64,*param_2);
  lVar9 = sub_08046B70(iStack_60,*puVar1);
  lVar10 = sub_08046B70(iStack_5c,*puVar2);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046BA4(0,0x40000,(int)lVar10,(int)((ulonglong)lVar10 >> 0x20));
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = (undefined4)uVar6;
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_64);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_64 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_60);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_60 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_5c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_5c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_58);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_58 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_54);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_54 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_50);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_50 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_4c);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_4c = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_48);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_48 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  uVar6 = sub_08046B58(uVar3,uVar4,iStack_44);
  uVar6 = sub_08046B18((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x20000000);
  iStack_44 = sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x1e);
  puVar1 = param_2 + 9;
  lVar8 = sub_08046B70(iStack_64,*puVar1);
  lVar9 = sub_08046B70(iStack_58,param_2[10]);
  lVar10 = sub_08046B70(iStack_4c,param_2[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  uStack_40 = sub_08046B84();
  lVar8 = sub_08046B70(iStack_60,*puVar1);
  lVar9 = sub_08046B70(iStack_54,param_2[10]);
  lVar10 = sub_08046B70(iStack_48,param_2[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  uStack_3c = sub_08046B84();
  lVar8 = sub_08046B70(iStack_5c,*puVar1);
  lVar9 = sub_08046B70(iStack_50,param_2[10]);
  lVar10 = sub_08046B70(iStack_44,param_2[0xb]);
  lVar10 = lVar8 + lVar9 + lVar10;
  uVar6 = sub_08046B18((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),0x200);
  sub_08046C28((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),10);
  uStack_38 = sub_08046B84();
  sub_08047018(uStack_1c,&iStack_64,ppuStack_20,0xc,0x8050771);
  return;
}

