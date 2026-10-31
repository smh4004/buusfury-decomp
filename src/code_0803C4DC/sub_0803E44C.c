/* sub_0803E44C  (original: 0x0803E44C-0x0803E4A0 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 72% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D5B8();
extern int sub_08049138();


int sub_0803E44C(int param_1)

{
  int iVar1;
  int iVar2;
  int a1;
  int iVar3;
  
  iVar1 = sub_0803D5B8(0x400);
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 0x40;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar3 + iVar1 + 0x10) = 0;
  } while (iVar2 < 0x10);
  iVar3 = 0;
  iVar2 = iVar1;
  do {
    a1 = iVar3 * 0x40 + param_1;
    if ((~*(ushort *)(a1 + 0x10) & 0x101) == 0) {
      *(byte *)(a1 + 0x10) = *(byte *)(a1 + 0x10) & 0xfe;
      sub_08049138(iVar2,a1,0x40);
      *(byte *)(iVar2 + 0x10) = *(byte *)(iVar2 + 0x10) | 1;
      iVar2 = iVar2 + 0x40;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return iVar1;
}

