/* sub_08035E8C  (original: 0x08035E8C-0x08035EE2 in asm/code_08034294.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C70();
extern int sub_0800FDFA();
extern int __call_via_r2();
extern undefined volatile DAT_03001c4c;


int sub_08035E8C(undefined4 param_1,int *param_2)

{
  int iVar1;
  unsigned int __frame[7];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define iStack_1c (*(int *)((char *)__frame + 0x0))
#define iStack_18 (*(int *)((char *)__frame + 0x4))
  sub_0800FDFA(&iStack_1c);
  iVar1 = sub_08011C70(&DAT_03001c4c,0x21,&iStack_1c);
  if (iVar1 != 0) {
    __call_via_r2(param_2,1,*(int *)(*param_2 + 0x48) + *param_2);
    param_2[0x68] = iStack_1c << 8;
    param_2[0x69] = (iStack_18 + 0x10) * 0x100;
    __call_via_r2(param_2,0,*(int *)(*param_2 + 0x48) + *param_2);
    iVar1 = 1;
  }
  return iVar1;
}

