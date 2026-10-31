/* sub_0801F882  (original: 0x0801F882-0x0801F99E in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080051B0();
extern int sub_0803DADA();
extern int sub_0801F810();
extern undefined volatile gUnknown_08058034;
extern undefined4 volatile gUnknown_0807012C;


void sub_0801F882(int param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x10) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x10) = 1;
  piVar2 = (int *)(param_1 + 300);
  piVar3 = (int *)(param_1 + 0xba0);
  if (*(char *)(param_1 + 0x114) == '\0') {
    *(uint *)(*(int *)(param_1 + 0x118) + 8) =
         (uint)(*(int *)(param_1 + 0x120) + *(int *)(param_1 + 0x124) != 0);
    *(uint *)(*(int *)(param_1 + 0x11c) + 8) =
         (uint)(*(int *)(param_1 + 0x120) + *(int *)(param_1 + 0x124) < *piVar2 + -1);
  }
  else if (*(char *)(param_1 + 0x114) == '\x01') {
    *(uint *)(*(int *)(param_1 + 0x118) + 8) = (uint)(*(int *)(param_1 + 0x128) != 0);
    *(uint *)(*(int *)(param_1 + 0x11c) + 8) = (uint)(*(int *)(param_1 + 0x128) < *piVar3 + -1);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x118) + 8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x11c) + 8) = 0;
  }
  sub_080051B0(param_2,0x75,0x37,0x70);
  param_2[3] = 2;
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
  *param_2 = 0;
  param_2[1] = 0xe;
  iVar4 = 0;
  *(undefined4 **)(param_2 + 0xc) = &gUnknown_0807012C;
  do {
    iVar1 = *(int *)(param_1 + 0x120) + iVar4;
    if (*piVar2 <= iVar1) break;
    *(int *)(param_2 + 8) = iVar4 * 0xe + 0x31;
    *(undefined4 *)(param_2 + 4) = 0x16;
    sub_0801F810(piVar2 + iVar1 * 2 + 1,param_2);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  *(undefined4 *)(param_2 + 8) = 0x31;
  *(undefined4 *)(param_2 + 4) = 0x8c;
  sub_0803DADA(param_2,&gUnknown_08058034);
  iVar4 = 0;
  do {
    if (*piVar3 <= iVar4) {
      return;
    }
    *(int *)(param_2 + 8) = iVar4 * 0xe + 0x3f;
    *(undefined4 *)(param_2 + 4) = 0x8c;
    sub_0801F810(piVar3 + iVar4 * 2 + 1,param_2);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  return;
}

