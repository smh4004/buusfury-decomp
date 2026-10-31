/* sub_08025F16  (original: 0x08025F16-0x08025F64 in asm/code_08025E0C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803DD66();
extern int sub_08046E40();
extern int sub_0803F540();
extern undefined4 volatile gUnknown_0806EE6C;
extern undefined volatile gUIStringPtrs;


void sub_08025F16(int param_1)

{
  int iVar1;
  
  iVar1 = sub_0803F540(0,0x68,*(int *)(param_1 + 0x14) + 0x38);
  *(int *)(param_1 + 0x1c) = iVar1;
  *(undefined4 **)(iVar1 + 0xc) = &gUnknown_0806EE6C;
  *(undefined1 *)(*(int *)(param_1 + 0x1c) + 3) = 2;
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0xe;
  *(undefined1 *)(*(int *)(param_1 + 0x1c) + 1) = 0x10;
  sub_08046E40(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x24),0,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30));
  sub_0803DD66(*(undefined4 *)(param_1 + 0x1c),0x68,
               *(undefined4 *)(&gUIStringPtrs + (uint)*(ushort *)(*(int *)(param_1 + 0x20) + 2) * 4)
              );
  return;
}

