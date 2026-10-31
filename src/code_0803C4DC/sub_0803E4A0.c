/* sub_0803E4A0  (original: 0x0803E4A0-0x0803E4E4 in asm/code_0803C4DC.s)
 * Ghidra decompilation, compiled with GCC; equivalent on 6/6 snapshots, 56% of instructions covered.
 */
#include "ghidra_types.h"
extern int sub_0803D63C();
extern int sub_08049138();


void sub_0803E4A0(int param_1,int param_2)

{
  int iVar1;
  int a1;
  int iVar2;
  
  iVar2 = 0;
  do {
    a1 = iVar2 * 0x40 + param_2;
    if ((~*(ushort *)(a1 + 0x10) & 0x101) == 0) {
      iVar1 = 0;
      do {
        if ((*(byte *)(iVar1 * 0x40 + param_1 + 0x10) & 1) == 0) {
          sub_08049138(iVar1 * 0x40 + param_1,a1,0x40);
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x10);
    }
    iVar2 = iVar2 + 1;
    if (0xf < iVar2) {
      sub_0803D63C(param_2);
      return;
    }
  } while( true );
}

