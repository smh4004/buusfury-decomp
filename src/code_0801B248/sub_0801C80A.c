/* sub_0801C80A  (original: 0x0801C80A-0x0801C8DC in asm/code_0801B248.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C0C();
extern int sub_08019B4E();
extern int sub_0801C750();
extern undefined volatile gUnknown_0871E984;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086B8090;


void sub_0801C80A(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_48 ((undefined1 *)((char *)__frame + 0x0))
#define local_44 (*(undefined4 *)((char *)__frame + 0x4))
#define uStack_40 (*(undefined4 *)((char *)__frame + 0x8))
#define uStack_3c (*(undefined4 *)((char *)__frame + 0xc))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x10))
#define local_34 (*(undefined1 *)((char *)__frame + 0x14))
#define local_30 (*(undefined4 *)((char *)__frame + 0x18))
#define local_2c (*(undefined * *)((char *)__frame + 0x1c))
#define local_28 (*(undefined4 *)((char *)__frame + 0x20))
#define local_18 (*(int *)((char *)__frame + 0x30))
  if (*(char *)(param_1 + 0x54) == '\0') {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x44);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 0x20;
  }
  else if ((*(char *)(param_1 + 0x54) == '\x01') &&
          (iVar1 = *(int *)(param_1 + 0x5c) + -1, *(int *)(param_1 + 0x5c) = iVar1, iVar1 < 0)) {
    *(undefined4 *)(param_1 + 0x5c) = 0xb;
  }
  iVar1 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x48) = iVar1;
  uVar2 = (uint)(iVar1 * 0x10000000) >> 0x1e;
  if (uVar2 == 3) {
    uVar2 = 1;
  }
  *(undefined **)(param_1 + 0x18) = &gUnknown_0871E984 + uVar2 * 0xc;
  sub_08019B4E(param_1);
  if (*(char *)(param_1 + 0x54) == '\0') {
    iVar1 = *(int *)(param_1 + 0x50) + -0x20;
    *(int *)(param_1 + 0x50) = iVar1;
    iVar1 = *(int *)(param_1 + 0x4c) + iVar1;
    *(int *)(param_1 + 0x4c) = iVar1;
    if (iVar1 < -0xc00) {
      *(undefined1 *)(param_1 + 0x54) = 1;
      *(undefined4 *)(param_1 + 0x58) = 0x1e;
      *(undefined4 *)(param_1 + 0x5c) = 0xb;
    }
  }
  else if ((*(char *)(param_1 + 0x54) == '\x01') &&
          (iVar1 = *(int *)(param_1 + 0x58) + -1, *(int *)(param_1 + 0x58) = iVar1, iVar1 < 0)) {
    if ((param_2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
      local_28 = *(undefined4 *)(param_1 + 0x1c);
      local_34 = *(undefined1 *)(param_1 + 0x10);
      local_2c = &gUnknown_086B8090;
      local_30 = 0x400;
      local_44 = *(undefined4 *)(param_1 + 0x28);
      uStack_40 = *(undefined4 *)(param_1 + 0x2c);
      uStack_3c = *(undefined4 *)(param_1 + 0x30);
      uStack_38 = *(undefined4 *)(param_1 + 0x34);
      local_48[0] = 2;
      local_18 = param_1;
      sub_08011C0C(&DAT_03001c4c,0,local_48);
    }
    sub_0801C750(param_1);
  }
  return;
}

