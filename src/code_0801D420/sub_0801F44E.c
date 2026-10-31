/* sub_0801F44E  (original: 0x0801F44E-0x0801F4FC in asm/code_0801D420.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0801F3DC();
extern undefined4 volatile DAT_0300114c;
extern int volatile DAT_0300155c;
extern undefined1 volatile DAT_03001068;
extern undefined1 volatile DAT_0300106a;
extern undefined1 volatile gUnknown_083BD2F8;


void sub_0801F44E(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int __frame[9];   /* stack slots at their original offsets (see autodecomp.stack_frame) */
#define auStack_24 ((undefined1 *)((char *)__frame + 0x0))
#define local_20 (*(undefined1 *)((char *)__frame + 0x4))
#define local_1f (*(undefined1 *)((char *)__frame + 0x5))
#define local_1c (*(undefined1 * *)((char *)__frame + 0x8))
#define local_18 (*(int * *)((char *)__frame + 0xc))
  *(undefined1 *)(param_1 + 0x114) = 2;
  local_18 = &DAT_0300114c;
  iVar2 = param_1 + 300;
  iVar1 = 0;
  if (0 < DAT_0300114c) {
    do {
      local_20 = 0;
      local_1f = (undefined1)local_18[iVar1 + 1];
      sub_0801F3DC(param_1,iVar2,auStack_24,1);
      *(undefined1 *)(param_1 + 0x114) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *local_18);
  }
  iVar1 = 0;
  do {
    if (((&gUnknown_083BD2F8)[iVar1 * 0x34] & 1) == 0) {
      local_20 = 1;
      local_1f = (undefined1)iVar1;
      local_1c = &DAT_03001068 + iVar1;
      sub_0801F3DC(param_1,iVar2,auStack_24,(&DAT_0300106a)[iVar1]);
      if (local_1c[2] != '\0') {
        *(undefined1 *)(param_1 + 0x114) = 0;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x53);
  if (DAT_0300155c != 0) {
    local_20 = 2;
    local_1f = 0;
    sub_0801F3DC(param_1,iVar2,auStack_24,DAT_0300155c);
    *(undefined1 *)(param_1 + 0x114) = 0;
  }
  return;
}

