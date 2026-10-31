/* sub_08035B94  (original: 0x08035B94-0x08035BD0 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08012588();
extern undefined4 volatile DAT_03001c50;
extern undefined4 volatile DAT_03001c54;


void sub_08035B94(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = 0;
  puVar2 = param_4;
  if (iVar3 != 0) {
    puVar2 = &DAT_03001c50;
    param_3 = 0;
    if (0 < DAT_03001c50) {
      do {
        if ((&DAT_03001c54)[param_3] == iVar3) {
          iVar1 = iVar3 + 0x214;
          break;
        }
        param_3 = param_3 + 1;
      } while (param_3 < DAT_03001c50);
    }
  }
  sub_08012588(*(undefined4 *)(param_1 + 8),iVar1,param_3,puVar2,param_4);
  return;
}

