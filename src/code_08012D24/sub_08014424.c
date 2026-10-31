/* sub_08014424  (original: 0x08014424-0x08014526 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 97% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803DE6A();
extern int sub_0803F922();
extern int sub_0803DD66();
extern int sub_080051B0();
extern undefined4 volatile gUnknown_0807012C;
extern undefined volatile gUIStringPtrs;


void sub_08014424(int param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned int __frame[19];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define uStack_4c (*(undefined4 *)((char *)__frame + 0x0))
#define iStack_48 (*(int *)((char *)__frame + 0x4))
#define uStack_44 (*(undefined4 *)((char *)__frame + 0x8))
#define iStack_40 (*(int *)((char *)__frame + 0xc))
#define auStack_3c ((undefined1 *)((char *)__frame + 0x10))
#define uStack_38 (*(undefined4 *)((char *)__frame + 0x14))
#define iStack_30 (*(int *)((char *)__frame + 0x1c))
#define uStack_2c (*(undefined4 *)((char *)__frame + 0x20))
#define iStack_28 (*(int *)((char *)__frame + 0x24))
#define pbStack_24 (*(byte * *)((char *)__frame + 0x28))
#define local_20 (*(int *)((char *)__frame + 0x2c))
#define puStack_1c (*(undefined1 * *)((char *)__frame + 0x30))
#define local_18 (*(int * *)((char *)__frame + 0x34))
  iVar2 = *(int *)(param_1 + 0x120);
  if (*param_3 == 0) {
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    iVar2 = *(int *)(param_1 + 0x124);
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x10) = 1;
    *(uint *)(*(int *)(param_1 + 0x120) + 8) = (uint)(*(int *)(param_1 + 0x128) != 0);
    *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x10) = 1;
    *(uint *)(*(int *)(param_1 + 0x124) + 8) = (uint)(*(int *)(param_1 + 0x128) + 3 < *param_3);
    local_20 = param_1;
    puStack_1c = param_2;
    local_18 = param_3;
    sub_080051B0(param_2,0xdb,0x37,0x70);
    param_2[3] = 2;
    param_2[2] = 1;
    *(undefined4 *)(param_2 + 0x20) = 0x803f5a5;
    *param_2 = 0;
    param_2[1] = 0xe;
    iVar2 = 0;
    *(undefined4 **)(param_2 + 0xc) = &gUnknown_0807012C;
    do {
      iVar1 = *(int *)(param_1 + 0x128) + iVar2;
      if (*local_18 <= iVar1) {
        return;
      }
      pbStack_24 = (byte *)(local_18 + iVar1 + 1);
      uStack_38 = *(undefined4 *)
                   (&gUIStringPtrs + (uint)*(ushort *)((int)local_18 + iVar1 * 4 + 6) * 4);
      iVar1 = 0;
      uStack_2c = uStack_38;
      do {
        sub_0803DE6A(param_2,uStack_38,0xb0,auStack_3c);
        iVar1 = iVar1 + 1;
      } while (iStack_30 == 0);
      iStack_28 = iVar2 * 0x1c;
      *(int *)(param_2 + 8) = iStack_28 + 0x43 + iVar1 * -7;
      *(undefined4 *)(param_2 + 4) = 0x20;
      sub_0803DD66(param_2,0xb0,uStack_2c);
      iStack_48 = iStack_28 + 0x31;
      uStack_44 = 0x1e;
      uStack_4c = 0xe;
      iStack_40 = iStack_28 + 0x41;
      sub_0803F922(param_2,(uint)*pbStack_24 * 0x100 + local_20 + 0x274,&uStack_4c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return;
}

