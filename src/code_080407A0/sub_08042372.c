/* sub_08042372  (original: 0x08042372-0x080424B2 in asm/code_080407A0.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08043368();
extern int sub_0804333C();
extern int sub_0804418E();
extern int sub_0804337C();
extern ushort volatile DAT_03004cdc;
extern ushort volatile DAT_03004cde;
extern char volatile DAT_03004cd1;
extern undefined1 volatile DAT_03004cd2;
extern char volatile DAT_03004cce;
extern byte volatile DAT_03004cf8;
extern undefined2 volatile DAT_03004cfa;
extern char * volatile DAT_0300525c;
extern undefined2 volatile DAT_03004cfc;


undefined8 sub_08042372(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  unsigned int __frame[8];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_20 (*(uint *)((char *)__frame + 0x0))
#define local_1c (*(undefined4 *)((char *)__frame + 0x4))
#define local_18 (*(uint *)((char *)__frame + 0x8))
  uVar6 = 0;
  uStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  sub_0804418E(param_1,&local_18,&local_1c,&uStack_20);
  if ((byte)local_18 != 0) {
    DAT_03004cdc = (ushort)(byte)local_18;
    DAT_03004cde = (ushort)(byte)local_1c;
    if (DAT_03004cd1 == '\0') {
      sub_0804337C(local_18 & 0xff);
      uVar6 = 1;
      uVar4 = 2;
      uVar3 = 0x30;
    }
    else {
      DAT_03004cd2 = 1;
      if (DAT_03004cce == '\0' && (byte)local_1c == 0) {
        DAT_03004cd2 = 0;
        sub_0804337C(local_18 & 0xff);
        uVar6 = 1;
        uVar4 = 1;
        uVar3 = 0x33;
      }
      else {
        uVar2 = 0;
        do {
          if ((local_18 & 0xff & 1 << uVar2) != 0) {
            DAT_03004cf8 = (byte)(1 << uVar2) | DAT_03004cf8;
            (&DAT_03004cfc)[uVar2] = DAT_03004cfa;
          }
          uVar2 = uVar2 + 1 & 0xff;
        } while (uVar2 < 4);
        uVar4 = 1;
        uVar3 = 0x31;
      }
    }
    sub_0804333C(uVar3,uVar4);
    sub_08043368();
  }
  if (*DAT_0300525c == '\x01') {
    if ((byte)uStack_20 != 0) {
      uVar2 = 0;
      do {
        if ((((uint)DAT_03004cf8 & 1 << uVar2) != 0) && ((1 << uVar2 & uStack_20 & 0xff) != 0)) {
          (&DAT_03004cfc)[uVar2] = 0;
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 4);
      DAT_03004cf8 = DAT_03004cf8 & ~(byte)uStack_20;
      DAT_03004cdc = (ushort)(byte)uStack_20;
      sub_0804333C(0x32,1);
    }
    if (DAT_03004cf8 != 0) {
      uVar7 = 0;
      uVar2 = 0;
      do {
        uVar5 = 1 << uVar2;
        if ((DAT_03004cf8 & uVar5) != 0) {
          sVar1 = (&DAT_03004cfc)[uVar2];
          if (sVar1 != 0) {
            (&DAT_03004cfc)[uVar2] = sVar1 + -1;
            if (sVar1 == 1) {
              DAT_03004cf8 = DAT_03004cf8 & ~(byte)uVar5;
              uVar7 = uVar5 & 0xff | uVar7;
            }
          }
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 4);
      if (uVar7 != 0) {
        sub_0804337C(uVar7);
        uVar6 = 1;
        DAT_03004cdc = (ushort)uVar7;
        sub_0804333C(0x33,1);
      }
    }
    if (DAT_03004cf8 == 0) {
      DAT_03004cd2 = 0;
    }
  }
  return CONCAT44(uStack_20,uVar6);
}

