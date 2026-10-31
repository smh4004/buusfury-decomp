/* sub_08004B08  (original: 0x08004B08-0x08004B52 in asm/code_0800419C.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 97% of instructions covered.
 */
#include "ghidra_types.h"
extern char volatile DAT_0300197c;
extern undefined4 volatile gUnknown_0874C948;
extern char volatile DAT_0300197d;


int sub_08004B08(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar1 = (&gUnknown_0874C948)[iVar4];
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x14)) {
      do {
        pcVar3 = *(char **)(iVar2 * 4 + iVar1 + 0x18);
        if ((*pcVar3 == DAT_0300197c) && (pcVar3[1] == DAT_0300197d)) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x14));
    }
    iVar4 = iVar4 + 1;
    if (0x36 < iVar4) {
      return 0;
    }
  } while( true );
}

