/* sub_0802C644  (original: 0x0802C644-0x0802C672 in asm/code_0802BECC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08040284();
extern int __call_via_r2();
extern int sub_0800EEB0();
extern int * volatile DAT_03001c34;
extern ushort volatile DAT_03003304;
extern undefined volatile DAT_03003300;


undefined4 sub_0802C644(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar3 = **(int **)(param_1 + 4);
    iVar3 = __call_via_r2(*(int **)(param_1 + 4),9,*(int *)(iVar3 + 0x34) + iVar3,param_4,param_4);
    piVar2 = DAT_03001c34;
    if (iVar3 == 0) {
      iVar3 = sub_0800EEB0(*(undefined4 *)(param_1 + 4),0x11);
      if (iVar3 == 0) {
        if ((DAT_03003304 & 0xf0) != 0) {
          *(byte *)((int)DAT_03001c34 + 0x11) = *(byte *)((int)DAT_03001c34 + 0x11) ^ 1;
        }
        iVar3 = sub_08040284(&DAT_03003300,0xf0,0x14,0x5a);
        if ((iVar3 != 0) &&
           (iVar3 = *(int *)(param_1 + 8) + 1, *(int *)(param_1 + 8) = iVar3, piVar2 = DAT_03001c34,
           iVar3 == 5)) {
          DAT_03001c34[0x68] = *(int *)(param_1 + 0xc);
          piVar2[0x69] = *(int *)(param_1 + 0x10);
          __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
          __call_via_r2(param_2,9,*(int *)(*param_2 + 0x28) + *param_2);
          *(undefined1 *)(param_1 + 0x14) = 1;
          *(undefined1 *)(param_1 + 0x15) = 0x3c;
        }
      }
    }
    else {
      DAT_03001c34[0x68] = *(int *)(param_1 + 0xc);
      piVar2[0x69] = *(int *)(param_1 + 0x10);
      __call_via_r2(DAT_03001c34,0,*(int *)(*DAT_03001c34 + 0x28) + *DAT_03001c34);
      __call_via_r2(param_2,9,*(int *)(*param_2 + 0x28) + *param_2);
      *(undefined1 *)(param_1 + 0x14) = 1;
      *(undefined1 *)(param_1 + 0x15) = 0x3c;
    }
    return 0;
  }
  if (*(char *)(param_1 + 0x14) != '\x01') {
    return 1;
  }
  cVar1 = *(char *)(param_1 + 0x15);
  *(char *)(param_1 + 0x15) = cVar1 + -1;
  if (cVar1 != '\0') {
    return 0;
  }
  return 1;
}

