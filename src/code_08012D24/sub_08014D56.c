/* sub_08014D56  (original: 0x08014D56-0x08014DC2 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 78% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_08014C5C();
extern int sub_08013C66();
extern undefined1 volatile DAT_03001560;
extern undefined volatile DAT_0300158c;


void sub_08014D56(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 300) + 0x40) * 0xc + *(int *)(param_1 + 300) + 0x54)
          * 0x68;
  sub_08013C66(&DAT_03001560 + iVar1);
  if (*(char *)(param_1 + 0x130) == '\0') {
    if (*(short *)(&DAT_0300158c + iVar1) == 0) {
      sub_08014C5C(param_1,0,0x1a);
    }
    else {
      sub_08014C5C(param_1,0x36,0x1a);
    }
  }
  else if (*(char *)(param_1 + 0x130) == '\x01') {
    sub_08014C5C(param_1,0x18,0x1a);
  }
  return;
}

