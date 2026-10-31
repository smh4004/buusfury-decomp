/* sub_0803B37E  (original: 0x0803B37E-0x0803B410 in asm/code_0803A498.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EE78();
extern int sub_0800FE78();
extern int sub_0803E378();
extern int __call_via_r3();
extern int sub_0803FACC();
extern undefined volatile gUnknown_083192A8;
extern undefined volatile gUnknown_086B8098;
extern int * volatile DAT_03001c34;
extern undefined volatile DAT_03003e5c;


void sub_0803B37E(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  unsigned int __frame[18];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_48 ((undefined1 *)((char *)__frame + 0x0))
#define auStack_44 ((undefined1 *)((char *)__frame + 0x4))
#define local_34 (*(undefined1 *)((char *)__frame + 0x14))
#define local_30 (*(undefined4 *)((char *)__frame + 0x18))
#define local_2c (*(undefined * *)((char *)__frame + 0x1c))
#define local_28 (*(int *)((char *)__frame + 0x20))
#define local_18 (*(int *)((char *)__frame + 0x30))
  uVar1 = *(short *)(param_2 + 0x12) + 1;
  *(ushort *)(param_2 + 0x12) = uVar1;
  if ((*(int *)(param_1 + 4) == 0) && (uVar1 - 0x50 < 0x18)) {
    sub_0800FE78(auStack_44,param_2);
    local_34 = *(undefined1 *)(param_2 + 0x10);
    local_2c = &gUnknown_086B8098;
    local_30 = 0x400;
    local_48[0] = 0;
    local_28 = param_2;
    local_18 = param_2;
    iVar2 = __call_via_r3(DAT_03001c34,0,local_48,*(int *)(*DAT_03001c34 + 0x24) + *DAT_03001c34);
    if (iVar2 != 0) {
      iVar2 = sub_0803FACC(2);
      sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
      *(undefined4 *)(param_1 + 4) = 1;
    }
  }
  if (*(ushort *)(param_2 + 0x12) == 0x68) {
    sub_0800EE78(param_2);
  }
  else {
    *(char *)(param_2 + 0x11) = (char)(*(ushort *)(param_2 + 0x12) >> 3);
  }
  return;
}

