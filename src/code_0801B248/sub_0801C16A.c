/* sub_0801C16A  (original: 0x0801C16A-0x0801C1CC in asm/code_0801B248.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int __call_via_r1();
extern int sub_08021452();
extern int __call_via_r2();
extern int sub_08011944();
extern undefined volatile DAT_03001c4c;


void sub_0801C16A(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)((int)param_2 + 0x12);
  if (sVar1 == 0) {
    iVar2 = *(int *)(*param_2 + 0x84);
    iVar2 = __call_via_r1(param_2,iVar2 + *param_2,iVar2,param_4,param_4);
    if ((int)((uint)*(ushort *)(iVar2 + 6) << 0x1e) < 0) {
      *(undefined2 *)((int)param_2 + 0x12) = 1;
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      sub_08021452(*(undefined4 *)(param_1 + 8),(char)param_2[4],
                   *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x34));
      *(undefined4 *)(param_1 + 8) = 0;
      sub_08011944(&DAT_03001c4c,*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    *(short *)((int)param_2 + 0x12) = sVar1 + 1;
    if (0x1f < (ushort)(sVar1 + 1U)) {
      __call_via_r2(param_2,0,*(int *)(*param_2 + 0x28) + *param_2);
    }
  }
  return;
}

