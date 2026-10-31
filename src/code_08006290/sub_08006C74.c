/* sub_08006C74  (original: 0x08006C74-0x08006CE0 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r3();
extern int sub_080193AE();
extern int __call_via_r2();
extern int volatile DAT_03001c50;
extern undefined4 volatile DAT_03001c54;
extern undefined4 volatile DAT_03002bd8;


void sub_08006C74(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      piVar2 = (int *)param_1[iVar3 + 2];
      iVar1 = 0;
      if (0 < DAT_03001c50) {
        do {
          if ((int *)(&DAT_03001c54)[iVar1] == piVar2) {
            __call_via_r3(piVar2,0xe,0,*(int *)(*piVar2 + 0x24) + *piVar2);
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_03001c50);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  sub_080193AE(&DAT_03002bd8,0xe);
  if (param_1 != (int *)0x0) {
    __call_via_r2(param_1,1,*(int *)*param_1 + *param_1);
  }
  return;
}

