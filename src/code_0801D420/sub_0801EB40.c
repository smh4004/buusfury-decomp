/* sub_0801EB40  (original: 0x0801EB40-0x0801EBFE in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_080051B0();
extern int sub_0803DADA();
extern int sub_0801F810();
extern undefined volatile gUnknown_08058034;
extern undefined volatile gUnknown_08058054;
extern undefined4 volatile gUnknown_0807012C;


void sub_0801EB40(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  sub_080051B0(param_2,0x75,0x1e,0x6e,param_4);
  param_2[3] = 2;
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
  *param_2 = 0;
  param_2[1] = 0xe;
  *(undefined4 **)(param_2 + 0xc) = &gUnknown_0807012C;
  *(undefined4 *)(param_2 + 4) = 0x16;
  *(undefined4 *)(param_2 + 8) = 0x28;
  sub_0803DADA(param_2,&gUnknown_08058034);
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x114) + 0xba0) <= iVar1) break;
    *(int *)(param_2 + 8) = iVar1 * 0xe + 0x36;
    *(undefined4 *)(param_2 + 4) = 0x16;
    sub_0801F810(iVar1 * 8 + *(int *)(param_1 + 0x114) + 0xba4,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  *(undefined4 *)(param_2 + 8) = 0x28;
  *(undefined4 *)(param_2 + 4) = 0x8c;
  sub_0803DADA(param_2,&gUnknown_08058054);
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x114) + 0xbcc) <= iVar1) {
      return;
    }
    *(int *)(param_2 + 8) = iVar1 * 0xe + 0x36;
    *(undefined4 *)(param_2 + 4) = 0x8c;
    sub_0801F810(iVar1 * 8 + *(int *)(param_1 + 0x114) + 0xbd0,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}

