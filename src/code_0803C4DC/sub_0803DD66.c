/* sub_0803DD66  (original: 0x0803DD66-0x0803DE50 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; NOT equivalent: r0-void.
 */
#include "ghidra_types.h"
extern int sub_0804001A();
extern int __call_via_r3();


void sub_0803DD66(char *param_1,int param_2,ushort *param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  unsigned int __frame[10];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_28 (*(int *)((char *)__frame + 0x0))
#define local_24 (*(int *)((char *)__frame + 0x4))
#define pcStack_20 (*(char * *)((char *)__frame + 0x8))
#define iStack_1c (*(int *)((char *)__frame + 0xc))
#define puStack_18 (*(ushort * *)((char *)__frame + 0x10))
  local_24 = *(int *)(param_1 + 8) + -0xc;
  pcStack_20 = param_1;
  iStack_1c = param_2;
  puStack_18 = param_3;
  do {
    puVar7 = param_3;
    if (*(int *)(param_1 + 0x1c) <= local_24) {
      return;
    }
    while( true ) {
      if (*puVar7 == 0) {
        return;
      }
      if (*puVar7 != 0x20) break;
      puVar7 = puVar7 + 1;
    }
    iVar3 = 0;
    puVar6 = (ushort *)0x0;
    param_3 = puVar7;
    while (uVar5 = (uint)*param_3, uVar5 != 0) {
      if (uVar5 == 10) {
        param_3 = param_3 + 1;
        break;
      }
      if (uVar5 == 8) {
        param_3 = param_3 + 2;
      }
      else {
        if (uVar5 == 0x20) {
          puVar6 = param_3;
        }
        if (uVar5 < 0xff) {
          iVar4 = **(int **)(param_1 + 0xc);
          uVar5 = (uint)*(ushort *)(iVar4 + (uint)*(ushort *)(iVar4 + uVar5 * 2) * 2);
        }
        else {
          uVar5 = (*(int **)(param_1 + 0xc))[1];
        }
        iVar3 = uVar5 + 1 + iVar3;
        if (iStack_1c < iVar3) {
          if (puVar6 != (ushort *)0x0) {
            param_3 = puVar6;
          }
          break;
        }
        param_3 = param_3 + 1;
      }
    }
    iVar3 = (int)param_3 - (int)puVar7 >> 1;
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x14) + -0x10 < local_24)) {
      iVar4 = sub_0804001A(*(undefined4 *)(param_1 + 0xc),puVar7,iVar3);
      cVar1 = *param_1;
      if (cVar1 == '\0') {
        iStack_28 = *(int *)(param_1 + 4);
      }
      else if (cVar1 == '\x01') {
        iStack_28 = *(int *)(param_1 + 4) - (iVar4 + 1 >> 1);
      }
      else if (cVar1 == '\x02') {
        iStack_28 = *(int *)(param_1 + 4) - iVar4;
      }
      do {
        puVar6 = puVar7 + 1;
        if (*puVar7 == 8) {
          uVar2 = *puVar6;
          puVar6 = puVar7 + 2;
          iVar3 = iVar3 + -1;
          param_1[3] = (char)uVar2;
        }
        else {
          __call_via_r3(param_1,*puVar7,&iStack_28,*(undefined4 *)(param_1 + 0x20));
        }
        iVar3 = iVar3 + -1;
        puVar7 = puVar6;
      } while (0 < iVar3);
    }
    local_24 = local_24 + (uint)(byte)param_1[1];
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uint)(byte)param_1[1];
  } while( true );
}

