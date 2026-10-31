/* sub_08044668  (original: 0x08044668-0x080446A8 in asm/code_08042BF8.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern byte * volatile DAT_03005260;
extern int volatile DAT_0300525c;


void sub_08044668(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0300525c;
  if ((int)((uint)*DAT_03005260 << 0x18) < 0) {
    param_1 = DAT_0300525c + param_1;
    if (param_2 == 0) {
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + (char)*(undefined2 *)(param_3 + 0x2e);
    }
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + '\x02';
  }
  else {
    if (param_2 == 0) {
      *(char *)(DAT_0300525c + 0xf) =
           *(char *)(DAT_0300525c + 0xf) + (char)*(undefined2 *)(param_3 + 0x2e);
    }
    *(char *)(iVar1 + 0xf) = *(char *)(iVar1 + 0xf) + '\x03';
  }
  return;
}

