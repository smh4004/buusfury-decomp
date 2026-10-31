/* sub_08013BCC  (original: 0x08013BCC-0x08013C02 in asm/code_08012D24.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0803DF14();


undefined1 sub_08013BCC(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(byte *)(param_1 + 0xc) != 0) {
    do {
      if (*(byte *)(param_1 + iVar1 + 0xd) == param_2) {
        return *(undefined1 *)(iVar1 * 2 + param_1 + 0x2f);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  sub_0803DF14(L"\"Energy attack level requested for attack which doesn\'t exist for player!\"",
               "T:\\Source\\CharacterData.cpp",0x18d,0);
  return 0;
}

