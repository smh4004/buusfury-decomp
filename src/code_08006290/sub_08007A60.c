/* sub_08007A60  (original: 0x08007A60-0x08007AB4 in asm/code_08006290.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0804912C();
extern int Wfz_LoadContainer();
extern int sub_0803D5B8();
extern undefined volatile _08049604;


undefined4 * sub_08007A60(undefined4 *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)sub_0803D5B8(0x1008), param_1 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_1 + 1) = param_2;
    iVar2 = 0;
    *param_1 = &_08049604;
    do {
      iVar1 = *(int *)(iVar2 * 4 + param_3 + 4);
      if (iVar1 == 0) {
        sub_0804912C((int)(param_1 + iVar2 * 0x200 + 2),0,0x800);
      }
      else {
        Wfz_LoadContainer(iVar1,param_1 + iVar2 * 0x200 + 2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  return param_1;
}

