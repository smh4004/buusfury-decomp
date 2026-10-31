/* sub_080446A8  (original: 0x080446A8-0x080447E0 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08044668();
extern int sub_080433E0();
extern int volatile DAT_0300525c;
extern byte * volatile DAT_03005260;
extern undefined4 volatile DAT_03005268;
extern undefined4 volatile DAT_03005278;
extern undefined2 volatile REG_IME;


undefined4 sub_080446A8(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort uVar4;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_28 ((undefined2 *)((char *)__frame + 0x0))
#define uStack_24 (*(uint *)((char *)__frame + 0x4))
#define iStack_20 (*(int *)((char *)__frame + 0x8))
#define uStack_1c (*(uint *)((char *)__frame + 0xc))
#define local_18 (*(uint *)((char *)__frame + 0x10))
  if (param_2 < 4) {
    if ((param_1 & 0xf) == 0) {
      uVar1 = 0x600;
    }
    else {
      uVar4 = REG_IME;
      uStack_24 = (uint)uVar4;
      REG_IME = 0;
      uStack_1c = param_1;
      local_18 = param_2;
      if ((param_1 << 0x1c) >> 0x1e != 0) {
        uVar4 = 0;
        iStack_20 = 1 << (param_2 & 0xff);
        do {
          if (uVar4 == 0) {
            if ((int)(param_1 << 0x1d) < 0) {
              puVar3 = (ushort *)(&DAT_03005268)[param_2];
              *(byte *)(DAT_0300525c + 4) = *(byte *)(DAT_0300525c + 4) & ~(byte)puVar3[0x16];
_08044720:
              if (puVar3 != (ushort *)0x0) {
                if ((int)((uint)*puVar3 << 0x10) < 0) {
                  sub_08044668(local_18,uVar4 & 0xff,puVar3);
                  uVar2 = 0;
                  do {
                    if ((1 << (uVar2 & 0xff) & (uint)(byte)puVar3[0x16]) != 0) {
                      puVar3[1] = 0;
                    }
                    uVar2 = uVar2 + 1 & 0xffff;
                  } while (uVar2 < 4);
                }
                auStack_28[0] = 0;
                sub_080433E0(auStack_28,puVar3,0x100001a);
              }
            }
          }
          else if ((int)(param_1 << 0x1c) < 0) {
            puVar3 = (ushort *)((&DAT_03005268)[param_2] + 0x34);
            *(byte *)(DAT_0300525c + 5) = *(byte *)(DAT_0300525c + 5) & ~(byte)iStack_20;
            goto _08044720;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 2);
      }
      if ((param_1 & 1) != 0) {
        puVar3 = (ushort *)(&DAT_03005278)[param_2];
        if ((int)((uint)*puVar3 << 0x10) < 0) {
          if ((int)((uint)*DAT_03005260 << 0x18) < 0) {
            *(char *)(DAT_0300525c + local_18 + 0x10) =
                 *(char *)(DAT_0300525c + local_18 + 0x10) + (char)puVar3[2] + '\x02';
          }
          else {
            *(char *)(DAT_0300525c + 0xf) = *(char *)(DAT_0300525c + 0xf) + (char)puVar3[2] + '\x03'
            ;
          }
          *(byte *)(DAT_0300525c + 6) = *(byte *)(DAT_0300525c + 6) & ~*(byte *)((int)puVar3 + 3);
        }
        auStack_28[0] = 0;
        sub_080433E0(auStack_28,puVar3,0x1000006);
      }
      if ((int)(param_1 << 0x1e) < 0) {
        auStack_28[0] = 0;
        sub_080433E0(auStack_28,(&DAT_03005278)[param_2] + 0xc,0x1000004);
      }
      REG_IME = (short)uStack_24;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x400;
  }
  return uVar1;
}

