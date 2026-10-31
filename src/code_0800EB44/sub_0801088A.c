/* sub_0801088A  (original: 0x0801088A-0x08010974 in asm/code_0800EB44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800ECDA();
extern int sub_0800ED18();
extern int sub_08004098();
extern int __call_via_r1();
extern int sub_0803FACC();
extern int sub_0803D5B8();
extern int sub_0800FDFA();
extern int sub_080135D2();
extern byte volatile DAT_03002bfc;
extern byte volatile DAT_03002bfd;
extern undefined volatile _0804C768;
extern int volatile DAT_03001014;
extern undefined volatile gUnknown_08799D0C;
extern int volatile DAT_03001010;
extern int volatile DAT_03001018;
extern int volatile DAT_0300101c;
extern int volatile DAT_03002f5c;


void sub_0801088A(undefined4 param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  unsigned int __frame[34];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_88 ((undefined1 *)((char *)__frame + 0x0))
#define iStack_34 (*(int *)((char *)__frame + 0x54))
#define iStack_30 (*(int *)((char *)__frame + 0x58))
#define iStack_2c (*(int *)((char *)__frame + 0x5c))
#define iStack_28 (*(int *)((char *)__frame + 0x60))
#define iStack_24 (*(int *)((char *)__frame + 0x64))
#define iStack_20 (*(int *)((char *)__frame + 0x68))
#define uStack_1c (*(undefined4 *)((char *)__frame + 0x6c))
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x70))
  param_2[0x73] = 0;
  puVar2 = (undefined4 *)sub_0803D5B8(8);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 5;
    *puVar2 = &_0804C768;
  }
  sub_0800ECDA(param_2,0x11);
  sub_0800ED18(param_2,puVar2);
  bVar1 = false;
  iVar3 = __call_via_r1(param_2,*(int *)(*param_2 + 0x88) + *param_2);
  if (iVar3 == 0) {
    if (DAT_03002f5c >> 1 < (int)(DAT_03002bfc + 1)) {
      bVar1 = true;
    }
  }
  else if (DAT_03002f5c >> 1 < (int)(DAT_03002bfd + 1)) {
    bVar1 = true;
  }
  if (bVar1) {
    __call_via_r1(param_2,*(int *)(*param_2 + 0x80) + *param_2);
    uStack_1c = sub_080135D2();
    uStack_18 = 0xffffffff;
    sub_0800FDFA(&iStack_2c,param_2);
    DAT_03001010 = iStack_2c + iStack_24 >> 1;
    DAT_03001014 = iStack_28 + iStack_20 >> 1;
    iStack_34 = DAT_03001010;
    iStack_30 = DAT_03001014;
    iVar3 = sub_0803FACC(0x40);
    DAT_03001018 = ((int)(((uint)(iVar3 + -0x20 >> 0x1f) >> 0x1b) + iVar3 + -0x20) >> 5) << 8;
    iVar3 = sub_0803FACC(0x40);
    DAT_0300101c = ((int)(((uint)(iVar3 + -0x20 >> 0x1f) >> 0x1b) + iVar3 + -0x20) >> 5) << 8;
    sub_08004098(auStack_88,&gUnknown_08799D0C,&uStack_1c);
  }
  return;
}

