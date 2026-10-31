/* sub_0801FC7A  (original: 0x0801FC7A-0x0801FD00 in asm/code_0801F7D8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803D8A0();
extern int sub_0803D5B8();
extern undefined volatile _0804BC04;
extern undefined volatile _0804920C;


undefined4 sub_0801FC7A(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_3 == 0) {
    piVar4 = (int *)(param_1 + 300);
    piVar5 = piVar4 + (*(int *)(param_1 + 0x120) + *(int *)(param_1 + 0x124)) * 2 + 1;
    if (*piVar5 == 1) {
      iVar1 = 1;
    }
    else {
      puVar2 = (undefined4 *)sub_0803D5B8(0x138);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &_0804920C;
        puVar2[1] = 0;
        puVar2[0x43] = 0;
        puVar2[0x42] = 0;
        puVar2[0x44] = 0;
        *puVar2 = &_0804BC04;
        *(short *)(puVar2 + 0x45) = (short)*piVar5;
        *(undefined2 *)((int)puVar2 + 0x116) = *(undefined2 *)((int)piVar5 + 2);
        *(short *)(puVar2 + 0x46) = (short)piVar5[1];
      }
      iVar1 = sub_0803D8A0();
    }
    if (0 < iVar1) {
      sub_0801FC3E(param_1,param_1 + 0xba0,piVar4,
                   *(int *)(param_1 + 0x120) + *(int *)(param_1 + 0x124),iVar1);
      iVar1 = *(int *)(param_1 + 0x120);
      iVar3 = *(int *)(param_1 + 0x124);
      if (*piVar4 <= iVar1 + iVar3) {
        if (iVar3 == 0) {
          if (iVar1 == 0) {
            *(undefined1 *)(param_1 + 0x114) = 1;
          }
          else {
            *(int *)(param_1 + 0x120) = iVar1 + -1;
          }
        }
        else {
          *(int *)(param_1 + 0x124) = iVar3 + -1;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else if (param_3 == 2) {
    if (*(int *)(param_1 + 0x124) == 0) {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
    }
    else {
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + -1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else if (param_3 == 3) {
    if (*(int *)(param_1 + 0x124) < 5) {
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
    }
    else {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return 0;
}

