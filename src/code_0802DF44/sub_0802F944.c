/* sub_0802F944  (original: 0x0802F944-0x0802F976 in asm/code_0802DF44.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0800EEB0();
extern int sub_08000158();
extern int sub_08011C70();
extern undefined4 volatile DAT_03001b30;
extern undefined volatile DAT_03001c4c;


undefined4 sub_0802F944(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar1 = sub_08000158(0xfc);
  iVar2 = sub_08011C70(&DAT_03001c4c,5,uVar1);
  if (((iVar2 != 0) && (*(undefined4 **)(iVar2 + 0x14) == &DAT_03001b30)) &&
     (iVar2 = sub_0800EEB0(iVar2,0x12), iVar2 != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}

