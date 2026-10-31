/* sub_0803CA3A  (original: 0x0803CA3A-0x0803CAFE in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800FE78();
extern int sub_0800ED18();
extern int sub_0803D5B8();
extern int sub_0800ECDA();
extern int volatile DAT_03001b94;
extern undefined volatile _0804C6B4;


void sub_0803CA3A(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int __frame[12];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_30 (*(int *)((char *)__frame + 0x0))
#define local_2c (*(int *)((char *)__frame + 0x4))
#define local_28 (*(int *)((char *)__frame + 0x8))
#define local_24 (*(int *)((char *)__frame + 0xc))
#define local_20 (*(int *)((char *)__frame + 0x10))
#define local_1c (*(int *)((char *)__frame + 0x14))
#define local_18 (*(int *)((char *)__frame + 0x18))
#define local_14 (*(int *)((char *)__frame + 0x1c))
  if ((DAT_03001b94 != 0) && (*(int *)(DAT_03001b94 + 0x1cc) != 0)) {
    sub_0800FE78(&local_20);
    sub_0800FE78(&local_30,param_2);
    iVar1 = (local_20 + local_18 >> 1) - (local_30 + local_28 >> 1);
    iVar3 = (local_1c + local_14 >> 1) - (local_2c + local_24 >> 1);
    iVar4 = iVar1;
    if (iVar1 < 0) {
      iVar4 = -iVar1;
    }
    iVar5 = iVar3;
    if (iVar3 < 0) {
      iVar5 = -iVar3;
    }
    if (iVar5 < iVar4) {
      if (iVar1 < 1) {
        *(undefined1 *)(param_2 + 0x10) = 2;
      }
      else {
        *(undefined1 *)(param_2 + 0x10) = 3;
      }
    }
    else if (iVar3 < 1) {
      *(undefined1 *)(param_2 + 0x10) = 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
    puVar2 = (undefined4 *)sub_0803D5B8(4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &_0804C6B4;
    }
    sub_0800ECDA(param_2,4);
    sub_0800ED18(param_2,puVar2);
  }
  return;
}

