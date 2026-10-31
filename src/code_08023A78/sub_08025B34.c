/* sub_08025B34  (original: 0x08025B34-0x08025D2E in asm/code_08023A78.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0804912C();
extern int sub_08049168();
extern int sub_08049144();
extern undefined volatile DAT_0600f000;


void sub_08025B34(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = *(int *)(param_1 + 0x802c) + -8;
  uVar6 = (uint)(iVar4 * 0x1000000) >> 0x1b;
  iVar1 = *(int *)(param_1 + 0x8030) + -0x30;
  iVar2 = iVar1 >> 8;
  iVar3 = 0x20 - uVar6;
  iVar4 = iVar4 >> 8;
  uVar5 = (uint)(iVar1 * 0x1000000) >> 0x1b;
  if (iVar2 < 0) {
    uVar7 = uVar5;
    if (uVar5 < 0x20) {
      do {
        sub_0804912C((int)(&DAT_0600f000 + uVar7 * 0x40),0,0x40);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0x20);
    }
  }
  else {
    if (iVar4 < 0) {
      if (uVar5 < 0x20) {
        uVar7 = uVar5;
        do {
          sub_08049168((int)(&DAT_0600f000 + uVar6 * 2 + uVar7 * 0x40),0,iVar3 * 2);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 0x20);
      }
    }
    else if (uVar5 < 0x20) {
      uVar7 = uVar5;
      do {
        sub_08049144((int)(&DAT_0600f000 + uVar6 * 2 + uVar7 * 0x40),
                     uVar7 * 0x100 + iVar2 * 0x2000 + param_1 + iVar4 * 0x40 + 0xc + uVar6 * 2,
                     iVar3 * 2);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0x20);
    }
    if (uVar6 != 0) {
      if (iVar4 < 3) {
        if (uVar5 < 0x20) {
          uVar7 = uVar5;
          do {
            sub_08049144((int)(&DAT_0600f000 + uVar7 * 0x40),
                         uVar7 * 0x100 + iVar2 * 0x2000 + param_1 + iVar4 * 0x40 + 0x4c,uVar6 << 1);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < 0x20);
        }
      }
      else if (uVar5 < 0x20) {
        uVar7 = uVar5;
        do {
          sub_08049168((int)(&DAT_0600f000 + uVar7 * 0x40),0,uVar6 << 1);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 0x20);
      }
    }
  }
  if (iVar2 < 3) {
    if (iVar4 < 0) {
      iVar1 = 0;
      if (uVar5 != 0) {
        do {
          sub_08049168((int)(&DAT_0600f000 + uVar6 * 2 + iVar1 * 0x40),0,iVar3 * 2);
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)uVar5);
      }
    }
    else {
      iVar1 = 0;
      if (uVar5 != 0) {
        do {
          sub_08049144((int)(&DAT_0600f000 + uVar6 * 2 + iVar1 * 0x40),
                       iVar1 * 0x100 + iVar2 * 0x2000 + param_1 + iVar4 * 0x40 + 0x200c + uVar6 * 2,
                       iVar3 * 2);
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)uVar5);
      }
    }
    if (uVar6 != 0) {
      if (iVar4 < 3) {
        iVar1 = 0;
        if (uVar5 != 0) {
          do {
            sub_08049144((int)(&DAT_0600f000 + iVar1 * 0x40),
                         iVar1 * 0x100 + iVar2 * 0x2000 + param_1 + iVar4 * 0x40 + 0x204c,uVar6 * 2)
            ;
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)uVar5);
        }
      }
      else {
        iVar1 = 0;
        if (uVar5 != 0) {
          do {
            sub_08049168((int)(&DAT_0600f000 + iVar1 * 0x40),0,uVar6 * 2);
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)uVar5);
        }
      }
    }
  }
  else if (uVar5 < 0x20) {
    do {
      sub_0804912C((int)(&DAT_0600f000 + uVar5 * 0x40),0,0x40);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x20);
  }
  return;
}

