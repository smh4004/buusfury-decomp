/* sub_08026BBC  (original: 0x08026BBC-0x08026C62 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 68% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08049138();
extern undefined volatile DAT_06010000;


void sub_08026BBC(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    if (*(int *)(*(int *)(param_1 + 0x18) + 0x8030) < *(int *)(*(int *)(param_1 + 0x18) + 0x8028)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else if (cVar1 == '\x01') {
    if (*(int *)(*(int *)(param_1 + 0x18) + 0x8020) < *(int *)(*(int *)(param_1 + 0x18) + 0x8030)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else if (cVar1 == '\x02') {
    if (*(int *)(*(int *)(param_1 + 0x18) + 0x801c) < *(int *)(*(int *)(param_1 + 0x18) + 0x802c)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = param_1;
    if (cVar1 == '\x03') {
      if (*(int *)(*(int *)(param_1 + 0x18) + 0x802c) < *(int *)(*(int *)(param_1 + 0x18) + 0x8024))
      {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
  }
  if (iVar2 == 0) {
    uVar3 = 3;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
  }
  else {
    iVar2 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)iVar2;
    uVar3 = (uint)(iVar2 * 0x8000000) >> 0x1d;
    if (3 < uVar3) {
      uVar3 = 7 - uVar3;
    }
  }
  if (*(byte *)(param_1 + 0x11) != uVar3) {
    *(char *)(param_1 + 0x11) = (char)uVar3;
    sub_08049138((int)(&DAT_06010000 + (uint)*(ushort *)(param_1 + 0xc) * 0x20),
                 *(int *)(*(int *)(param_1 + 0x14) + 4) + uVar3 * 0x80,0x80);
  }
  return;
}

