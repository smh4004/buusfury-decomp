/* sub_08002F72  (original: 0x08002F72-0x08002FA8 in asm/code_08002184.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_0802B9A8();
extern int sub_0801191A();
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile __iwram_end;


void sub_08002F72(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  char *pcVar4;
  
  cVar3 = '\0';
  iVar1 = 0;
  do {
    pcVar4 = (char *)(iVar1 + 0x8000000);
    iVar1 = iVar1 + 1;
    cVar3 = *pcVar4 + cVar3;
  } while (iVar1 < 0xa0);
  if (cVar3 != '3') {
    __iwram_end = 1;
  }
  uVar2 = sub_0802B9A8(0);
  sub_0801191A(&DAT_03001c4c,uVar2);
  return;
}

