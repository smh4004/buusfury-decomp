/* sub_08025E50  (original: 0x08025E50-0x08025EF0 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08024A7C();
extern int sub_0803D5B8();
extern int sub_0803DA78();
extern int sub_0803DE6A();
extern undefined1 volatile DAT_0300112d;
extern undefined volatile gUnknown_0874D380;
extern undefined volatile _0804A52C;
extern undefined4 volatile gUnknown_0806EE6C;
extern undefined volatile gUIStringPtrs;


undefined4 * sub_08025E50(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_48 (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_44 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0x8))
#define iStack_3c (*(int *)((char *)__frame + 0xc))
#define auStack_38 ((undefined1 *)((char *)__frame + 0x10))
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x2c), param_1 != (undefined4 *)0x0)) {
    sub_08024A7C(param_1);
    *param_1 = &_0804A52C;
    param_1[6] = param_3;
    (&DAT_0300112d)[(int)param_2 >> 3] =
         (&DAT_0300112d)[(int)param_2 >> 3] | (byte)(1 << (param_2 & 7));
    iVar1 = 0;
    param_1[8] = &gUnknown_0874D380 + param_2 * 0x10;
    param_1[4] = 0;
    param_1[7] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0x68;
    iStack_3c = 0x38;
    sub_0803DA78(auStack_38,&gUnknown_0806EE6C,&uStack_48);
    uStack_44 = *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(param_1[8] + 2) * 4);
    do {
      sub_0803DE6A(auStack_38,uStack_44,0x68,&uStack_48);
      iVar1 = iVar1 + 1;
    } while (iStack_3c == 0);
    iVar1 = iVar1 * 0x10 + -0x38;
    param_1[5] = iVar1;
    if (iVar1 < 0) {
      param_1[5] = 0;
    }
  }
  return param_1;
}

