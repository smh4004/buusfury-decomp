/* sub_08028CF4  (original: 0x08028CF4-0x08028DAE in asm/code_08027E48.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C0C();
extern int sub_08011944();
extern int sub_08009324();
extern undefined4 volatile DAT_03001a50;
extern undefined volatile DAT_03001c4c;
extern undefined volatile gUnknown_086B8088;


void sub_08028CF4(int param_1,int param_2)

{
  int iVar1;
  unsigned int __frame[17];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_44 ((undefined1 *)((char *)__frame + 0x0))
#define iStack_40 (*(int *)((char *)__frame + 0x4))
#define iStack_3c (*(int *)((char *)__frame + 0x8))
#define iStack_38 (*(int *)((char *)__frame + 0xc))
#define iStack_34 (*(int *)((char *)__frame + 0x10))
#define uStack_30 (*(undefined1 *)((char *)__frame + 0x14))
#define uStack_2c (*(undefined4 *)((char *)__frame + 0x18))
#define puStack_28 (*(undefined * *)((char *)__frame + 0x1c))
#define uStack_24 (*(undefined4 *)((char *)__frame + 0x20))
#define iStack_18 (*(int *)((char *)__frame + 0x2c))
#define iStack_14 (*(int *)((char *)__frame + 0x30))
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (param_2 != 0) {
      iStack_18 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x2c);
      iStack_34 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
      uStack_24 = *(undefined4 *)(param_1 + 0x40);
      uStack_30 = (undefined1)*(undefined4 *)(param_1 + 0x38);
      puStack_28 = &gUnknown_086B8088;
      uStack_2c = 0x400;
      auStack_44[0] = 0;
      iStack_40 = iStack_18 + -8;
      iStack_38 = iStack_18 + 8;
      iStack_3c = iStack_34 + -8;
      iStack_34 = iStack_34 + 8;
      iStack_14 = param_1;
      iVar1 = sub_08009324(&iStack_40,DAT_03001a50);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      else {
        iVar1 = sub_08011C0C(&DAT_03001c4c,0,auStack_44);
        if (iVar1 == 0) {
          if (*(int *)(param_1 + 0x34) < 0x50) {
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
          }
          else {
            *(undefined1 *)(param_1 + 0x10) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
      }
    }
  }
  else if ((*(char *)(param_1 + 0x10) == '\x01') &&
          (iVar1 = *(int *)(param_1 + 0x34) + -4, *(int *)(param_1 + 0x34) = iVar1, iVar1 < 1)) {
    sub_08011944(&DAT_03001c4c,param_1);
  }
  return;
}

