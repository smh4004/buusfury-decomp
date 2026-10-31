/* sub_08017F5A  (original: 0x08017F5A-0x08018078 in asm/code_0801711C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08018550();
extern int sub_08017E64();
extern int sub_0803FAAC();
extern int sub_0803D5B8();
extern int sub_0803FACC();
extern int volatile DAT_03002a64;
extern undefined4 volatile DAT_03002a68;
extern undefined volatile _08049CC4;


undefined4 * sub_08017F5A(undefined4 *param_1,byte *param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  unsigned int __frame[11];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_2c (*(int *)((char *)__frame + 0x0))
#define iStack_28 (*(int *)((char *)__frame + 0x4))
#define piStack_24 (*(int * *)((char *)__frame + 0x8))
#define piStack_20 (*(int * *)((char *)__frame + 0xc))
#define puStack_1c (*(undefined4 * *)((char *)__frame + 0x10))
#define puStack_18 (*(undefined4 * *)((char *)__frame + 0x14))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x6c), param_1 != (undefined4 *)0x0)) {
    iStack_28 = param_3[1] + *(int *)(param_2 + 8);
    iStack_2c = (*param_3 + *(int *)(param_2 + 4)) - (uint)(*param_2 >> 1);
    sub_08018550(param_1,*(undefined4 *)(param_2 + 0x10),&iStack_2c,param_2 + 2);
    puStack_18 = param_1 + 0xc;
    *param_1 = &_08049CC4;
    puStack_1c = param_1 + 0xd;
    piStack_20 = param_1 + 0x14;
    piStack_24 = param_1 + 0x15;
    param_1[0x19] = 0xffffffff;
    param_1[0x18] = param_2;
    param_1[9] = 0;
    param_1[0xb] = 0;
    uVar2 = sub_0803FAAC();
    param_1[10] = uVar2;
    iVar3 = param_3[1];
    *piStack_20 = *param_3 << 8;
    *piStack_24 = iVar3 << 8;
    iVar3 = sub_0803FACC(0x100);
    param_1[0x16] = (param_4[1] * (iVar3 + -0x80) >> 8) + *param_4;
    iVar3 = sub_0803FACC(0x100);
    param_1[0x17] = (*param_4 * (iVar3 + -0x80) >> 8) + param_4[1];
    iVar3 = sub_0803FACC(0x40);
    param_1[0x16] = param_1[0x16] * (iVar3 + 0xe0) >> 8;
    iVar3 = sub_0803FACC(0x40);
    param_1[0x17] = param_1[0x17] * (iVar3 + 0xe0) >> 8;
    *(undefined1 *)(param_1 + 2) = 0x38;
    *puStack_18 = 0;
    *puStack_1c = 0x80;
    uVar2 = sub_08017E64(0,param_1);
    param_1[0x1a] = uVar2;
    puVar1 = &DAT_03002a68 + DAT_03002a64;
    DAT_03002a64 = DAT_03002a64 + 1;
    *puVar1 = uVar2;
    iVar3 = param_3[1];
    param_1[0x12] = *param_3;
    param_1[0x13] = iVar3;
    iVar3 = *param_3 - (uint)(*(byte *)param_1[0x18] >> 1);
    param_1[0xe] = iVar3;
    param_1[0x10] = iVar3 + (uint)*(byte *)param_1[0x18];
    param_1[1] = param_3[1];
  }
  return param_1;
}

