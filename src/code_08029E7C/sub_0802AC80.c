/* sub_0802AC80  (original: 0x0802AC80-0x0802ACB2 in asm/code_08029E7C.s)
 * Ghidra decompilation, compiled with GCC; not reached by the capture routes (compiles; unverified).
 */
#include "ghidra_types.h"
extern int sub_08011C70();
extern int volatile DAT_03003008;
extern int volatile DAT_03001c50;
extern undefined volatile DAT_03001c4c;
extern undefined4 volatile DAT_03001c54;


void sub_0802AC80(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_03001c50) {
    do {
      if ((&DAT_03001c54)[iVar1] == DAT_03003008) {
        sub_08011C70(&DAT_03001c4c,0x26,DAT_03003008);
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_03001c50);
  }
  return;
}

