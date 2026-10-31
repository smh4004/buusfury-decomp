/* sub_0802309C  (original: 0x0802309C-0x080231AE in asm/code_08021834.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08006718();
extern int sub_08022DF4();
extern int sub_08049150();
extern int sub_0803DC96();
extern int sub_0803F58C();
extern int sub_0803F974();
extern int sub_0803F540();
extern int sub_08004F50();
extern char volatile DAT_03002f58;
extern undefined volatile gUIStringPtrs;
extern undefined volatile _08023490;


void sub_0802309C(int param_1)

{
  unsigned int __frame[35];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_8c (*(undefined4 *)((char *)__frame + 0x0))
#define uStack_88 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_84 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_80 (*(undefined4 *)((char *)__frame + 0xc))
#define auStack_7c ((undefined1 *)((char *)__frame + 0x10))
#define auStack_48 ((undefined1 *)((char *)__frame + 0x44))
#define uStack_44 (*(undefined4 *)((char *)__frame + 0x48))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0x4c))
  if (DAT_03002f58 == '\0') {
    *(uint *)(*(int *)(param_1 + 0x118) + 8) =
         (uint)(*(int *)(param_1 + 0x11c) < *(int *)(param_1 + 0x584) + -1);
  }
  else if (DAT_03002f58 == '\x01') {
    *(uint *)(*(int *)(param_1 + 0x118) + 8) = (uint)(*(int *)(param_1 + 0x11c) < 0x1f);
  }
  *(uint *)(*(int *)(param_1 + 0x114) + 8) = (uint)(0 < *(int *)(param_1 + 0x11c));
  sub_0803F540(auStack_48,0xf0,0xa0);
  sub_08006718(param_1,auStack_48,0x5f,1);
  auStack_48[0] = 1;
  uStack_44 = 0x78;
  uStack_40 = 0x30;
  if (DAT_03002f58 == '\x01') {
    sub_0803DC96(auStack_48,&_08023490,
                 *(undefined4 *)(&gUIStringPtrs + (*(int *)(param_1 + 0x11c) + 0x74) * 4));
  }
  else {
    sub_0803DC96(auStack_48,&_08023490,
                 *(undefined4 *)
                  (&gUIStringPtrs +
                  (((int *)(param_1 + 0x584))[*(int *)(param_1 + 0x11c) * 3 + 3] + 0x9e) * 4));
  }
  sub_08049150((int)auStack_48,0x6000040);
  sub_0803F540(auStack_7c,0x30,0x38);
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0x30;
  uStack_80 = 0x38;
  sub_0803F974(auStack_7c,&uStack_8c,0);
  uStack_8c = 10;
  uStack_88 = 2;
  uStack_84 = 0x25;
  uStack_80 = 0x2c;
  sub_08004F50(auStack_7c,&uStack_8c);
  sub_08049150((int)auStack_7c,0x6009640);
  sub_08022DF4(param_1);
  sub_0803F58C(auStack_7c,0);
  sub_0803F58C(auStack_48,0);
  return;
}

