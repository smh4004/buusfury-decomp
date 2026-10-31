/* sub_08042A4E  (original: 0x08042A4E-0x08042AAA in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08042372();
extern int sub_08043368();
extern int sub_0804380C();
extern int sub_0804389E();
extern undefined1 volatile DAT_03004cd6;
extern undefined1 volatile DAT_03004cd7;
extern char * volatile DAT_0300525c;
extern char volatile DAT_03004cca;
extern byte volatile DAT_03004ccb;
extern int volatile DAT_03004d0c;


void sub_08042A4E(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  unsigned int __frame[6];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_18 (*(undefined4 *)((char *)__frame + 0x0))
  uVar1 = DAT_03004cd6;
  DAT_03004cd6 = 0;
  DAT_03004cd7 = 1;
  uStack_18 = param_4;
  if (*DAT_0300525c == '\0') {
    sub_08042372(param_1);
    if (DAT_03004cca != '\x01') goto _08042A74;
  }
  else {
    iVar2 = sub_0804380C(&uStack_18);
    if (iVar2 == 0) {
      DAT_03004ccb = DAT_03004ccb | (byte)uStack_18;
    }
  }
  if (DAT_03004d0c == 0) {
    DAT_03004cd6 = uVar1;
    DAT_03004cd7 = 0;
    return;
  }
  __call_via_r1(param_1);
  sub_0804389E();
  if (DAT_03004cca != '\x02') {
    DAT_03004cd6 = uVar1;
    DAT_03004cd7 = 0;
    return;
  }
_08042A74:
  sub_08043368();
  DAT_03004cd7 = 0;
  DAT_03004cd6 = uVar1;
  return;
}

