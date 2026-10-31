/* sub_0803909C  (original: 0x0803909C-0x08039102 in asm/code_080383D4.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803E378();
extern int sub_08011C0C();
extern int sub_0800FE34();
extern int sub_0803FACC();
extern undefined volatile gUnknown_083192A8;
extern undefined volatile DAT_03001c4c;
extern undefined volatile DAT_03003e5c;
extern undefined volatile gUnknown_086B8090;


bool sub_0803909C(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int __frame[16];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define local_40 ((undefined1 *)((char *)__frame + 0x0))
#define auStack_3c ((undefined1 *)((char *)__frame + 0x4))
#define local_2c (*(undefined1 *)((char *)__frame + 0x14))
#define local_28 (*(undefined4 *)((char *)__frame + 0x18))
#define local_24 (*(undefined * *)((char *)__frame + 0x1c))
#define local_20 (*(int *)((char *)__frame + 0x20))
#define local_10 (*(int *)((char *)__frame + 0x30))
  local_2c = *(undefined1 *)(param_2 + 0x10);
  local_24 = &gUnknown_086B8090;
  local_28 = 0x1000;
  local_20 = param_2;
  sub_0800FE34(auStack_3c);
  local_40[0] = (undefined1)*(undefined4 *)(param_2 + 0x1d0);
  local_10 = param_2;
  iVar1 = sub_08011C0C(&DAT_03001c4c,0,local_40);
  if (iVar1 != 0) {
    iVar2 = sub_0803FACC(2);
    sub_0803E378(&DAT_03003e5c,&gUnknown_083192A8 + (iVar2 + 0x30) * 0xc,0x40,0);
  }
  return iVar1 != 0;
}

